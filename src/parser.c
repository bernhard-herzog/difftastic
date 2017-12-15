#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 194
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 1
#define TOKEN_COUNT 122
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT_DOT = 6,
  anon_sym_import = 7,
  anon_sym_qualified = 8,
  anon_sym_as = 9,
  anon_sym_hiding = 10,
  anon_sym_data = 11,
  anon_sym_EQ = 12,
  anon_sym_newtype = 13,
  anon_sym_LBRACE = 14,
  anon_sym_COLON_COLON = 15,
  anon_sym_RBRACE = 16,
  anon_sym_type = 17,
  sym_variable_identifier = 18,
  sym_constructor_identifier = 19,
  sym_module_identifier = 20,
  anon_sym_case = 21,
  anon_sym_class = 22,
  anon_sym_default = 23,
  anon_sym_deriving = 24,
  anon_sym_do = 25,
  anon_sym_else = 26,
  anon_sym_foreign = 27,
  anon_sym_if = 28,
  anon_sym_in = 29,
  anon_sym_infix = 30,
  anon_sym_infixl = 31,
  anon_sym_infixr = 32,
  anon_sym_instance = 33,
  anon_sym_let = 34,
  anon_sym_of = 35,
  anon_sym_then = 36,
  anon_sym__ = 37,
  sym_comment = 38,
  sym_float = 39,
  anon_sym_SQUOTE = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 43,
  sym__ascii_large = 44,
  anon_sym_BANG = 45,
  anon_sym_POUND = 46,
  anon_sym_DOLLAR = 47,
  anon_sym_PERCENT = 48,
  anon_sym_AMP = 49,
  anon_sym_1 = 50,
  anon_sym_PLUS = 51,
  anon_sym_DOT = 52,
  anon_sym_SLASH = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_QMARK = 56,
  anon_sym_AT = 57,
  anon_sym_CARET = 58,
  anon_sym_PIPE = 59,
  anon_sym_DASH = 60,
  anon_sym_TILDE = 61,
  anon_sym_COLON = 62,
  anon_sym_BSLASH = 63,
  anon_sym_SEMI = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  anon_sym_BQUOTE = 67,
  sym__space = 68,
  sym__newline = 69,
  sym__tab = 70,
  sym__vertical_tab = 71,
  anon_sym_x = 72,
  anon_sym_X = 73,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 74,
  anon_sym_o = 75,
  anon_sym_O = 76,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 77,
  anon_sym_a = 78,
  anon_sym_b = 79,
  anon_sym_f = 80,
  anon_sym_n = 81,
  anon_sym_r = 82,
  anon_sym_t = 83,
  anon_sym_v = 84,
  anon_sym_NUL = 85,
  anon_sym_SOH = 86,
  anon_sym_STX = 87,
  anon_sym_ETX = 88,
  anon_sym_EOT = 89,
  anon_sym_ENQ = 90,
  anon_sym_ACK = 91,
  anon_sym_BEL = 92,
  anon_sym_BS = 93,
  anon_sym_HT = 94,
  anon_sym_LF = 95,
  anon_sym_VT = 96,
  anon_sym_FF = 97,
  anon_sym_CR = 98,
  anon_sym_SO = 99,
  anon_sym_SI = 100,
  anon_sym_DLE = 101,
  anon_sym_DC1 = 102,
  anon_sym_DC2 = 103,
  anon_sym_DC3 = 104,
  anon_sym_DC4 = 105,
  anon_sym_NAK = 106,
  anon_sym_SYN = 107,
  anon_sym_ETB = 108,
  anon_sym_CAN = 109,
  anon_sym_EM = 110,
  anon_sym_SUB = 111,
  anon_sym_ESC = 112,
  anon_sym_FS = 113,
  anon_sym_GS = 114,
  anon_sym_RS = 115,
  anon_sym_US = 116,
  anon_sym_SP = 117,
  anon_sym_DEL = 118,
  sym__integer_literal = 119,
  sym__octal_literal = 120,
  sym__hexidecimal_literal = 121,
  sym_program = 122,
  sym__statement = 123,
  sym_module = 124,
  sym_module_export_declarations = 125,
  sym_export_declaration = 126,
  sym_import_declaration = 127,
  sym_import_specification = 128,
  sym__top_level_declaration = 129,
  sym_algebraic_datatype = 130,
  sym_constructors = 131,
  sym_newtype = 132,
  sym_new_constructor = 133,
  sym_labeled_fields = 134,
  sym_type_synonym = 135,
  sym__literal = 136,
  sym__identifier = 137,
  sym_simple_type = 138,
  sym_reserved_identifier = 139,
  sym_integer = 140,
  sym_char = 141,
  sym_string = 142,
  sym__gap = 143,
  sym__graphic = 144,
  sym__small = 145,
  sym__large = 146,
  sym__symbol = 147,
  sym__special = 148,
  sym__escape = 149,
  sym__char_escape = 150,
  sym__ascii = 151,
  sym__cntrl = 152,
  aux_sym_program_repeat1 = 153,
  aux_sym_module_export_declarations_repeat1 = 154,
  aux_sym_export_declaration_repeat1 = 155,
  aux_sym_import_specification_repeat1 = 156,
  aux_sym_constructors_repeat1 = 157,
  aux_sym_labeled_fields_repeat1 = 158,
  aux_sym_labeled_fields_repeat2 = 159,
  aux_sym_string_repeat1 = 160,
  aux_sym__escape_repeat1 = 161,
  aux_sym__escape_repeat2 = 162,
  alias_sym_module_body = 163,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
  [anon_sym_data] = "data",
  [anon_sym_EQ] = "=",
  [anon_sym_newtype] = "newtype",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym_module_identifier] = "module_identifier",
  [anon_sym_case] = "case",
  [anon_sym_class] = "class",
  [anon_sym_default] = "default",
  [anon_sym_deriving] = "deriving",
  [anon_sym_do] = "do",
  [anon_sym_else] = "else",
  [anon_sym_foreign] = "foreign",
  [anon_sym_if] = "if",
  [anon_sym_in] = "in",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_instance] = "instance",
  [anon_sym_let] = "let",
  [anon_sym_of] = "of",
  [anon_sym_then] = "then",
  [anon_sym__] = "_",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [sym__ascii_large] = "_ascii_large",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_1] = "⋆",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "?",
  [anon_sym_AT] = "@",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym__tab] = "_tab",
  [sym__vertical_tab] = "_vertical_tab",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = "/[0-9a-fA-F]/",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = "/[0-7]/",
  [anon_sym_a] = "a",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_v] = "v",
  [anon_sym_NUL] = "NUL",
  [anon_sym_SOH] = "SOH",
  [anon_sym_STX] = "STX",
  [anon_sym_ETX] = "ETX",
  [anon_sym_EOT] = "EOT",
  [anon_sym_ENQ] = "ENQ",
  [anon_sym_ACK] = "ACK",
  [anon_sym_BEL] = "BEL",
  [anon_sym_BS] = "BS",
  [anon_sym_HT] = "HT",
  [anon_sym_LF] = "LF",
  [anon_sym_VT] = "VT",
  [anon_sym_FF] = "FF",
  [anon_sym_CR] = "CR",
  [anon_sym_SO] = "SO",
  [anon_sym_SI] = "SI",
  [anon_sym_DLE] = "DLE",
  [anon_sym_DC1] = "DC1",
  [anon_sym_DC2] = "DC2",
  [anon_sym_DC3] = "DC3",
  [anon_sym_DC4] = "DC4",
  [anon_sym_NAK] = "NAK",
  [anon_sym_SYN] = "SYN",
  [anon_sym_ETB] = "ETB",
  [anon_sym_CAN] = "CAN",
  [anon_sym_EM] = "EM",
  [anon_sym_SUB] = "SUB",
  [anon_sym_ESC] = "ESC",
  [anon_sym_FS] = "FS",
  [anon_sym_GS] = "GS",
  [anon_sym_RS] = "RS",
  [anon_sym_US] = "US",
  [anon_sym_SP] = "SP",
  [anon_sym_DEL] = "DEL",
  [sym__integer_literal] = "_integer_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__hexidecimal_literal] = "_hexidecimal_literal",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_module] = "module",
  [sym_module_export_declarations] = "module_export_declarations",
  [sym_export_declaration] = "export_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_import_specification] = "import_specification",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_algebraic_datatype] = "algebraic_datatype",
  [sym_constructors] = "constructors",
  [sym_newtype] = "newtype",
  [sym_new_constructor] = "new_constructor",
  [sym_labeled_fields] = "labeled_fields",
  [sym_type_synonym] = "type_synonym",
  [sym__literal] = "_literal",
  [sym__identifier] = "_identifier",
  [sym_simple_type] = "simple_type",
  [sym_reserved_identifier] = "reserved_identifier",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__gap] = "_gap",
  [sym__graphic] = "_graphic",
  [sym__small] = "_small",
  [sym__large] = "_large",
  [sym__symbol] = "_symbol",
  [sym__special] = "_special",
  [sym__escape] = "_escape",
  [sym__char_escape] = "_char_escape",
  [sym__ascii] = "_ascii",
  [sym__cntrl] = "_cntrl",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_module_export_declarations_repeat1] = "module_export_declarations_repeat1",
  [aux_sym_export_declaration_repeat1] = "export_declaration_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_labeled_fields_repeat1] = "labeled_fields_repeat1",
  [aux_sym_labeled_fields_repeat2] = "labeled_fields_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [alias_sym_module_body] = "module_body",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__ascii_large] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__tab] = {
    .visible = false,
    .named = true,
  },
  [sym__vertical_tab] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_US] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEL] = {
    .visible = true,
    .named = false,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexidecimal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_export_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_export_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_specification] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_algebraic_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym_newtype] = {
    .visible = true,
    .named = true,
  },
  [sym_new_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_type_synonym] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__graphic] = {
    .visible = false,
    .named = true,
  },
  [sym__small] = {
    .visible = false,
    .named = true,
  },
  [sym__large] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__special] = {
    .visible = false,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym__char_escape] = {
    .visible = false,
    .named = true,
  },
  [sym__ascii] = {
    .visible = false,
    .named = true,
  },
  [sym__cntrl] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_export_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_labeled_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_labeled_fields_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_module_body] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = alias_sym_module_body,
  },
  [2] = {
    [4] = alias_sym_module_body,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(84);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(85);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(86);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'G')
        ADVANCE(27);
      if (lookahead == 'H')
        ADVANCE(29);
      if (lookahead == 'L')
        ADVANCE(31);
      if (lookahead == 'N')
        ADVANCE(33);
      if (lookahead == 'R')
        ADVANCE(43);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(56);
      if (lookahead == 'V')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(61);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      ADVANCE(39);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(34);
      if (lookahead == 'U')
        ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'K')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '}')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '\r')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 41:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(47);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
      if (lookahead == 'Y')
        ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 50:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'B')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 54:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'N')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '+')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '}')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 84:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(84);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(85);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(86);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(30);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(91);
      if (lookahead == 'U')
        ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'K')
        ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 'L')
        ADVANCE(42);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(44);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(95);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'Y')
        ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'X')
        ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'B')
        ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'N')
        ADVANCE(55);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(108);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 109:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '\r')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 110:
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '}')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '\r')
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'O')
        ADVANCE(117);
      if (lookahead == 'X')
        ADVANCE(119);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(117);
      if (lookahead == 'x')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(122);
      if (lookahead == ']')
        ADVANCE(123);
      if (lookahead != 0)
        ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(122);
      if (lookahead == ']')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(121);
      END_STATE();
    case 124:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '\r')
        ADVANCE(125);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(140);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(144);
      if (lookahead == 'r')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'v')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'g')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'o')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'g')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(168);
      if (lookahead == 'm')
        ADVANCE(169);
      if (lookahead == 'n')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'o')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'x')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(178);
      if (lookahead == 'r')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'o')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'd')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'w')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'y')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'h')
        ADVANCE(205);
      if (lookahead == 'y')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'h')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(216);
      if (lookahead == '.')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == '.')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(108);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 219:
      if (lookahead == '-')
        ADVANCE(115);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'O')
        ADVANCE(221);
      if (lookahead == 'X')
        ADVANCE(223);
      if (lookahead == 'e')
        ADVANCE(104);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead == 'x')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(222);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == 'n')
        SKIP(108);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'l')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'o')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(241);
      if (lookahead == 'r')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'v')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'm')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(272);
      if (lookahead == 's')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'x')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(275);
      if (lookahead == 'r')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'y')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(302);
      if (lookahead == 'y')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(313);
      if (lookahead == '.')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(314);
      if (lookahead == '.')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(314);
      END_STATE();
    case 315:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(323);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == 'w')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(315);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(316);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(317);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(217);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 317:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 318:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'h')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 319:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(320);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 320:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'r')
        ADVANCE(321);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 321:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 323:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(323);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == 'w')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(315);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      END_STATE();
    case 324:
      if (lookahead == 'n')
        SKIP(315);
      END_STATE();
    case 325:
      if (lookahead == 'h')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'r')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'e')
        ADVANCE(322);
      END_STATE();
    case 329:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '\r')
        ADVANCE(332);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(329);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 330:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 332:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '\r')
        ADVANCE(332);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(329);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 333:
      if (lookahead == 'n')
        SKIP(329);
      END_STATE();
    case 334:
      if (lookahead == '\n')
        ADVANCE(335);
      if (lookahead == '\r')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(350);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 'q')
        ADVANCE(353);
      if (lookahead == 't')
        ADVANCE(362);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(334);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 335:
      if (lookahead == '\n')
        ADVANCE(335);
      if (lookahead == '\r')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(336);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 'q')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(335);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(168);
      if (lookahead == 'n')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'd')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'h')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 349:
      if (lookahead == '\n')
        ADVANCE(335);
      if (lookahead == '\r')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(350);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 'q')
        ADVANCE(353);
      if (lookahead == 't')
        ADVANCE(362);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(334);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 350:
      if (lookahead == 'n')
        SKIP(334);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'o')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(364);
      if (lookahead == '\r')
        ADVANCE(367);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '.')
        ADVANCE(368);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(369);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(362);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(363);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 364:
      if (lookahead == '\n')
        ADVANCE(364);
      if (lookahead == '\r')
        ADVANCE(364);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '.')
        ADVANCE(365);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(366);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(337);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(348);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 367:
      if (lookahead == '\n')
        ADVANCE(364);
      if (lookahead == '\r')
        ADVANCE(367);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '.')
        ADVANCE(368);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(369);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(362);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(363);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 368:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 369:
      if (lookahead == 'n')
        SKIP(363);
      END_STATE();
    case 370:
      if (lookahead == '\t')
        SKIP(370);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(377);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 371:
      if (lookahead == '\t')
        ADVANCE(371);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(371);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 377:
      if (lookahead == '\t')
        SKIP(370);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(377);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 378:
      if (lookahead == '\t')
        ADVANCE(379);
      if (lookahead == '\n')
        ADVANCE(380);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 381:
      if (lookahead == '\t')
        ADVANCE(379);
      if (lookahead == '\n')
        ADVANCE(380);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 382:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(394);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'a')
        ADVANCE(395);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(397);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 383:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(383);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(384);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'a')
        ADVANCE(385);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'h')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(383);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'd')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'g')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 393:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(394);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'a')
        ADVANCE(395);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(397);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 394:
      if (lookahead == 'n')
        SKIP(382);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 403:
      if (lookahead == '\n')
        ADVANCE(404);
      if (lookahead == '\r')
        ADVANCE(455);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == 'A')
        ADVANCE(456);
      if (lookahead == 'B')
        ADVANCE(458);
      if (lookahead == 'C')
        ADVANCE(460);
      if (lookahead == 'D')
        ADVANCE(462);
      if (lookahead == 'E')
        ADVANCE(466);
      if (lookahead == 'F')
        ADVANCE(471);
      if (lookahead == 'G')
        ADVANCE(472);
      if (lookahead == 'H')
        ADVANCE(473);
      if (lookahead == 'L')
        ADVANCE(474);
      if (lookahead == 'N')
        ADVANCE(475);
      if (lookahead == 'O')
        ADVANCE(444);
      if (lookahead == 'R')
        ADVANCE(476);
      if (lookahead == 'S')
        ADVANCE(477);
      if (lookahead == 'U')
        ADVANCE(478);
      if (lookahead == 'V')
        ADVANCE(479);
      if (lookahead == 'X')
        ADVANCE(449);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'b')
        ADVANCE(451);
      if (lookahead == 'f')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(453);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(403);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      END_STATE();
    case 404:
      if (lookahead == '\n')
        ADVANCE(404);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == 'A')
        ADVANCE(405);
      if (lookahead == 'B')
        ADVANCE(408);
      if (lookahead == 'C')
        ADVANCE(412);
      if (lookahead == 'D')
        ADVANCE(416);
      if (lookahead == 'E')
        ADVANCE(426);
      if (lookahead == 'F')
        ADVANCE(437);
      if (lookahead == 'G')
        ADVANCE(440);
      if (lookahead == 'H')
        ADVANCE(441);
      if (lookahead == 'L')
        ADVANCE(442);
      if (lookahead == 'N')
        ADVANCE(443);
      if (lookahead == 'O')
        ADVANCE(444);
      if (lookahead == 'R')
        ADVANCE(445);
      if (lookahead == 'S')
        ADVANCE(446);
      if (lookahead == 'U')
        ADVANCE(447);
      if (lookahead == 'V')
        ADVANCE(448);
      if (lookahead == 'X')
        ADVANCE(449);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'b')
        ADVANCE(451);
      if (lookahead == 'f')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(453);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 405:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'K')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'E')
        ADVANCE(409);
      if (lookahead == 'S')
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'L')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'A')
        ADVANCE(413);
      if (lookahead == 'R')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 413:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'N')
        ADVANCE(414);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(417);
      if (lookahead == 'E')
        ADVANCE(422);
      if (lookahead == 'L')
        ADVANCE(424);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 417:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '1')
        ADVANCE(418);
      if (lookahead == '2')
        ADVANCE(419);
      if (lookahead == '3')
        ADVANCE(420);
      if (lookahead == '4')
        ADVANCE(421);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 422:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'L')
        ADVANCE(423);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 424:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'E')
        ADVANCE(425);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'M')
        ADVANCE(427);
      if (lookahead == 'N')
        ADVANCE(428);
      if (lookahead == 'O')
        ADVANCE(430);
      if (lookahead == 'S')
        ADVANCE(432);
      if (lookahead == 'T')
        ADVANCE(434);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'Q')
        ADVANCE(429);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 430:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(431);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 432:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(433);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 434:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'B')
        ADVANCE(435);
      if (lookahead == 'X')
        ADVANCE(436);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 437:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'F')
        ADVANCE(438);
      if (lookahead == 'S')
        ADVANCE(439);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 441:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 442:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'F')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 443:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'A')
        ADVANCE(34);
      if (lookahead == 'U')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 445:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'S')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(47);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
      if (lookahead == 'Y')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 447:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 448:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 455:
      if (lookahead == '\n')
        ADVANCE(404);
      if (lookahead == '\r')
        ADVANCE(455);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == 'A')
        ADVANCE(456);
      if (lookahead == 'B')
        ADVANCE(458);
      if (lookahead == 'C')
        ADVANCE(460);
      if (lookahead == 'D')
        ADVANCE(462);
      if (lookahead == 'E')
        ADVANCE(466);
      if (lookahead == 'F')
        ADVANCE(471);
      if (lookahead == 'G')
        ADVANCE(472);
      if (lookahead == 'H')
        ADVANCE(473);
      if (lookahead == 'L')
        ADVANCE(474);
      if (lookahead == 'N')
        ADVANCE(475);
      if (lookahead == 'O')
        ADVANCE(444);
      if (lookahead == 'R')
        ADVANCE(476);
      if (lookahead == 'S')
        ADVANCE(477);
      if (lookahead == 'U')
        ADVANCE(478);
      if (lookahead == 'V')
        ADVANCE(479);
      if (lookahead == 'X')
        ADVANCE(449);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'b')
        ADVANCE(451);
      if (lookahead == 'f')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(453);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(403);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      END_STATE();
    case 456:
      if (lookahead == 'C')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'K')
        ADVANCE(407);
      END_STATE();
    case 458:
      if (lookahead == 'E')
        ADVANCE(459);
      if (lookahead == 'S')
        ADVANCE(411);
      END_STATE();
    case 459:
      if (lookahead == 'L')
        ADVANCE(410);
      END_STATE();
    case 460:
      if (lookahead == 'A')
        ADVANCE(461);
      if (lookahead == 'R')
        ADVANCE(415);
      END_STATE();
    case 461:
      if (lookahead == 'N')
        ADVANCE(414);
      END_STATE();
    case 462:
      if (lookahead == 'C')
        ADVANCE(463);
      if (lookahead == 'E')
        ADVANCE(464);
      if (lookahead == 'L')
        ADVANCE(465);
      END_STATE();
    case 463:
      if (lookahead == '1')
        ADVANCE(418);
      if (lookahead == '2')
        ADVANCE(419);
      if (lookahead == '3')
        ADVANCE(420);
      if (lookahead == '4')
        ADVANCE(421);
      END_STATE();
    case 464:
      if (lookahead == 'L')
        ADVANCE(423);
      END_STATE();
    case 465:
      if (lookahead == 'E')
        ADVANCE(425);
      END_STATE();
    case 466:
      if (lookahead == 'M')
        ADVANCE(427);
      if (lookahead == 'N')
        ADVANCE(467);
      if (lookahead == 'O')
        ADVANCE(468);
      if (lookahead == 'S')
        ADVANCE(469);
      if (lookahead == 'T')
        ADVANCE(470);
      END_STATE();
    case 467:
      if (lookahead == 'Q')
        ADVANCE(429);
      END_STATE();
    case 468:
      if (lookahead == 'T')
        ADVANCE(431);
      END_STATE();
    case 469:
      if (lookahead == 'C')
        ADVANCE(433);
      END_STATE();
    case 470:
      if (lookahead == 'B')
        ADVANCE(435);
      if (lookahead == 'X')
        ADVANCE(436);
      END_STATE();
    case 471:
      if (lookahead == 'F')
        ADVANCE(438);
      if (lookahead == 'S')
        ADVANCE(439);
      END_STATE();
    case 472:
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 473:
      if (lookahead == 'T')
        ADVANCE(30);
      END_STATE();
    case 474:
      if (lookahead == 'F')
        ADVANCE(32);
      END_STATE();
    case 475:
      if (lookahead == 'A')
        ADVANCE(91);
      if (lookahead == 'U')
        ADVANCE(92);
      END_STATE();
    case 476:
      if (lookahead == 'S')
        ADVANCE(44);
      END_STATE();
    case 477:
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(95);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'Y')
        ADVANCE(98);
      END_STATE();
    case 478:
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 479:
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 480:
      if (lookahead == '\t')
        ADVANCE(379);
      if (lookahead == '\n')
        ADVANCE(380);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(481);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'A')
        ADVANCE(482);
      if (lookahead == 'B')
        ADVANCE(483);
      if (lookahead == 'C')
        ADVANCE(484);
      if (lookahead == 'D')
        ADVANCE(485);
      if (lookahead == 'E')
        ADVANCE(486);
      if (lookahead == 'F')
        ADVANCE(487);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(444);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == 'X')
        ADVANCE(449);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'b')
        ADVANCE(451);
      if (lookahead == 'f')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(453);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(454);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 481:
      if (lookahead == '\t')
        ADVANCE(379);
      if (lookahead == '\n')
        ADVANCE(380);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(481);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'A')
        ADVANCE(482);
      if (lookahead == 'B')
        ADVANCE(483);
      if (lookahead == 'C')
        ADVANCE(484);
      if (lookahead == 'D')
        ADVANCE(485);
      if (lookahead == 'E')
        ADVANCE(486);
      if (lookahead == 'F')
        ADVANCE(487);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(444);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == 'X')
        ADVANCE(449);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'b')
        ADVANCE(451);
      if (lookahead == 'f')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(453);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(454);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(376);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(457);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(459);
      if (lookahead == 'S')
        ADVANCE(411);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(461);
      if (lookahead == 'R')
        ADVANCE(415);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(463);
      if (lookahead == 'E')
        ADVANCE(464);
      if (lookahead == 'L')
        ADVANCE(465);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(427);
      if (lookahead == 'N')
        ADVANCE(467);
      if (lookahead == 'O')
        ADVANCE(468);
      if (lookahead == 'S')
        ADVANCE(469);
      if (lookahead == 'T')
        ADVANCE(470);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(438);
      if (lookahead == 'S')
        ADVANCE(439);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(488);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(494);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(491);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 490:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(491);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(488);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(494);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        SKIP(488);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(494);
      END_STATE();
    case 495:
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(495);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      END_STATE();
    case 496:
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\r')
        ADVANCE(496);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 497:
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(495);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      END_STATE();
    case 498:
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(503);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(501);
      END_STATE();
    case 499:
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(499);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 500:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 502:
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(503);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(501);
      END_STATE();
    case 503:
      if (lookahead == 'n')
        SKIP(498);
      END_STATE();
    case 504:
      if (lookahead == '\n')
        ADVANCE(505);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(504);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(507);
      END_STATE();
    case 505:
      if (lookahead == '\n')
        ADVANCE(505);
      if (lookahead == '\r')
        ADVANCE(505);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(507);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 506:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(505);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(504);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(507);
      END_STATE();
    case 509:
      if (lookahead == 'n')
        SKIP(504);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(515);
      if (lookahead == '\\')
        SKIP(516);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == ':')
        ADVANCE(512);
      if (lookahead == '\\')
        ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 512:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 513:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(515);
      if (lookahead == '\\')
        SKIP(516);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      END_STATE();
    case 515:
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 516:
      if (lookahead == 'n')
        SKIP(510);
      END_STATE();
    case 517:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(518);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(521);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(397);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(517);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 518:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(518);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(519);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'h')
        ADVANCE(387);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(518);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 519:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(518);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 520:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(518);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(521);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(397);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(517);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 521:
      if (lookahead == 'n')
        SKIP(517);
      END_STATE();
    case 522:
      if (lookahead == '\t')
        ADVANCE(379);
      if (lookahead == '\n')
        ADVANCE(380);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(523);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 523:
      if (lookahead == '\t')
        ADVANCE(379);
      if (lookahead == '\n')
        ADVANCE(380);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(523);
      if (lookahead == ' ')
        ADVANCE(372);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(373);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 524:
      if (lookahead == '\n')
        ADVANCE(525);
      if (lookahead == '\r')
        ADVANCE(527);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(528);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(524);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 525:
      if (lookahead == '\n')
        ADVANCE(525);
      if (lookahead == '\r')
        ADVANCE(525);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(526);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(525);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 526:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(525);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 527:
      if (lookahead == '\n')
        ADVANCE(525);
      if (lookahead == '\r')
        ADVANCE(527);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(528);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(524);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 528:
      if (lookahead == 'n')
        SKIP(524);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 315},
  [3] = {.lex_state = 329},
  [4] = {.lex_state = 334},
  [5] = {.lex_state = 363},
  [6] = {.lex_state = 363},
  [7] = {.lex_state = 363},
  [8] = {.lex_state = 329},
  [9] = {.lex_state = 108},
  [10] = {.lex_state = 370},
  [11] = {.lex_state = 378},
  [12] = {.lex_state = 108},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 108},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 108},
  [18] = {.lex_state = 315},
  [19] = {.lex_state = 382},
  [20] = {.lex_state = 363},
  [21] = {.lex_state = 382},
  [22] = {.lex_state = 382},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 363},
  [27] = {.lex_state = 363},
  [28] = {.lex_state = 363},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 363},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 403},
  [39] = {.lex_state = 378},
  [40] = {.lex_state = 378},
  [41] = {.lex_state = 378},
  [42] = {.lex_state = 378},
  [43] = {.lex_state = 108},
  [44] = {.lex_state = 378},
  [45] = {.lex_state = 378},
  [46] = {.lex_state = 480},
  [47] = {.lex_state = 378},
  [48] = {.lex_state = 378},
  [49] = {.lex_state = 108},
  [50] = {.lex_state = 108},
  [51] = {.lex_state = 363},
  [52] = {.lex_state = 315},
  [53] = {.lex_state = 382},
  [54] = {.lex_state = 363},
  [55] = {.lex_state = 363},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 108},
  [59] = {.lex_state = 108},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 108},
  [62] = {.lex_state = 488},
  [63] = {.lex_state = 363},
  [64] = {.lex_state = 363},
  [65] = {.lex_state = 108},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 495},
  [69] = {.lex_state = 498},
  [70] = {.lex_state = 504},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 378},
  [73] = {.lex_state = 378},
  [74] = {.lex_state = 495},
  [75] = {.lex_state = 498},
  [76] = {.lex_state = 504},
  [77] = {.lex_state = 378},
  [78] = {.lex_state = 378},
  [79] = {.lex_state = 108},
  [80] = {.lex_state = 108},
  [81] = {.lex_state = 315},
  [82] = {.lex_state = 510},
  [83] = {.lex_state = 510},
  [84] = {.lex_state = 108},
  [85] = {.lex_state = 363},
  [86] = {.lex_state = 108},
  [87] = {.lex_state = 108},
  [88] = {.lex_state = 510},
  [89] = {.lex_state = 517},
  [90] = {.lex_state = 517},
  [91] = {.lex_state = 517},
  [92] = {.lex_state = 363},
  [93] = {.lex_state = 108},
  [94] = {.lex_state = 363},
  [95] = {.lex_state = 108},
  [96] = {.lex_state = 108},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 498},
  [100] = {.lex_state = 498},
  [101] = {.lex_state = 504},
  [102] = {.lex_state = 504},
  [103] = {.lex_state = 378},
  [104] = {.lex_state = 378},
  [105] = {.lex_state = 378},
  [106] = {.lex_state = 378},
  [107] = {.lex_state = 522},
  [108] = {.lex_state = 522},
  [109] = {.lex_state = 363},
  [110] = {.lex_state = 315},
  [111] = {.lex_state = 510},
  [112] = {.lex_state = 363},
  [113] = {.lex_state = 108},
  [114] = {.lex_state = 517},
  [115] = {.lex_state = 363},
  [116] = {.lex_state = 363},
  [117] = {.lex_state = 108},
  [118] = {.lex_state = 510},
  [119] = {.lex_state = 108},
  [120] = {.lex_state = 510},
  [121] = {.lex_state = 524},
  [122] = {.lex_state = 108},
  [123] = {.lex_state = 498},
  [124] = {.lex_state = 504},
  [125] = {.lex_state = 378},
  [126] = {.lex_state = 522},
  [127] = {.lex_state = 510},
  [128] = {.lex_state = 363},
  [129] = {.lex_state = 315},
  [130] = {.lex_state = 315},
  [131] = {.lex_state = 510},
  [132] = {.lex_state = 108},
  [133] = {.lex_state = 315},
  [134] = {.lex_state = 510},
  [135] = {.lex_state = 510},
  [136] = {.lex_state = 363},
  [137] = {.lex_state = 108},
  [138] = {.lex_state = 363},
  [139] = {.lex_state = 510},
  [140] = {.lex_state = 108},
  [141] = {.lex_state = 510},
  [142] = {.lex_state = 524},
  [143] = {.lex_state = 510},
  [144] = {.lex_state = 510},
  [145] = {.lex_state = 363},
  [146] = {.lex_state = 510},
  [147] = {.lex_state = 510},
  [148] = {.lex_state = 510},
  [149] = {.lex_state = 363},
  [150] = {.lex_state = 510},
  [151] = {.lex_state = 315},
  [152] = {.lex_state = 510},
  [153] = {.lex_state = 108},
  [154] = {.lex_state = 488},
  [155] = {.lex_state = 363},
  [156] = {.lex_state = 510},
  [157] = {.lex_state = 108},
  [158] = {.lex_state = 510},
  [159] = {.lex_state = 510},
  [160] = {.lex_state = 363},
  [161] = {.lex_state = 510},
  [162] = {.lex_state = 108},
  [163] = {.lex_state = 510},
  [164] = {.lex_state = 510},
  [165] = {.lex_state = 315},
  [166] = {.lex_state = 510},
  [167] = {.lex_state = 363},
  [168] = {.lex_state = 510},
  [169] = {.lex_state = 510},
  [170] = {.lex_state = 524},
  [171] = {.lex_state = 524},
  [172] = {.lex_state = 524},
  [173] = {.lex_state = 488},
  [174] = {.lex_state = 363},
  [175] = {.lex_state = 510},
  [176] = {.lex_state = 510},
  [177] = {.lex_state = 108},
  [178] = {.lex_state = 510},
  [179] = {.lex_state = 510},
  [180] = {.lex_state = 510},
  [181] = {.lex_state = 315},
  [182] = {.lex_state = 510},
  [183] = {.lex_state = 510},
  [184] = {.lex_state = 510},
  [185] = {.lex_state = 524},
  [186] = {.lex_state = 363},
  [187] = {.lex_state = 108},
  [188] = {.lex_state = 510},
  [189] = {.lex_state = 510},
  [190] = {.lex_state = 510},
  [191] = {.lex_state = 524},
  [192] = {.lex_state = 510},
  [193] = {.lex_state = 108},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
    [sym__ascii_large] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__vertical_tab] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(8),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_NUL] = ACTIONS(1),
    [anon_sym_SOH] = ACTIONS(1),
    [anon_sym_STX] = ACTIONS(1),
    [anon_sym_HT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_VT] = ACTIONS(1),
    [anon_sym_SO] = ACTIONS(3),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(8),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [4] = {
    [sym__identifier] = STATE(22),
    [sym_reserved_identifier] = STATE(21),
    [anon_sym_where] = ACTIONS(44),
    [anon_sym_qualified] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_deriving] = ACTIONS(44),
    [anon_sym_do] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
    [anon_sym_foreign] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(44),
    [anon_sym_in] = ACTIONS(44),
    [anon_sym_infix] = ACTIONS(44),
    [anon_sym_infixl] = ACTIONS(44),
    [anon_sym_infixr] = ACTIONS(44),
    [anon_sym_instance] = ACTIONS(44),
    [anon_sym_let] = ACTIONS(44),
    [anon_sym_of] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [sym_comment] = ACTIONS(26),
  },
  [5] = {
    [sym__identifier] = STATE(23),
    [sym_simple_type] = STATE(24),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(25),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym__identifier] = STATE(28),
    [sym_simple_type] = STATE(29),
    [sym_reserved_identifier] = STATE(27),
    [aux_sym_constructors_repeat1] = STATE(30),
    [anon_sym_where] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(28),
    [sym_simple_type] = STATE(31),
    [sym_reserved_identifier] = STATE(27),
    [aux_sym_constructors_repeat1] = STATE(30),
    [anon_sym_where] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_module] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_import] = ACTIONS(62),
    [anon_sym_data] = ACTIONS(62),
    [anon_sym_newtype] = ACTIONS(62),
    [anon_sym_type] = ACTIONS(62),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(64),
    [sym_module_identifier] = ACTIONS(64),
    [anon_sym_case] = ACTIONS(62),
    [anon_sym_class] = ACTIONS(62),
    [anon_sym_default] = ACTIONS(62),
    [anon_sym_deriving] = ACTIONS(62),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_foreign] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [anon_sym_in] = ACTIONS(62),
    [anon_sym_infix] = ACTIONS(62),
    [anon_sym_infixl] = ACTIONS(62),
    [anon_sym_infixr] = ACTIONS(62),
    [anon_sym_instance] = ACTIONS(62),
    [anon_sym_let] = ACTIONS(62),
    [anon_sym_of] = ACTIONS(62),
    [anon_sym_then] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(62),
    [sym__octal_literal] = ACTIONS(62),
    [sym__hexidecimal_literal] = ACTIONS(62),
  },
  [10] = {
    [sym__graphic] = STATE(35),
    [sym__small] = STATE(36),
    [sym__large] = STATE(36),
    [sym__symbol] = STATE(36),
    [sym__special] = STATE(36),
    [sym__escape] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym__] = ACTIONS(70),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(70),
    [sym__ascii_large] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_1] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [sym__space] = ACTIONS(72),
  },
  [11] = {
    [sym__gap] = STATE(42),
    [sym__graphic] = STATE(42),
    [sym__small] = STATE(44),
    [sym__large] = STATE(44),
    [sym__symbol] = STATE(44),
    [sym__special] = STATE(44),
    [sym__escape] = STATE(42),
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym__] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(84),
    [sym__ascii_large] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_1] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [sym__space] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
    [sym__tab] = ACTIONS(96),
    [sym__vertical_tab] = ACTIONS(96),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(100),
    [anon_sym_where] = ACTIONS(100),
    [anon_sym_import] = ACTIONS(100),
    [anon_sym_data] = ACTIONS(100),
    [anon_sym_newtype] = ACTIONS(100),
    [anon_sym_type] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(102),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [anon_sym_case] = ACTIONS(100),
    [anon_sym_class] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_do] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [anon_sym_foreign] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_in] = ACTIONS(100),
    [anon_sym_infix] = ACTIONS(100),
    [anon_sym_infixl] = ACTIONS(100),
    [anon_sym_infixr] = ACTIONS(100),
    [anon_sym_instance] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(100),
    [anon_sym_of] = ACTIONS(100),
    [anon_sym_then] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym__integer_literal] = ACTIONS(100),
    [sym__octal_literal] = ACTIONS(100),
    [sym__hexidecimal_literal] = ACTIONS(100),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(106),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_newtype] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(112),
    [sym_constructor_identifier] = ACTIONS(112),
    [sym_module_identifier] = ACTIONS(112),
    [anon_sym_case] = ACTIONS(110),
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_deriving] = ACTIONS(110),
    [anon_sym_do] = ACTIONS(110),
    [anon_sym_else] = ACTIONS(110),
    [anon_sym_foreign] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_infix] = ACTIONS(110),
    [anon_sym_infixl] = ACTIONS(110),
    [anon_sym_infixr] = ACTIONS(110),
    [anon_sym_instance] = ACTIONS(110),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_of] = ACTIONS(110),
    [anon_sym_then] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym__integer_literal] = ACTIONS(110),
    [sym__octal_literal] = ACTIONS(110),
    [sym__hexidecimal_literal] = ACTIONS(110),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
    [anon_sym_import] = ACTIONS(116),
    [anon_sym_data] = ACTIONS(116),
    [anon_sym_newtype] = ACTIONS(116),
    [anon_sym_type] = ACTIONS(116),
    [sym_variable_identifier] = ACTIONS(118),
    [sym_constructor_identifier] = ACTIONS(118),
    [sym_module_identifier] = ACTIONS(118),
    [anon_sym_case] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_deriving] = ACTIONS(116),
    [anon_sym_do] = ACTIONS(116),
    [anon_sym_else] = ACTIONS(116),
    [anon_sym_foreign] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(116),
    [anon_sym_in] = ACTIONS(116),
    [anon_sym_infix] = ACTIONS(116),
    [anon_sym_infixl] = ACTIONS(116),
    [anon_sym_infixr] = ACTIONS(116),
    [anon_sym_instance] = ACTIONS(116),
    [anon_sym_let] = ACTIONS(116),
    [anon_sym_of] = ACTIONS(116),
    [anon_sym_then] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym__integer_literal] = ACTIONS(116),
    [sym__octal_literal] = ACTIONS(116),
    [sym__hexidecimal_literal] = ACTIONS(116),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_where] = ACTIONS(122),
    [anon_sym_import] = ACTIONS(122),
    [anon_sym_data] = ACTIONS(122),
    [anon_sym_newtype] = ACTIONS(122),
    [anon_sym_type] = ACTIONS(122),
    [sym_variable_identifier] = ACTIONS(124),
    [sym_constructor_identifier] = ACTIONS(124),
    [sym_module_identifier] = ACTIONS(124),
    [anon_sym_case] = ACTIONS(122),
    [anon_sym_class] = ACTIONS(122),
    [anon_sym_default] = ACTIONS(122),
    [anon_sym_deriving] = ACTIONS(122),
    [anon_sym_do] = ACTIONS(122),
    [anon_sym_else] = ACTIONS(122),
    [anon_sym_foreign] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_infix] = ACTIONS(122),
    [anon_sym_infixl] = ACTIONS(122),
    [anon_sym_infixr] = ACTIONS(122),
    [anon_sym_instance] = ACTIONS(122),
    [anon_sym_let] = ACTIONS(122),
    [anon_sym_of] = ACTIONS(122),
    [anon_sym_then] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym__integer_literal] = ACTIONS(122),
    [sym__octal_literal] = ACTIONS(122),
    [sym__hexidecimal_literal] = ACTIONS(122),
  },
  [17] = {
    [sym__statement] = STATE(49),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [18] = {
    [sym_module_export_declarations] = STATE(52),
    [anon_sym_where] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_as] = ACTIONS(40),
    [anon_sym_hiding] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [20] = {
    [sym__identifier] = STATE(53),
    [sym_reserved_identifier] = STATE(21),
    [anon_sym_where] = ACTIONS(44),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_deriving] = ACTIONS(44),
    [anon_sym_do] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
    [anon_sym_foreign] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(44),
    [anon_sym_in] = ACTIONS(44),
    [anon_sym_infix] = ACTIONS(44),
    [anon_sym_infixl] = ACTIONS(44),
    [anon_sym_infixr] = ACTIONS(44),
    [anon_sym_instance] = ACTIONS(44),
    [anon_sym_let] = ACTIONS(44),
    [anon_sym_of] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_as] = ACTIONS(56),
    [anon_sym_hiding] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [22] = {
    [sym_import_specification] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(134),
    [anon_sym_as] = ACTIONS(138),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(134),
    [anon_sym_newtype] = ACTIONS(134),
    [anon_sym_type] = ACTIONS(134),
    [sym_variable_identifier] = ACTIONS(142),
    [sym_constructor_identifier] = ACTIONS(142),
    [sym_module_identifier] = ACTIONS(142),
    [anon_sym_case] = ACTIONS(134),
    [anon_sym_class] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_deriving] = ACTIONS(134),
    [anon_sym_do] = ACTIONS(134),
    [anon_sym_else] = ACTIONS(134),
    [anon_sym_foreign] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_infix] = ACTIONS(134),
    [anon_sym_infixl] = ACTIONS(134),
    [anon_sym_infixr] = ACTIONS(134),
    [anon_sym_instance] = ACTIONS(134),
    [anon_sym_let] = ACTIONS(134),
    [anon_sym_of] = ACTIONS(134),
    [anon_sym_then] = ACTIONS(134),
    [anon_sym__] = ACTIONS(134),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym__integer_literal] = ACTIONS(134),
    [sym__octal_literal] = ACTIONS(134),
    [sym__hexidecimal_literal] = ACTIONS(134),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_module] = ACTIONS(146),
    [anon_sym_where] = ACTIONS(146),
    [anon_sym_import] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_newtype] = ACTIONS(146),
    [anon_sym_type] = ACTIONS(146),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(148),
    [sym_module_identifier] = ACTIONS(148),
    [anon_sym_case] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(146),
    [anon_sym_default] = ACTIONS(146),
    [anon_sym_deriving] = ACTIONS(146),
    [anon_sym_do] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [anon_sym_foreign] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(146),
    [anon_sym_infix] = ACTIONS(146),
    [anon_sym_infixl] = ACTIONS(146),
    [anon_sym_infixr] = ACTIONS(146),
    [anon_sym_instance] = ACTIONS(146),
    [anon_sym_let] = ACTIONS(146),
    [anon_sym_of] = ACTIONS(146),
    [anon_sym_then] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(146),
    [sym__octal_literal] = ACTIONS(146),
    [sym__hexidecimal_literal] = ACTIONS(146),
  },
  [24] = {
    [sym_constructors] = STATE(59),
    [sym__identifier] = STATE(23),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_newtype] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym__integer_literal] = ACTIONS(152),
    [sym__octal_literal] = ACTIONS(152),
    [sym__hexidecimal_literal] = ACTIONS(152),
  },
  [25] = {
    [sym__identifier] = STATE(61),
    [sym_reserved_identifier] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_module] = ACTIONS(160),
    [anon_sym_where] = ACTIONS(160),
    [anon_sym_import] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_newtype] = ACTIONS(160),
    [anon_sym_type] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [anon_sym_case] = ACTIONS(160),
    [anon_sym_class] = ACTIONS(160),
    [anon_sym_default] = ACTIONS(160),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(160),
    [anon_sym_else] = ACTIONS(160),
    [anon_sym_foreign] = ACTIONS(160),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_in] = ACTIONS(160),
    [anon_sym_infix] = ACTIONS(160),
    [anon_sym_infixl] = ACTIONS(160),
    [anon_sym_infixr] = ACTIONS(160),
    [anon_sym_instance] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_of] = ACTIONS(160),
    [anon_sym_then] = ACTIONS(160),
    [anon_sym__] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [sym__integer_literal] = ACTIONS(160),
    [sym__octal_literal] = ACTIONS(160),
    [sym__hexidecimal_literal] = ACTIONS(160),
  },
  [26] = {
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [anon_sym_where] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(148),
    [sym_module_identifier] = ACTIONS(148),
    [anon_sym_case] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(146),
    [anon_sym_default] = ACTIONS(146),
    [anon_sym_deriving] = ACTIONS(146),
    [anon_sym_do] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [anon_sym_foreign] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(146),
    [anon_sym_infix] = ACTIONS(146),
    [anon_sym_infixl] = ACTIONS(146),
    [anon_sym_infixr] = ACTIONS(146),
    [anon_sym_instance] = ACTIONS(146),
    [anon_sym_let] = ACTIONS(146),
    [anon_sym_of] = ACTIONS(146),
    [anon_sym_then] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [sym__identifier] = STATE(63),
    [sym_reserved_identifier] = STATE(27),
    [anon_sym_where] = ACTIONS(50),
    [anon_sym_EQ] = ACTIONS(158),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(168),
  },
  [33] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(170),
  },
  [34] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(172),
  },
  [35] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(174),
  },
  [36] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(176),
  },
  [37] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(178),
  },
  [38] = {
    [sym__char_escape] = STATE(67),
    [sym__ascii] = STATE(67),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_x] = ACTIONS(186),
    [anon_sym_X] = ACTIONS(186),
    [anon_sym_o] = ACTIONS(188),
    [anon_sym_O] = ACTIONS(188),
    [anon_sym_a] = ACTIONS(180),
    [anon_sym_b] = ACTIONS(180),
    [anon_sym_f] = ACTIONS(180),
    [anon_sym_n] = ACTIONS(180),
    [anon_sym_r] = ACTIONS(180),
    [anon_sym_t] = ACTIONS(180),
    [anon_sym_v] = ACTIONS(180),
    [anon_sym_NUL] = ACTIONS(190),
    [anon_sym_SOH] = ACTIONS(190),
    [anon_sym_STX] = ACTIONS(190),
    [anon_sym_ETX] = ACTIONS(190),
    [anon_sym_EOT] = ACTIONS(190),
    [anon_sym_ENQ] = ACTIONS(190),
    [anon_sym_ACK] = ACTIONS(190),
    [anon_sym_BEL] = ACTIONS(190),
    [anon_sym_BS] = ACTIONS(190),
    [anon_sym_HT] = ACTIONS(190),
    [anon_sym_LF] = ACTIONS(190),
    [anon_sym_VT] = ACTIONS(190),
    [anon_sym_FF] = ACTIONS(190),
    [anon_sym_CR] = ACTIONS(190),
    [anon_sym_SO] = ACTIONS(190),
    [anon_sym_SI] = ACTIONS(190),
    [anon_sym_DLE] = ACTIONS(190),
    [anon_sym_DC1] = ACTIONS(190),
    [anon_sym_DC2] = ACTIONS(190),
    [anon_sym_DC3] = ACTIONS(190),
    [anon_sym_DC4] = ACTIONS(190),
    [anon_sym_NAK] = ACTIONS(190),
    [anon_sym_SYN] = ACTIONS(190),
    [anon_sym_ETB] = ACTIONS(190),
    [anon_sym_CAN] = ACTIONS(190),
    [anon_sym_EM] = ACTIONS(190),
    [anon_sym_SUB] = ACTIONS(190),
    [anon_sym_ESC] = ACTIONS(190),
    [anon_sym_FS] = ACTIONS(190),
    [anon_sym_GS] = ACTIONS(190),
    [anon_sym_RS] = ACTIONS(190),
    [anon_sym_US] = ACTIONS(190),
    [anon_sym_SP] = ACTIONS(190),
    [anon_sym_DEL] = ACTIONS(190),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym__] = ACTIONS(192),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(192),
    [sym__ascii_large] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym_POUND] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(192),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_1] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_QMARK] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [anon_sym_BSLASH] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_RBRACK] = ACTIONS(192),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [sym__space] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
    [sym__tab] = ACTIONS(192),
    [sym__vertical_tab] = ACTIONS(192),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_1] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__space] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
    [sym__tab] = ACTIONS(194),
    [sym__vertical_tab] = ACTIONS(194),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(196),
    [sym__ascii_large] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_1] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [sym__space] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
    [sym__tab] = ACTIONS(196),
    [sym__vertical_tab] = ACTIONS(196),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym__] = ACTIONS(198),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(198),
    [sym__ascii_large] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_1] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_QMARK] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [sym__space] = ACTIONS(198),
    [sym__newline] = ACTIONS(198),
    [sym__tab] = ACTIONS(198),
    [sym__vertical_tab] = ACTIONS(198),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_module] = ACTIONS(202),
    [anon_sym_where] = ACTIONS(202),
    [anon_sym_import] = ACTIONS(202),
    [anon_sym_data] = ACTIONS(202),
    [anon_sym_newtype] = ACTIONS(202),
    [anon_sym_type] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_constructor_identifier] = ACTIONS(204),
    [sym_module_identifier] = ACTIONS(204),
    [anon_sym_case] = ACTIONS(202),
    [anon_sym_class] = ACTIONS(202),
    [anon_sym_default] = ACTIONS(202),
    [anon_sym_deriving] = ACTIONS(202),
    [anon_sym_do] = ACTIONS(202),
    [anon_sym_else] = ACTIONS(202),
    [anon_sym_foreign] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(202),
    [anon_sym_in] = ACTIONS(202),
    [anon_sym_infix] = ACTIONS(202),
    [anon_sym_infixl] = ACTIONS(202),
    [anon_sym_infixr] = ACTIONS(202),
    [anon_sym_instance] = ACTIONS(202),
    [anon_sym_let] = ACTIONS(202),
    [anon_sym_of] = ACTIONS(202),
    [anon_sym_then] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [sym__integer_literal] = ACTIONS(202),
    [sym__octal_literal] = ACTIONS(202),
    [sym__hexidecimal_literal] = ACTIONS(202),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
    [sym__ascii_large] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_1] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [sym__space] = ACTIONS(206),
    [sym__newline] = ACTIONS(206),
    [sym__tab] = ACTIONS(206),
    [sym__vertical_tab] = ACTIONS(206),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
    [sym__ascii_large] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(208),
    [anon_sym_1] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [sym__space] = ACTIONS(208),
    [sym__newline] = ACTIONS(208),
    [sym__tab] = ACTIONS(208),
    [sym__vertical_tab] = ACTIONS(208),
  },
  [46] = {
    [sym__char_escape] = STATE(73),
    [sym__ascii] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_1] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__space] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
    [sym__tab] = ACTIONS(194),
    [sym__vertical_tab] = ACTIONS(194),
    [anon_sym_x] = ACTIONS(216),
    [anon_sym_X] = ACTIONS(216),
    [anon_sym_o] = ACTIONS(218),
    [anon_sym_O] = ACTIONS(218),
    [anon_sym_a] = ACTIONS(210),
    [anon_sym_b] = ACTIONS(210),
    [anon_sym_f] = ACTIONS(210),
    [anon_sym_n] = ACTIONS(210),
    [anon_sym_r] = ACTIONS(210),
    [anon_sym_t] = ACTIONS(210),
    [anon_sym_v] = ACTIONS(210),
    [anon_sym_NUL] = ACTIONS(220),
    [anon_sym_SOH] = ACTIONS(220),
    [anon_sym_STX] = ACTIONS(220),
    [anon_sym_ETX] = ACTIONS(220),
    [anon_sym_EOT] = ACTIONS(220),
    [anon_sym_ENQ] = ACTIONS(220),
    [anon_sym_ACK] = ACTIONS(220),
    [anon_sym_BEL] = ACTIONS(220),
    [anon_sym_BS] = ACTIONS(220),
    [anon_sym_HT] = ACTIONS(220),
    [anon_sym_LF] = ACTIONS(220),
    [anon_sym_VT] = ACTIONS(220),
    [anon_sym_FF] = ACTIONS(220),
    [anon_sym_CR] = ACTIONS(220),
    [anon_sym_SO] = ACTIONS(220),
    [anon_sym_SI] = ACTIONS(220),
    [anon_sym_DLE] = ACTIONS(220),
    [anon_sym_DC1] = ACTIONS(220),
    [anon_sym_DC2] = ACTIONS(220),
    [anon_sym_DC3] = ACTIONS(220),
    [anon_sym_DC4] = ACTIONS(220),
    [anon_sym_NAK] = ACTIONS(220),
    [anon_sym_SYN] = ACTIONS(220),
    [anon_sym_ETB] = ACTIONS(220),
    [anon_sym_CAN] = ACTIONS(220),
    [anon_sym_EM] = ACTIONS(220),
    [anon_sym_SUB] = ACTIONS(220),
    [anon_sym_ESC] = ACTIONS(220),
    [anon_sym_FS] = ACTIONS(220),
    [anon_sym_GS] = ACTIONS(220),
    [anon_sym_RS] = ACTIONS(220),
    [anon_sym_US] = ACTIONS(220),
    [anon_sym_SP] = ACTIONS(220),
    [anon_sym_DEL] = ACTIONS(220),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [sym__ascii_large] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [sym__space] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym__tab] = ACTIONS(222),
    [sym__vertical_tab] = ACTIONS(222),
  },
  [48] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(44),
    [sym__large] = STATE(44),
    [sym__symbol] = STATE(44),
    [sym__special] = STATE(44),
    [sym__escape] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym__] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(84),
    [sym__ascii_large] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_1] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [sym__space] = ACTIONS(96),
    [sym__newline] = ACTIONS(96),
    [sym__tab] = ACTIONS(96),
    [sym__vertical_tab] = ACTIONS(96),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_module] = ACTIONS(230),
    [anon_sym_where] = ACTIONS(230),
    [anon_sym_import] = ACTIONS(230),
    [anon_sym_data] = ACTIONS(230),
    [anon_sym_newtype] = ACTIONS(230),
    [anon_sym_type] = ACTIONS(230),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_constructor_identifier] = ACTIONS(232),
    [sym_module_identifier] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_class] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_deriving] = ACTIONS(230),
    [anon_sym_do] = ACTIONS(230),
    [anon_sym_else] = ACTIONS(230),
    [anon_sym_foreign] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_in] = ACTIONS(230),
    [anon_sym_infix] = ACTIONS(230),
    [anon_sym_infixl] = ACTIONS(230),
    [anon_sym_infixr] = ACTIONS(230),
    [anon_sym_instance] = ACTIONS(230),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_of] = ACTIONS(230),
    [anon_sym_then] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [sym__integer_literal] = ACTIONS(230),
    [sym__octal_literal] = ACTIONS(230),
    [sym__hexidecimal_literal] = ACTIONS(230),
  },
  [50] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [51] = {
    [sym_export_declaration] = STATE(82),
    [sym__identifier] = STATE(83),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(236),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [anon_sym_where] = ACTIONS(238),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [sym_import_specification] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_module] = ACTIONS(242),
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(242),
    [anon_sym_as] = ACTIONS(244),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(242),
    [anon_sym_newtype] = ACTIONS(242),
    [anon_sym_type] = ACTIONS(242),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(246),
    [sym_module_identifier] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_class] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(242),
    [anon_sym_deriving] = ACTIONS(242),
    [anon_sym_do] = ACTIONS(242),
    [anon_sym_else] = ACTIONS(242),
    [anon_sym_foreign] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [anon_sym_in] = ACTIONS(242),
    [anon_sym_infix] = ACTIONS(242),
    [anon_sym_infixl] = ACTIONS(242),
    [anon_sym_infixr] = ACTIONS(242),
    [anon_sym_instance] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_of] = ACTIONS(242),
    [anon_sym_then] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [sym__integer_literal] = ACTIONS(242),
    [sym__octal_literal] = ACTIONS(242),
    [sym__hexidecimal_literal] = ACTIONS(242),
  },
  [54] = {
    [sym__identifier] = STATE(88),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(248),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [sym__identifier] = STATE(91),
    [sym_reserved_identifier] = STATE(90),
    [anon_sym_where] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_module_identifier] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(250),
    [anon_sym_do] = ACTIONS(250),
    [anon_sym_else] = ACTIONS(250),
    [anon_sym_foreign] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_in] = ACTIONS(250),
    [anon_sym_infix] = ACTIONS(250),
    [anon_sym_infixl] = ACTIONS(250),
    [anon_sym_infixr] = ACTIONS(250),
    [anon_sym_instance] = ACTIONS(250),
    [anon_sym_let] = ACTIONS(250),
    [anon_sym_of] = ACTIONS(250),
    [anon_sym_then] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_module] = ACTIONS(242),
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_import] = ACTIONS(242),
    [anon_sym_data] = ACTIONS(242),
    [anon_sym_newtype] = ACTIONS(242),
    [anon_sym_type] = ACTIONS(242),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(246),
    [sym_module_identifier] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_class] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(242),
    [anon_sym_deriving] = ACTIONS(242),
    [anon_sym_do] = ACTIONS(242),
    [anon_sym_else] = ACTIONS(242),
    [anon_sym_foreign] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [anon_sym_in] = ACTIONS(242),
    [anon_sym_infix] = ACTIONS(242),
    [anon_sym_infixl] = ACTIONS(242),
    [anon_sym_infixr] = ACTIONS(242),
    [anon_sym_instance] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_of] = ACTIONS(242),
    [anon_sym_then] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [sym__integer_literal] = ACTIONS(242),
    [sym__octal_literal] = ACTIONS(242),
    [sym__hexidecimal_literal] = ACTIONS(242),
  },
  [58] = {
    [sym_constructors] = STATE(93),
    [sym__identifier] = STATE(23),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_module] = ACTIONS(258),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(258),
    [anon_sym_data] = ACTIONS(258),
    [anon_sym_newtype] = ACTIONS(258),
    [anon_sym_type] = ACTIONS(258),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [sym__integer_literal] = ACTIONS(258),
    [sym__octal_literal] = ACTIONS(258),
    [sym__hexidecimal_literal] = ACTIONS(258),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_module] = ACTIONS(258),
    [anon_sym_where] = ACTIONS(258),
    [anon_sym_import] = ACTIONS(258),
    [anon_sym_data] = ACTIONS(258),
    [anon_sym_newtype] = ACTIONS(258),
    [anon_sym_type] = ACTIONS(258),
    [sym_variable_identifier] = ACTIONS(260),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_module_identifier] = ACTIONS(260),
    [anon_sym_case] = ACTIONS(258),
    [anon_sym_class] = ACTIONS(258),
    [anon_sym_default] = ACTIONS(258),
    [anon_sym_deriving] = ACTIONS(258),
    [anon_sym_do] = ACTIONS(258),
    [anon_sym_else] = ACTIONS(258),
    [anon_sym_foreign] = ACTIONS(258),
    [anon_sym_if] = ACTIONS(258),
    [anon_sym_in] = ACTIONS(258),
    [anon_sym_infix] = ACTIONS(258),
    [anon_sym_infixl] = ACTIONS(258),
    [anon_sym_infixr] = ACTIONS(258),
    [anon_sym_instance] = ACTIONS(258),
    [anon_sym_let] = ACTIONS(258),
    [anon_sym_of] = ACTIONS(258),
    [anon_sym_then] = ACTIONS(258),
    [anon_sym__] = ACTIONS(258),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [sym__integer_literal] = ACTIONS(258),
    [sym__octal_literal] = ACTIONS(258),
    [sym__hexidecimal_literal] = ACTIONS(258),
  },
  [60] = {
    [sym__identifier] = STATE(61),
    [sym_reserved_identifier] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_module] = ACTIONS(264),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(264),
    [anon_sym_data] = ACTIONS(264),
    [anon_sym_newtype] = ACTIONS(264),
    [anon_sym_type] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [sym__integer_literal] = ACTIONS(264),
    [sym__octal_literal] = ACTIONS(264),
    [sym__hexidecimal_literal] = ACTIONS(264),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_module] = ACTIONS(270),
    [anon_sym_where] = ACTIONS(270),
    [anon_sym_import] = ACTIONS(270),
    [anon_sym_data] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_newtype] = ACTIONS(270),
    [anon_sym_type] = ACTIONS(270),
    [sym_variable_identifier] = ACTIONS(272),
    [sym_constructor_identifier] = ACTIONS(272),
    [sym_module_identifier] = ACTIONS(272),
    [anon_sym_case] = ACTIONS(270),
    [anon_sym_class] = ACTIONS(270),
    [anon_sym_default] = ACTIONS(270),
    [anon_sym_deriving] = ACTIONS(270),
    [anon_sym_do] = ACTIONS(270),
    [anon_sym_else] = ACTIONS(270),
    [anon_sym_foreign] = ACTIONS(270),
    [anon_sym_if] = ACTIONS(270),
    [anon_sym_in] = ACTIONS(270),
    [anon_sym_infix] = ACTIONS(270),
    [anon_sym_infixl] = ACTIONS(270),
    [anon_sym_infixr] = ACTIONS(270),
    [anon_sym_instance] = ACTIONS(270),
    [anon_sym_let] = ACTIONS(270),
    [anon_sym_of] = ACTIONS(270),
    [anon_sym_then] = ACTIONS(270),
    [anon_sym__] = ACTIONS(270),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [sym__integer_literal] = ACTIONS(270),
    [sym__octal_literal] = ACTIONS(270),
    [sym__hexidecimal_literal] = ACTIONS(270),
  },
  [62] = {
    [sym_new_constructor] = STATE(95),
    [sym_constructor_identifier] = ACTIONS(274),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [anon_sym_where] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(272),
    [sym_constructor_identifier] = ACTIONS(272),
    [sym_module_identifier] = ACTIONS(272),
    [anon_sym_case] = ACTIONS(270),
    [anon_sym_class] = ACTIONS(270),
    [anon_sym_default] = ACTIONS(270),
    [anon_sym_deriving] = ACTIONS(270),
    [anon_sym_do] = ACTIONS(270),
    [anon_sym_else] = ACTIONS(270),
    [anon_sym_foreign] = ACTIONS(270),
    [anon_sym_if] = ACTIONS(270),
    [anon_sym_in] = ACTIONS(270),
    [anon_sym_infix] = ACTIONS(270),
    [anon_sym_infixl] = ACTIONS(270),
    [anon_sym_infixr] = ACTIONS(270),
    [anon_sym_instance] = ACTIONS(270),
    [anon_sym_let] = ACTIONS(270),
    [anon_sym_of] = ACTIONS(270),
    [anon_sym_then] = ACTIONS(270),
    [anon_sym__] = ACTIONS(270),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [sym__identifier] = STATE(23),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(96),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_module] = ACTIONS(278),
    [anon_sym_where] = ACTIONS(278),
    [anon_sym_import] = ACTIONS(278),
    [anon_sym_data] = ACTIONS(278),
    [anon_sym_newtype] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [anon_sym_do] = ACTIONS(278),
    [anon_sym_else] = ACTIONS(278),
    [anon_sym_foreign] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_in] = ACTIONS(278),
    [anon_sym_infix] = ACTIONS(278),
    [anon_sym_infixl] = ACTIONS(278),
    [anon_sym_infixr] = ACTIONS(278),
    [anon_sym_instance] = ACTIONS(278),
    [anon_sym_let] = ACTIONS(278),
    [anon_sym_of] = ACTIONS(278),
    [anon_sym_then] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [sym__integer_literal] = ACTIONS(278),
    [sym__octal_literal] = ACTIONS(278),
    [sym__hexidecimal_literal] = ACTIONS(278),
  },
  [66] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(282),
  },
  [67] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(284),
  },
  [68] = {
    [sym__cntrl] = STATE(98),
    [anon_sym__] = ACTIONS(286),
    [sym_comment] = ACTIONS(26),
    [sym__ascii_large] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(286),
    [anon_sym_BSLASH] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
  },
  [69] = {
    [aux_sym__escape_repeat1] = STATE(100),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(288),
  },
  [70] = {
    [aux_sym__escape_repeat2] = STATE(102),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(290),
  },
  [71] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(292),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym__] = ACTIONS(294),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(294),
    [sym__ascii_large] = ACTIONS(294),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_1] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_AT] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [anon_sym_BSLASH] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_BQUOTE] = ACTIONS(294),
    [sym__space] = ACTIONS(294),
    [sym__newline] = ACTIONS(294),
    [sym__tab] = ACTIONS(294),
    [sym__vertical_tab] = ACTIONS(294),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(296),
    [sym__ascii_large] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(296),
    [anon_sym_POUND] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_1] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_BQUOTE] = ACTIONS(296),
    [sym__space] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
    [sym__tab] = ACTIONS(296),
    [sym__vertical_tab] = ACTIONS(296),
  },
  [74] = {
    [sym__cntrl] = STATE(104),
    [anon_sym__] = ACTIONS(298),
    [sym_comment] = ACTIONS(26),
    [sym__ascii_large] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
  },
  [75] = {
    [aux_sym__escape_repeat1] = STATE(106),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(300),
  },
  [76] = {
    [aux_sym__escape_repeat2] = STATE(108),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(302),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym__] = ACTIONS(304),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(304),
    [sym__ascii_large] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(304),
    [anon_sym_POUND] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_AMP] = ACTIONS(304),
    [anon_sym_1] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_TILDE] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(304),
    [sym__space] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
    [sym__tab] = ACTIONS(304),
    [sym__vertical_tab] = ACTIONS(304),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(306),
    [sym__ascii_large] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(306),
    [sym__space] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
    [sym__tab] = ACTIONS(306),
    [sym__vertical_tab] = ACTIONS(306),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(310),
    [anon_sym_where] = ACTIONS(310),
    [anon_sym_import] = ACTIONS(310),
    [anon_sym_data] = ACTIONS(310),
    [anon_sym_newtype] = ACTIONS(310),
    [anon_sym_type] = ACTIONS(310),
    [sym_variable_identifier] = ACTIONS(312),
    [sym_constructor_identifier] = ACTIONS(312),
    [sym_module_identifier] = ACTIONS(312),
    [anon_sym_case] = ACTIONS(310),
    [anon_sym_class] = ACTIONS(310),
    [anon_sym_default] = ACTIONS(310),
    [anon_sym_deriving] = ACTIONS(310),
    [anon_sym_do] = ACTIONS(310),
    [anon_sym_else] = ACTIONS(310),
    [anon_sym_foreign] = ACTIONS(310),
    [anon_sym_if] = ACTIONS(310),
    [anon_sym_in] = ACTIONS(310),
    [anon_sym_infix] = ACTIONS(310),
    [anon_sym_infixl] = ACTIONS(310),
    [anon_sym_infixr] = ACTIONS(310),
    [anon_sym_instance] = ACTIONS(310),
    [anon_sym_let] = ACTIONS(310),
    [anon_sym_of] = ACTIONS(310),
    [anon_sym_then] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__integer_literal] = ACTIONS(310),
    [sym__octal_literal] = ACTIONS(310),
    [sym__hexidecimal_literal] = ACTIONS(310),
  },
  [80] = {
    [sym__statement] = STATE(49),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [81] = {
    [anon_sym_where] = ACTIONS(316),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(111),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(320),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [85] = {
    [sym__identifier] = STATE(114),
    [sym_reserved_identifier] = STATE(90),
    [anon_sym_where] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_module_identifier] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(250),
    [anon_sym_do] = ACTIONS(250),
    [anon_sym_else] = ACTIONS(250),
    [anon_sym_foreign] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_in] = ACTIONS(250),
    [anon_sym_infix] = ACTIONS(250),
    [anon_sym_infixl] = ACTIONS(250),
    [anon_sym_infixr] = ACTIONS(250),
    [anon_sym_instance] = ACTIONS(250),
    [anon_sym_let] = ACTIONS(250),
    [anon_sym_of] = ACTIONS(250),
    [anon_sym_then] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(26),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_where] = ACTIONS(330),
    [anon_sym_import] = ACTIONS(330),
    [anon_sym_data] = ACTIONS(330),
    [anon_sym_newtype] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [sym_variable_identifier] = ACTIONS(332),
    [sym_constructor_identifier] = ACTIONS(332),
    [sym_module_identifier] = ACTIONS(332),
    [anon_sym_case] = ACTIONS(330),
    [anon_sym_class] = ACTIONS(330),
    [anon_sym_default] = ACTIONS(330),
    [anon_sym_deriving] = ACTIONS(330),
    [anon_sym_do] = ACTIONS(330),
    [anon_sym_else] = ACTIONS(330),
    [anon_sym_foreign] = ACTIONS(330),
    [anon_sym_if] = ACTIONS(330),
    [anon_sym_in] = ACTIONS(330),
    [anon_sym_infix] = ACTIONS(330),
    [anon_sym_infixl] = ACTIONS(330),
    [anon_sym_infixr] = ACTIONS(330),
    [anon_sym_instance] = ACTIONS(330),
    [anon_sym_let] = ACTIONS(330),
    [anon_sym_of] = ACTIONS(330),
    [anon_sym_then] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [sym__integer_literal] = ACTIONS(330),
    [sym__octal_literal] = ACTIONS(330),
    [sym__hexidecimal_literal] = ACTIONS(330),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_module] = ACTIONS(336),
    [anon_sym_where] = ACTIONS(336),
    [anon_sym_import] = ACTIONS(336),
    [anon_sym_data] = ACTIONS(336),
    [anon_sym_newtype] = ACTIONS(336),
    [anon_sym_type] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(338),
    [sym_module_identifier] = ACTIONS(338),
    [anon_sym_case] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_default] = ACTIONS(336),
    [anon_sym_deriving] = ACTIONS(336),
    [anon_sym_do] = ACTIONS(336),
    [anon_sym_else] = ACTIONS(336),
    [anon_sym_foreign] = ACTIONS(336),
    [anon_sym_if] = ACTIONS(336),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_infix] = ACTIONS(336),
    [anon_sym_infixl] = ACTIONS(336),
    [anon_sym_infixr] = ACTIONS(336),
    [anon_sym_instance] = ACTIONS(336),
    [anon_sym_let] = ACTIONS(336),
    [anon_sym_of] = ACTIONS(336),
    [anon_sym_then] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [88] = {
    [aux_sym_import_specification_repeat1] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(344),
    [sym_comment] = ACTIONS(26),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_hiding] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_hiding] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [91] = {
    [sym_import_specification] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_where] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(330),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(330),
    [anon_sym_newtype] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
    [sym_variable_identifier] = ACTIONS(332),
    [sym_constructor_identifier] = ACTIONS(332),
    [sym_module_identifier] = ACTIONS(332),
    [anon_sym_case] = ACTIONS(330),
    [anon_sym_class] = ACTIONS(330),
    [anon_sym_default] = ACTIONS(330),
    [anon_sym_deriving] = ACTIONS(330),
    [anon_sym_do] = ACTIONS(330),
    [anon_sym_else] = ACTIONS(330),
    [anon_sym_foreign] = ACTIONS(330),
    [anon_sym_if] = ACTIONS(330),
    [anon_sym_in] = ACTIONS(330),
    [anon_sym_infix] = ACTIONS(330),
    [anon_sym_infixl] = ACTIONS(330),
    [anon_sym_infixr] = ACTIONS(330),
    [anon_sym_instance] = ACTIONS(330),
    [anon_sym_let] = ACTIONS(330),
    [anon_sym_of] = ACTIONS(330),
    [anon_sym_then] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [sym__integer_literal] = ACTIONS(330),
    [sym__octal_literal] = ACTIONS(330),
    [sym__hexidecimal_literal] = ACTIONS(330),
  },
  [92] = {
    [sym__identifier] = STATE(120),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(344),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(350),
    [sym_module_identifier] = ACTIONS(350),
    [anon_sym_case] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_deriving] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_else] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_if] = ACTIONS(348),
    [anon_sym_in] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_let] = ACTIONS(348),
    [anon_sym_of] = ACTIONS(348),
    [anon_sym_then] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [94] = {
    [sym_labeled_fields] = STATE(122),
    [sym__identifier] = STATE(122),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(352),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_module] = ACTIONS(356),
    [anon_sym_where] = ACTIONS(356),
    [anon_sym_import] = ACTIONS(356),
    [anon_sym_data] = ACTIONS(356),
    [anon_sym_newtype] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [sym_variable_identifier] = ACTIONS(358),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [anon_sym_case] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_default] = ACTIONS(356),
    [anon_sym_deriving] = ACTIONS(356),
    [anon_sym_do] = ACTIONS(356),
    [anon_sym_else] = ACTIONS(356),
    [anon_sym_foreign] = ACTIONS(356),
    [anon_sym_if] = ACTIONS(356),
    [anon_sym_in] = ACTIONS(356),
    [anon_sym_infix] = ACTIONS(356),
    [anon_sym_infixl] = ACTIONS(356),
    [anon_sym_infixr] = ACTIONS(356),
    [anon_sym_instance] = ACTIONS(356),
    [anon_sym_let] = ACTIONS(356),
    [anon_sym_of] = ACTIONS(356),
    [anon_sym_then] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [sym__integer_literal] = ACTIONS(356),
    [sym__octal_literal] = ACTIONS(356),
    [sym__hexidecimal_literal] = ACTIONS(356),
  },
  [96] = {
    [sym__identifier] = STATE(61),
    [sym_reserved_identifier] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_module] = ACTIONS(362),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_data] = ACTIONS(362),
    [anon_sym_newtype] = ACTIONS(362),
    [anon_sym_type] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(364),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [sym__integer_literal] = ACTIONS(362),
    [sym__octal_literal] = ACTIONS(362),
    [sym__hexidecimal_literal] = ACTIONS(362),
  },
  [97] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(366),
  },
  [98] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(368),
  },
  [99] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(370),
  },
  [100] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(374),
  },
  [101] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(376),
  },
  [102] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(378),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym__] = ACTIONS(380),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(380),
    [sym__ascii_large] = ACTIONS(380),
    [anon_sym_BANG] = ACTIONS(380),
    [anon_sym_POUND] = ACTIONS(380),
    [anon_sym_DOLLAR] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_AMP] = ACTIONS(380),
    [anon_sym_1] = ACTIONS(380),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_LT] = ACTIONS(380),
    [anon_sym_GT] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_AT] = ACTIONS(380),
    [anon_sym_CARET] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_TILDE] = ACTIONS(380),
    [anon_sym_COLON] = ACTIONS(380),
    [anon_sym_BSLASH] = ACTIONS(380),
    [anon_sym_SEMI] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
    [anon_sym_BQUOTE] = ACTIONS(380),
    [sym__space] = ACTIONS(380),
    [sym__newline] = ACTIONS(380),
    [sym__tab] = ACTIONS(380),
    [sym__vertical_tab] = ACTIONS(380),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [anon_sym__] = ACTIONS(382),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(382),
    [sym__ascii_large] = ACTIONS(382),
    [anon_sym_BANG] = ACTIONS(382),
    [anon_sym_POUND] = ACTIONS(382),
    [anon_sym_DOLLAR] = ACTIONS(382),
    [anon_sym_PERCENT] = ACTIONS(382),
    [anon_sym_AMP] = ACTIONS(382),
    [anon_sym_1] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_SLASH] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(382),
    [anon_sym_CARET] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_DASH] = ACTIONS(382),
    [anon_sym_TILDE] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_BSLASH] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_BQUOTE] = ACTIONS(382),
    [sym__space] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
    [sym__tab] = ACTIONS(382),
    [sym__vertical_tab] = ACTIONS(382),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(384),
    [anon_sym__] = ACTIONS(384),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(384),
    [sym__ascii_large] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_1] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(384),
    [anon_sym_BQUOTE] = ACTIONS(384),
    [sym__space] = ACTIONS(384),
    [sym__newline] = ACTIONS(384),
    [sym__tab] = ACTIONS(384),
    [sym__vertical_tab] = ACTIONS(384),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(384),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym__] = ACTIONS(386),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(386),
    [sym__ascii_large] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_1] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_BSLASH] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [sym__space] = ACTIONS(386),
    [sym__newline] = ACTIONS(386),
    [sym__tab] = ACTIONS(386),
    [sym__vertical_tab] = ACTIONS(386),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(388),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_EQ] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(390),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(390),
    [sym__ascii_large] = ACTIONS(390),
    [anon_sym_BANG] = ACTIONS(390),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_DOLLAR] = ACTIONS(390),
    [anon_sym_PERCENT] = ACTIONS(390),
    [anon_sym_AMP] = ACTIONS(390),
    [anon_sym_1] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(390),
    [anon_sym_SLASH] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(390),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_CARET] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_TILDE] = ACTIONS(390),
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_BSLASH] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [anon_sym_BQUOTE] = ACTIONS(390),
    [sym__space] = ACTIONS(390),
    [sym__newline] = ACTIONS(390),
    [sym__tab] = ACTIONS(390),
    [sym__vertical_tab] = ACTIONS(390),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(390),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym__] = ACTIONS(386),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(386),
    [sym__ascii_large] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_1] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_BSLASH] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [sym__space] = ACTIONS(386),
    [sym__newline] = ACTIONS(386),
    [sym__tab] = ACTIONS(386),
    [sym__vertical_tab] = ACTIONS(386),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(392),
  },
  [109] = {
    [sym_export_declaration] = STATE(127),
    [sym__identifier] = STATE(83),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [anon_sym_where] = ACTIONS(394),
    [sym_comment] = ACTIONS(26),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(26),
  },
  [112] = {
    [sym__identifier] = STATE(131),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [sym__statement] = STATE(49),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [114] = {
    [sym_import_specification] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_module] = ACTIONS(406),
    [anon_sym_where] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(406),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(406),
    [anon_sym_newtype] = ACTIONS(406),
    [anon_sym_type] = ACTIONS(406),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(408),
    [anon_sym_case] = ACTIONS(406),
    [anon_sym_class] = ACTIONS(406),
    [anon_sym_default] = ACTIONS(406),
    [anon_sym_deriving] = ACTIONS(406),
    [anon_sym_do] = ACTIONS(406),
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_foreign] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(406),
    [anon_sym_in] = ACTIONS(406),
    [anon_sym_infix] = ACTIONS(406),
    [anon_sym_infixl] = ACTIONS(406),
    [anon_sym_infixr] = ACTIONS(406),
    [anon_sym_instance] = ACTIONS(406),
    [anon_sym_let] = ACTIONS(406),
    [anon_sym_of] = ACTIONS(406),
    [anon_sym_then] = ACTIONS(406),
    [anon_sym__] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [sym__integer_literal] = ACTIONS(406),
    [sym__octal_literal] = ACTIONS(406),
    [sym__hexidecimal_literal] = ACTIONS(406),
  },
  [115] = {
    [sym__identifier] = STATE(134),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(410),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [sym__identifier] = STATE(135),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_where] = ACTIONS(414),
    [anon_sym_import] = ACTIONS(414),
    [anon_sym_data] = ACTIONS(414),
    [anon_sym_newtype] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_constructor_identifier] = ACTIONS(416),
    [sym_module_identifier] = ACTIONS(416),
    [anon_sym_case] = ACTIONS(414),
    [anon_sym_class] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(414),
    [anon_sym_do] = ACTIONS(414),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_foreign] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
    [anon_sym_infix] = ACTIONS(414),
    [anon_sym_infixl] = ACTIONS(414),
    [anon_sym_infixr] = ACTIONS(414),
    [anon_sym_instance] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [sym__integer_literal] = ACTIONS(414),
    [sym__octal_literal] = ACTIONS(414),
    [sym__hexidecimal_literal] = ACTIONS(414),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_module] = ACTIONS(406),
    [anon_sym_where] = ACTIONS(406),
    [anon_sym_import] = ACTIONS(406),
    [anon_sym_data] = ACTIONS(406),
    [anon_sym_newtype] = ACTIONS(406),
    [anon_sym_type] = ACTIONS(406),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(408),
    [anon_sym_case] = ACTIONS(406),
    [anon_sym_class] = ACTIONS(406),
    [anon_sym_default] = ACTIONS(406),
    [anon_sym_deriving] = ACTIONS(406),
    [anon_sym_do] = ACTIONS(406),
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_foreign] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(406),
    [anon_sym_in] = ACTIONS(406),
    [anon_sym_infix] = ACTIONS(406),
    [anon_sym_infixl] = ACTIONS(406),
    [anon_sym_infixr] = ACTIONS(406),
    [anon_sym_instance] = ACTIONS(406),
    [anon_sym_let] = ACTIONS(406),
    [anon_sym_of] = ACTIONS(406),
    [anon_sym_then] = ACTIONS(406),
    [anon_sym__] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [sym__integer_literal] = ACTIONS(406),
    [sym__octal_literal] = ACTIONS(406),
    [sym__hexidecimal_literal] = ACTIONS(406),
  },
  [120] = {
    [aux_sym_import_specification_repeat1] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_comment] = ACTIONS(26),
  },
  [121] = {
    [aux_sym_labeled_fields_repeat2] = STATE(142),
    [anon_sym_RBRACE] = ACTIONS(424),
    [sym_variable_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_where] = ACTIONS(430),
    [anon_sym_import] = ACTIONS(430),
    [anon_sym_data] = ACTIONS(430),
    [anon_sym_newtype] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(432),
    [sym_constructor_identifier] = ACTIONS(432),
    [sym_module_identifier] = ACTIONS(432),
    [anon_sym_case] = ACTIONS(430),
    [anon_sym_class] = ACTIONS(430),
    [anon_sym_default] = ACTIONS(430),
    [anon_sym_deriving] = ACTIONS(430),
    [anon_sym_do] = ACTIONS(430),
    [anon_sym_else] = ACTIONS(430),
    [anon_sym_foreign] = ACTIONS(430),
    [anon_sym_if] = ACTIONS(430),
    [anon_sym_in] = ACTIONS(430),
    [anon_sym_infix] = ACTIONS(430),
    [anon_sym_infixl] = ACTIONS(430),
    [anon_sym_infixr] = ACTIONS(430),
    [anon_sym_instance] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(430),
    [anon_sym_of] = ACTIONS(430),
    [anon_sym_then] = ACTIONS(430),
    [anon_sym__] = ACTIONS(430),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [sym__integer_literal] = ACTIONS(430),
    [sym__octal_literal] = ACTIONS(430),
    [sym__hexidecimal_literal] = ACTIONS(430),
  },
  [123] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(434),
  },
  [124] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(436),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(436),
  },
  [125] = {
    [anon_sym_LPAREN] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym__] = ACTIONS(438),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(438),
    [anon_sym_DQUOTE] = ACTIONS(438),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(438),
    [sym__ascii_large] = ACTIONS(438),
    [anon_sym_BANG] = ACTIONS(438),
    [anon_sym_POUND] = ACTIONS(438),
    [anon_sym_DOLLAR] = ACTIONS(438),
    [anon_sym_PERCENT] = ACTIONS(438),
    [anon_sym_AMP] = ACTIONS(438),
    [anon_sym_1] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_QMARK] = ACTIONS(438),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_CARET] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(438),
    [anon_sym_COLON] = ACTIONS(438),
    [anon_sym_BSLASH] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_RBRACK] = ACTIONS(438),
    [anon_sym_BQUOTE] = ACTIONS(438),
    [sym__space] = ACTIONS(438),
    [sym__newline] = ACTIONS(438),
    [sym__tab] = ACTIONS(438),
    [sym__vertical_tab] = ACTIONS(438),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(438),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(440),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(440),
    [sym__ascii_large] = ACTIONS(440),
    [anon_sym_BANG] = ACTIONS(440),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_1] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_BSLASH] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_RBRACK] = ACTIONS(440),
    [anon_sym_BQUOTE] = ACTIONS(440),
    [sym__space] = ACTIONS(440),
    [sym__newline] = ACTIONS(440),
    [sym__tab] = ACTIONS(440),
    [sym__vertical_tab] = ACTIONS(440),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(440),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(26),
  },
  [128] = {
    [sym_export_declaration] = STATE(143),
    [sym__identifier] = STATE(83),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [anon_sym_where] = ACTIONS(444),
    [sym_comment] = ACTIONS(26),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [aux_sym_export_declaration_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
    [anon_sym_import] = ACTIONS(452),
    [anon_sym_data] = ACTIONS(452),
    [anon_sym_newtype] = ACTIONS(452),
    [anon_sym_type] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(454),
    [sym_constructor_identifier] = ACTIONS(454),
    [sym_module_identifier] = ACTIONS(454),
    [anon_sym_case] = ACTIONS(452),
    [anon_sym_class] = ACTIONS(452),
    [anon_sym_default] = ACTIONS(452),
    [anon_sym_deriving] = ACTIONS(452),
    [anon_sym_do] = ACTIONS(452),
    [anon_sym_else] = ACTIONS(452),
    [anon_sym_foreign] = ACTIONS(452),
    [anon_sym_if] = ACTIONS(452),
    [anon_sym_in] = ACTIONS(452),
    [anon_sym_infix] = ACTIONS(452),
    [anon_sym_infixl] = ACTIONS(452),
    [anon_sym_infixr] = ACTIONS(452),
    [anon_sym_instance] = ACTIONS(452),
    [anon_sym_let] = ACTIONS(452),
    [anon_sym_of] = ACTIONS(452),
    [anon_sym_then] = ACTIONS(452),
    [anon_sym__] = ACTIONS(452),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(454),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(450),
    [sym__integer_literal] = ACTIONS(452),
    [sym__octal_literal] = ACTIONS(452),
    [sym__hexidecimal_literal] = ACTIONS(452),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(26),
  },
  [134] = {
    [aux_sym_export_declaration_repeat1] = STATE(148),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(26),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [sym__identifier] = STATE(150),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [anon_sym_module] = ACTIONS(464),
    [anon_sym_where] = ACTIONS(464),
    [anon_sym_import] = ACTIONS(464),
    [anon_sym_data] = ACTIONS(464),
    [anon_sym_newtype] = ACTIONS(464),
    [anon_sym_type] = ACTIONS(464),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_constructor_identifier] = ACTIONS(466),
    [sym_module_identifier] = ACTIONS(466),
    [anon_sym_case] = ACTIONS(464),
    [anon_sym_class] = ACTIONS(464),
    [anon_sym_default] = ACTIONS(464),
    [anon_sym_deriving] = ACTIONS(464),
    [anon_sym_do] = ACTIONS(464),
    [anon_sym_else] = ACTIONS(464),
    [anon_sym_foreign] = ACTIONS(464),
    [anon_sym_if] = ACTIONS(464),
    [anon_sym_in] = ACTIONS(464),
    [anon_sym_infix] = ACTIONS(464),
    [anon_sym_infixl] = ACTIONS(464),
    [anon_sym_infixr] = ACTIONS(464),
    [anon_sym_instance] = ACTIONS(464),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_of] = ACTIONS(464),
    [anon_sym_then] = ACTIONS(464),
    [anon_sym__] = ACTIONS(464),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(466),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [sym__integer_literal] = ACTIONS(464),
    [sym__octal_literal] = ACTIONS(464),
    [sym__hexidecimal_literal] = ACTIONS(464),
  },
  [138] = {
    [sym__identifier] = STATE(152),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(26),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_module] = ACTIONS(474),
    [anon_sym_where] = ACTIONS(474),
    [anon_sym_import] = ACTIONS(474),
    [anon_sym_data] = ACTIONS(474),
    [anon_sym_newtype] = ACTIONS(474),
    [anon_sym_type] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [anon_sym_case] = ACTIONS(474),
    [anon_sym_class] = ACTIONS(474),
    [anon_sym_default] = ACTIONS(474),
    [anon_sym_deriving] = ACTIONS(474),
    [anon_sym_do] = ACTIONS(474),
    [anon_sym_else] = ACTIONS(474),
    [anon_sym_foreign] = ACTIONS(474),
    [anon_sym_if] = ACTIONS(474),
    [anon_sym_in] = ACTIONS(474),
    [anon_sym_infix] = ACTIONS(474),
    [anon_sym_infixl] = ACTIONS(474),
    [anon_sym_infixr] = ACTIONS(474),
    [anon_sym_instance] = ACTIONS(474),
    [anon_sym_let] = ACTIONS(474),
    [anon_sym_of] = ACTIONS(474),
    [anon_sym_then] = ACTIONS(474),
    [anon_sym__] = ACTIONS(474),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(472),
    [anon_sym_DQUOTE] = ACTIONS(472),
    [sym__integer_literal] = ACTIONS(474),
    [sym__octal_literal] = ACTIONS(474),
    [sym__hexidecimal_literal] = ACTIONS(474),
  },
  [141] = {
    [aux_sym_labeled_fields_repeat1] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_COLON_COLON] = ACTIONS(480),
    [sym_comment] = ACTIONS(26),
  },
  [142] = {
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_variable_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [sym_comment] = ACTIONS(26),
  },
  [145] = {
    [sym__identifier] = STATE(159),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(492),
    [sym_comment] = ACTIONS(26),
  },
  [147] = {
    [aux_sym_import_specification_repeat1] = STATE(163),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [sym__identifier] = STATE(166),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [aux_sym_export_declaration_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [anon_sym_module] = ACTIONS(506),
    [anon_sym_where] = ACTIONS(506),
    [anon_sym_import] = ACTIONS(506),
    [anon_sym_data] = ACTIONS(506),
    [anon_sym_newtype] = ACTIONS(506),
    [anon_sym_type] = ACTIONS(506),
    [sym_variable_identifier] = ACTIONS(508),
    [sym_constructor_identifier] = ACTIONS(508),
    [sym_module_identifier] = ACTIONS(508),
    [anon_sym_case] = ACTIONS(506),
    [anon_sym_class] = ACTIONS(506),
    [anon_sym_default] = ACTIONS(506),
    [anon_sym_deriving] = ACTIONS(506),
    [anon_sym_do] = ACTIONS(506),
    [anon_sym_else] = ACTIONS(506),
    [anon_sym_foreign] = ACTIONS(506),
    [anon_sym_if] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(506),
    [anon_sym_infix] = ACTIONS(506),
    [anon_sym_infixl] = ACTIONS(506),
    [anon_sym_infixr] = ACTIONS(506),
    [anon_sym_instance] = ACTIONS(506),
    [anon_sym_let] = ACTIONS(506),
    [anon_sym_of] = ACTIONS(506),
    [anon_sym_then] = ACTIONS(506),
    [anon_sym__] = ACTIONS(506),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(508),
    [anon_sym_SQUOTE] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [sym__integer_literal] = ACTIONS(506),
    [sym__octal_literal] = ACTIONS(506),
    [sym__hexidecimal_literal] = ACTIONS(506),
  },
  [154] = {
    [sym_variable_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [sym__identifier] = STATE(172),
    [sym_reserved_identifier] = STATE(171),
    [anon_sym_where] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(514),
    [sym_constructor_identifier] = ACTIONS(514),
    [sym_module_identifier] = ACTIONS(514),
    [anon_sym_case] = ACTIONS(512),
    [anon_sym_class] = ACTIONS(512),
    [anon_sym_default] = ACTIONS(512),
    [anon_sym_deriving] = ACTIONS(512),
    [anon_sym_do] = ACTIONS(512),
    [anon_sym_else] = ACTIONS(512),
    [anon_sym_foreign] = ACTIONS(512),
    [anon_sym_if] = ACTIONS(512),
    [anon_sym_in] = ACTIONS(512),
    [anon_sym_infix] = ACTIONS(512),
    [anon_sym_infixl] = ACTIONS(512),
    [anon_sym_infixr] = ACTIONS(512),
    [anon_sym_instance] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_of] = ACTIONS(512),
    [anon_sym_then] = ACTIONS(512),
    [anon_sym__] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_COLON_COLON] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [anon_sym_module] = ACTIONS(522),
    [anon_sym_where] = ACTIONS(522),
    [anon_sym_import] = ACTIONS(522),
    [anon_sym_data] = ACTIONS(522),
    [anon_sym_newtype] = ACTIONS(522),
    [anon_sym_type] = ACTIONS(522),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_constructor_identifier] = ACTIONS(524),
    [sym_module_identifier] = ACTIONS(524),
    [anon_sym_case] = ACTIONS(522),
    [anon_sym_class] = ACTIONS(522),
    [anon_sym_default] = ACTIONS(522),
    [anon_sym_deriving] = ACTIONS(522),
    [anon_sym_do] = ACTIONS(522),
    [anon_sym_else] = ACTIONS(522),
    [anon_sym_foreign] = ACTIONS(522),
    [anon_sym_if] = ACTIONS(522),
    [anon_sym_in] = ACTIONS(522),
    [anon_sym_infix] = ACTIONS(522),
    [anon_sym_infixl] = ACTIONS(522),
    [anon_sym_infixr] = ACTIONS(522),
    [anon_sym_instance] = ACTIONS(522),
    [anon_sym_let] = ACTIONS(522),
    [anon_sym_of] = ACTIONS(522),
    [anon_sym_then] = ACTIONS(522),
    [anon_sym__] = ACTIONS(522),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [sym__integer_literal] = ACTIONS(522),
    [sym__octal_literal] = ACTIONS(522),
    [sym__hexidecimal_literal] = ACTIONS(522),
  },
  [158] = {
    [aux_sym_labeled_fields_repeat1] = STATE(175),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_COLON_COLON] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [sym__identifier] = STATE(176),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_module] = ACTIONS(532),
    [anon_sym_where] = ACTIONS(532),
    [anon_sym_import] = ACTIONS(532),
    [anon_sym_data] = ACTIONS(532),
    [anon_sym_newtype] = ACTIONS(532),
    [anon_sym_type] = ACTIONS(532),
    [sym_variable_identifier] = ACTIONS(534),
    [sym_constructor_identifier] = ACTIONS(534),
    [sym_module_identifier] = ACTIONS(534),
    [anon_sym_case] = ACTIONS(532),
    [anon_sym_class] = ACTIONS(532),
    [anon_sym_default] = ACTIONS(532),
    [anon_sym_deriving] = ACTIONS(532),
    [anon_sym_do] = ACTIONS(532),
    [anon_sym_else] = ACTIONS(532),
    [anon_sym_foreign] = ACTIONS(532),
    [anon_sym_if] = ACTIONS(532),
    [anon_sym_in] = ACTIONS(532),
    [anon_sym_infix] = ACTIONS(532),
    [anon_sym_infixl] = ACTIONS(532),
    [anon_sym_infixr] = ACTIONS(532),
    [anon_sym_instance] = ACTIONS(532),
    [anon_sym_let] = ACTIONS(532),
    [anon_sym_of] = ACTIONS(532),
    [anon_sym_then] = ACTIONS(532),
    [anon_sym__] = ACTIONS(532),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(530),
    [anon_sym_DQUOTE] = ACTIONS(530),
    [sym__integer_literal] = ACTIONS(532),
    [sym__octal_literal] = ACTIONS(532),
    [sym__hexidecimal_literal] = ACTIONS(532),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [aux_sym_import_specification_repeat1] = STATE(178),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [aux_sym_export_declaration_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym__identifier] = STATE(182),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(540),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_COLON_COLON] = ACTIONS(544),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [anon_sym_RBRACE] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_RBRACE] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(546),
    [sym_variable_identifier] = ACTIONS(548),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [sym_variable_identifier] = ACTIONS(550),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [sym__identifier] = STATE(185),
    [sym_reserved_identifier] = STATE(171),
    [anon_sym_where] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(514),
    [sym_constructor_identifier] = ACTIONS(514),
    [sym_module_identifier] = ACTIONS(514),
    [anon_sym_case] = ACTIONS(512),
    [anon_sym_class] = ACTIONS(512),
    [anon_sym_default] = ACTIONS(512),
    [anon_sym_deriving] = ACTIONS(512),
    [anon_sym_do] = ACTIONS(512),
    [anon_sym_else] = ACTIONS(512),
    [anon_sym_foreign] = ACTIONS(512),
    [anon_sym_if] = ACTIONS(512),
    [anon_sym_in] = ACTIONS(512),
    [anon_sym_infix] = ACTIONS(512),
    [anon_sym_infixl] = ACTIONS(512),
    [anon_sym_infixr] = ACTIONS(512),
    [anon_sym_instance] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_of] = ACTIONS(512),
    [anon_sym_then] = ACTIONS(512),
    [anon_sym__] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_COLON_COLON] = ACTIONS(552),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [anon_sym_module] = ACTIONS(558),
    [anon_sym_where] = ACTIONS(558),
    [anon_sym_import] = ACTIONS(558),
    [anon_sym_data] = ACTIONS(558),
    [anon_sym_newtype] = ACTIONS(558),
    [anon_sym_type] = ACTIONS(558),
    [sym_variable_identifier] = ACTIONS(560),
    [sym_constructor_identifier] = ACTIONS(560),
    [sym_module_identifier] = ACTIONS(560),
    [anon_sym_case] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(558),
    [anon_sym_default] = ACTIONS(558),
    [anon_sym_deriving] = ACTIONS(558),
    [anon_sym_do] = ACTIONS(558),
    [anon_sym_else] = ACTIONS(558),
    [anon_sym_foreign] = ACTIONS(558),
    [anon_sym_if] = ACTIONS(558),
    [anon_sym_in] = ACTIONS(558),
    [anon_sym_infix] = ACTIONS(558),
    [anon_sym_infixl] = ACTIONS(558),
    [anon_sym_infixr] = ACTIONS(558),
    [anon_sym_instance] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(558),
    [anon_sym_of] = ACTIONS(558),
    [anon_sym_then] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(560),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DQUOTE] = ACTIONS(556),
    [sym__integer_literal] = ACTIONS(558),
    [sym__octal_literal] = ACTIONS(558),
    [sym__hexidecimal_literal] = ACTIONS(558),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [aux_sym_export_declaration_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [aux_sym_import_specification_repeat1] = STATE(190),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_COLON_COLON] = ACTIONS(568),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [anon_sym_RBRACE] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [sym__identifier] = STATE(191),
    [sym_reserved_identifier] = STATE(171),
    [anon_sym_where] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(514),
    [sym_constructor_identifier] = ACTIONS(514),
    [sym_module_identifier] = ACTIONS(514),
    [anon_sym_case] = ACTIONS(512),
    [anon_sym_class] = ACTIONS(512),
    [anon_sym_default] = ACTIONS(512),
    [anon_sym_deriving] = ACTIONS(512),
    [anon_sym_do] = ACTIONS(512),
    [anon_sym_else] = ACTIONS(512),
    [anon_sym_foreign] = ACTIONS(512),
    [anon_sym_if] = ACTIONS(512),
    [anon_sym_in] = ACTIONS(512),
    [anon_sym_infix] = ACTIONS(512),
    [anon_sym_infixl] = ACTIONS(512),
    [anon_sym_infixr] = ACTIONS(512),
    [anon_sym_instance] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_of] = ACTIONS(512),
    [anon_sym_then] = ACTIONS(512),
    [anon_sym__] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_module] = ACTIONS(576),
    [anon_sym_where] = ACTIONS(576),
    [anon_sym_import] = ACTIONS(576),
    [anon_sym_data] = ACTIONS(576),
    [anon_sym_newtype] = ACTIONS(576),
    [anon_sym_type] = ACTIONS(576),
    [sym_variable_identifier] = ACTIONS(578),
    [sym_constructor_identifier] = ACTIONS(578),
    [sym_module_identifier] = ACTIONS(578),
    [anon_sym_case] = ACTIONS(576),
    [anon_sym_class] = ACTIONS(576),
    [anon_sym_default] = ACTIONS(576),
    [anon_sym_deriving] = ACTIONS(576),
    [anon_sym_do] = ACTIONS(576),
    [anon_sym_else] = ACTIONS(576),
    [anon_sym_foreign] = ACTIONS(576),
    [anon_sym_if] = ACTIONS(576),
    [anon_sym_in] = ACTIONS(576),
    [anon_sym_infix] = ACTIONS(576),
    [anon_sym_infixl] = ACTIONS(576),
    [anon_sym_infixr] = ACTIONS(576),
    [anon_sym_instance] = ACTIONS(576),
    [anon_sym_let] = ACTIONS(576),
    [anon_sym_of] = ACTIONS(576),
    [anon_sym_then] = ACTIONS(576),
    [anon_sym__] = ACTIONS(576),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(578),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [sym__integer_literal] = ACTIONS(576),
    [sym__octal_literal] = ACTIONS(576),
    [sym__hexidecimal_literal] = ACTIONS(576),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(580),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(582),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(586),
    [sym_variable_identifier] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_RPAREN] = ACTIONS(590),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [anon_sym_module] = ACTIONS(594),
    [anon_sym_where] = ACTIONS(594),
    [anon_sym_import] = ACTIONS(594),
    [anon_sym_data] = ACTIONS(594),
    [anon_sym_newtype] = ACTIONS(594),
    [anon_sym_type] = ACTIONS(594),
    [sym_variable_identifier] = ACTIONS(596),
    [sym_constructor_identifier] = ACTIONS(596),
    [sym_module_identifier] = ACTIONS(596),
    [anon_sym_case] = ACTIONS(594),
    [anon_sym_class] = ACTIONS(594),
    [anon_sym_default] = ACTIONS(594),
    [anon_sym_deriving] = ACTIONS(594),
    [anon_sym_do] = ACTIONS(594),
    [anon_sym_else] = ACTIONS(594),
    [anon_sym_foreign] = ACTIONS(594),
    [anon_sym_if] = ACTIONS(594),
    [anon_sym_in] = ACTIONS(594),
    [anon_sym_infix] = ACTIONS(594),
    [anon_sym_infixl] = ACTIONS(594),
    [anon_sym_infixr] = ACTIONS(594),
    [anon_sym_instance] = ACTIONS(594),
    [anon_sym_let] = ACTIONS(594),
    [anon_sym_of] = ACTIONS(594),
    [anon_sym_then] = ACTIONS(594),
    [anon_sym__] = ACTIONS(594),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(596),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [sym__integer_literal] = ACTIONS(594),
    [sym__octal_literal] = ACTIONS(594),
    [sym__hexidecimal_literal] = ACTIONS(594),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1, .fragile = true),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1, .fragile = true),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1, .fragile = true),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_fields, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_fields, 2),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labeled_fields, 2),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 4),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [508] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labeled_fields, 3),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labeled_fields, 3),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labeled_fields, 3),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 5),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labeled_fields_repeat1, 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labeled_fields_repeat2, 3),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labeled_fields_repeat2, 3),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labeled_fields_repeat1, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labeled_fields_repeat2, 4),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labeled_fields_repeat2, 4),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labeled_fields_repeat2, 5),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labeled_fields_repeat2, 5),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_haskell() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
