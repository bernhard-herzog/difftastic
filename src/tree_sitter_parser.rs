use std::{borrow::Borrow, ffi::OsStr};

use tree_sitter::{Language, Parser, TreeCursor};
use typed_arena::Arena;

use crate::{lines::NewlinePositions, syntax::Syntax};

extern "C" {
    fn tree_sitter_clojure() -> Language;
    fn tree_sitter_css() -> Language;
    fn tree_sitter_elisp() -> Language;
    fn tree_sitter_go() -> Language;
    fn tree_sitter_javascript() -> Language;
    fn tree_sitter_json() -> Language;
    fn tree_sitter_ocaml() -> Language;
    fn tree_sitter_ocaml_interface() -> Language;
    fn tree_sitter_rust() -> Language;
}

pub fn from_extension(extension: &OsStr) -> Option<(String, Language)> {
    // TODO: find a nice way to extract this data from the
    // package.json in these parsers.
    match extension.to_string_lossy().borrow() {
        "clj" => Some(("Clojure".into(), unsafe { tree_sitter_clojure() })),
        "css" => Some(("CSS".into(), unsafe { tree_sitter_css() })),
        "el" => Some(("Emacs Lisp".into(), unsafe { tree_sitter_elisp() })),
        "go" => Some(("Go".into(), unsafe { tree_sitter_go() })),
        "js" | "jsx" => Some(("JavaScript".into(), unsafe { tree_sitter_javascript() })),
        "json" => Some(("JSON".into(), unsafe { tree_sitter_json() })),
        "ml" => Some(("OCaml".into(), unsafe { tree_sitter_ocaml() })),
        "mli" => Some(("OCaml Interface".into(), unsafe {
            tree_sitter_ocaml_interface()
        })),
        "rs" => Some(("Rust".into(), unsafe { tree_sitter_rust() })),
        _ => None,
    }
}

pub fn parse<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    language: Language,
) -> Vec<&'a Syntax<'a>> {
    let mut parser = Parser::new();
    parser
        .set_language(language)
        .expect("Incompatible tree-sitter version");

    let tree = parser.parse(src, None).unwrap();

    let nl_pos = NewlinePositions::from(src);
    let mut cursor = tree.walk();

    // The tree always has a single root, whereas we want nodes for
    // each top level syntax item.
    cursor.goto_first_child();

    syntax_from_cursor(arena, src, &nl_pos, &mut cursor, false)
}

fn syntax_from_cursor<'a>(
    arena: &'a Arena<Syntax<'a>>,
    src: &str,
    nl_pos: &NewlinePositions,
    cursor: &mut TreeCursor,
    skip_ends: bool,
) -> Vec<&'a Syntax<'a>> {
    let mut result: Vec<&Syntax> = vec![];

    let mut is_first = true;
    loop {
        let node = cursor.node();

        if node.kind() == "interpreted_string_literal"
            || node.kind() == "string_literal"
            || node.kind() == "string"
        {
            // Treat golang interpolated strings and rust string as atoms.
            // TODO: why are string literals grey without this? (see old/new.go).
            let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
            let content = &src[node.start_byte()..node.end_byte()];
            result.push(Syntax::new_atom(arena, position, content));
        } else if cursor.goto_first_child() {
            let has_delimiters = cursor.field_name() == Some("open");

            // This node has children, so treat it as a list.
            let children = syntax_from_cursor(arena, src, nl_pos, cursor, has_delimiters);
            cursor.goto_parent();

            let mut open_content = "";
            let mut open_position = nl_pos.from_offsets(node.start_byte(), node.start_byte());
            let mut close_content = "";
            let mut close_position = nl_pos.from_offsets(node.end_byte(), node.end_byte());

            if has_delimiters {
                cursor.goto_first_child();
                let first_child_node = cursor.node();
                while cursor.goto_next_sibling() {}
                let last_child_node = cursor.node();

                open_content = &src[first_child_node.start_byte()..first_child_node.end_byte()];
                open_position =
                    nl_pos.from_offsets(first_child_node.start_byte(), first_child_node.end_byte());

                close_content = &src[last_child_node.start_byte()..last_child_node.end_byte()];
                close_position =
                    nl_pos.from_offsets(last_child_node.start_byte(), last_child_node.end_byte());

                cursor.goto_parent();
            }

            result.push(Syntax::new_list(
                arena,
                open_content,
                open_position,
                children,
                close_content,
                close_position,
            ))
        } else {
            let skip_this = skip_ends && (is_first || is_last_sibling(cursor));

            if !skip_this {
                let position = nl_pos.from_offsets(node.start_byte(), node.end_byte());
                let content = &src[node.start_byte()..node.end_byte()];

                if node.is_extra() {
                    result.push(Syntax::new_comment(arena, position, content));
                } else {
                    result.push(Syntax::new_atom(arena, position, content));
                }
            }
        }
        is_first = false;

        if !cursor.goto_next_sibling() {
            break;
        }
    }

    result
}

fn is_last_sibling(cursor: &mut TreeCursor) -> bool {
    let node = cursor.node();
    node.next_sibling().is_none()
}
