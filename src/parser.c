#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_SLASH = 6,
  sym_identifier = 7,
  sym__integer_literal = 8,
  aux_sym_literal_token1 = 9,
  sym_shebang = 10,
  sym_mutable_specifier = 11,
  anon_sym_let = 12,
  anon_sym_COLON = 13,
  anon_sym_fn = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_DOT = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_u8 = 19,
  anon_sym_i8 = 20,
  anon_sym_u16 = 21,
  anon_sym_i16 = 22,
  anon_sym_u32 = 23,
  anon_sym_i32 = 24,
  anon_sym_u64 = 25,
  anon_sym_i64 = 26,
  anon_sym_isize = 27,
  anon_sym_usize = 28,
  anon_sym_COMMA = 29,
  anon_sym_AMP = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  anon_sym_BANG = 33,
  sym_source_file = 34,
  sym__statement = 35,
  sym__expression = 36,
  sym_assignment_expression = 37,
  sym_expression_statement = 38,
  sym_standalone_expression = 39,
  sym_binary_expression = 40,
  sym__pattern = 41,
  sym_literal = 42,
  sym_let_declaration = 43,
  sym_function_declaration = 44,
  sym_method_call = 45,
  sym_mut_pattern = 46,
  sym_type_expression = 47,
  sym_parameters = 48,
  sym_parameter = 49,
  sym_reference_type = 50,
  sym_block = 51,
  sym_empty_statement = 52,
  sym_macro_invocation = 53,
  sym_macro_arguments = 54,
  sym__macro_argument_elements = 55,
  sym_expression_list = 56,
  sym_reference_expression = 57,
  sym_unary_expression = 58,
  sym_dereference_expression = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_parameters_repeat1 = 61,
  aux_sym_expression_list_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym__integer_literal] = "_integer_literal",
  [aux_sym_literal_token1] = "literal_token1",
  [sym_shebang] = "shebang",
  [sym_mutable_specifier] = "mutable_specifier",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_u8] = "u8",
  [anon_sym_i8] = "i8",
  [anon_sym_u16] = "u16",
  [anon_sym_i16] = "i16",
  [anon_sym_u32] = "u32",
  [anon_sym_i32] = "i32",
  [anon_sym_u64] = "u64",
  [anon_sym_i64] = "i64",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_COMMA] = ",",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BANG] = "!",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_expression_statement] = "expression_statement",
  [sym_standalone_expression] = "standalone_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__pattern] = "_pattern",
  [sym_literal] = "literal",
  [sym_let_declaration] = "let_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_method_call] = "method_call",
  [sym_mut_pattern] = "mut_pattern",
  [sym_type_expression] = "type_expression",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_reference_type] = "reference_type",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [sym_macro_invocation] = "macro_invocation",
  [sym_macro_arguments] = "macro_arguments",
  [sym__macro_argument_elements] = "_macro_argument_elements",
  [sym_expression_list] = "expression_list",
  [sym_reference_expression] = "reference_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_dereference_expression] = "dereference_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym__integer_literal] = sym__integer_literal,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [sym_shebang] = sym_shebang,
  [sym_mutable_specifier] = sym_mutable_specifier,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_expression_statement] = sym_expression_statement,
  [sym_standalone_expression] = sym_standalone_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__pattern] = sym__pattern,
  [sym_literal] = sym_literal,
  [sym_let_declaration] = sym_let_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_method_call] = sym_method_call,
  [sym_mut_pattern] = sym_mut_pattern,
  [sym_type_expression] = sym_type_expression,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_reference_type] = sym_reference_type,
  [sym_block] = sym_block,
  [sym_empty_statement] = sym_empty_statement,
  [sym_macro_invocation] = sym_macro_invocation,
  [sym_macro_arguments] = sym_macro_arguments,
  [sym__macro_argument_elements] = sym__macro_argument_elements,
  [sym_expression_list] = sym_expression_list,
  [sym_reference_expression] = sym_reference_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_dereference_expression] = sym_dereference_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_mutable_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_standalone_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_mut_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_argument_elements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dereference_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(48);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'z') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(55);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(65);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(64);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__statement] = STATE(5),
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_expression_statement] = STATE(5),
    [sym_binary_expression] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_let_declaration] = STATE(5),
    [sym_function_declaration] = STATE(5),
    [sym_method_call] = STATE(57),
    [sym_block] = STATE(5),
    [sym_empty_statement] = STATE(5),
    [sym_macro_invocation] = STATE(57),
    [sym_reference_expression] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [sym_dereference_expression] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym__integer_literal] = ACTIONS(11),
    [aux_sym_literal_token1] = ACTIONS(11),
    [sym_shebang] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(40), 1,
      anon_sym_fn,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(34), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(2), 7,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_block,
      sym_empty_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [52] = 13,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_dereference_expression,
    STATE(95), 1,
      sym_standalone_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(2), 7,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_block,
      sym_empty_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [106] = 13,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_dereference_expression,
    STATE(96), 1,
      sym_standalone_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(3), 7,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_block,
      sym_empty_statement,
      aux_sym_source_file_repeat1,
    STATE(54), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [160] = 12,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(2), 7,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_block,
      sym_empty_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [211] = 12,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(7), 7,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_block,
      sym_empty_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [262] = 12,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(2), 7,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_block,
      sym_empty_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [313] = 9,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_dereference_expression,
    STATE(60), 1,
      sym_literal,
    STATE(91), 1,
      sym__macro_argument_elements,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(59), 7,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [348] = 8,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_dereference_expression,
    STATE(90), 1,
      sym_expression_list,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(52), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [381] = 7,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      sym_mutable_specifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(40), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [411] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(46), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [438] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(44), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [465] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(55), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [492] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(56), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [519] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(61), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [546] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(53), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [573] = 3,
    ACTIONS(67), 1,
      anon_sym_AMP,
    STATE(85), 2,
      sym_type_expression,
      sym_reference_type,
    ACTIONS(65), 11,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_isize,
      anon_sym_usize,
  [594] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(45), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [621] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(58), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [648] = 6,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(42), 1,
      sym_dereference_expression,
    ACTIONS(11), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(43), 8,
      sym__expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
      sym_unary_expression,
  [675] = 3,
    ACTIONS(69), 1,
      sym_mutable_specifier,
    STATE(83), 1,
      sym_type_expression,
    ACTIONS(65), 11,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_isize,
      anon_sym_usize,
  [695] = 2,
    STATE(78), 1,
      sym_type_expression,
    ACTIONS(65), 11,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_isize,
      anon_sym_usize,
  [712] = 2,
    STATE(80), 1,
      sym_type_expression,
    ACTIONS(65), 11,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_isize,
      anon_sym_usize,
  [729] = 2,
    STATE(84), 1,
      sym_type_expression,
    ACTIONS(65), 11,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_isize,
      anon_sym_usize,
  [746] = 2,
    STATE(81), 1,
      sym_type_expression,
    ACTIONS(65), 11,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_isize,
      anon_sym_usize,
  [763] = 2,
    ACTIONS(73), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [779] = 2,
    ACTIONS(77), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [795] = 2,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [811] = 2,
    ACTIONS(85), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [827] = 2,
    ACTIONS(89), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [843] = 2,
    ACTIONS(93), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [859] = 2,
    ACTIONS(97), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [875] = 2,
    ACTIONS(101), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [891] = 3,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(103), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [909] = 2,
    ACTIONS(111), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [925] = 2,
    ACTIONS(115), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [941] = 2,
    ACTIONS(119), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [957] = 2,
    ACTIONS(123), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [973] = 2,
    ACTIONS(127), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [989] = 1,
    ACTIONS(129), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1001] = 1,
    ACTIONS(131), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1013] = 1,
    ACTIONS(133), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1025] = 1,
    ACTIONS(135), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1037] = 1,
    ACTIONS(137), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1049] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(141), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1065] = 1,
    ACTIONS(145), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1077] = 1,
    ACTIONS(147), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1089] = 1,
    ACTIONS(149), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1101] = 1,
    ACTIONS(151), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1113] = 1,
    ACTIONS(153), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1125] = 1,
    ACTIONS(155), 9,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1137] = 5,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1156] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(161), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1170] = 4,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1186] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1199] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1212] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1225] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1238] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1251] = 2,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1262] = 3,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(143), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1275] = 1,
    ACTIONS(177), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1283] = 3,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_mutable_specifier,
    STATE(74), 2,
      sym__pattern,
      sym_mut_pattern,
  [1294] = 3,
    ACTIONS(181), 1,
      sym_mutable_specifier,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(67), 2,
      sym__pattern,
      sym_mut_pattern,
  [1305] = 3,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_mutable_specifier,
    STATE(73), 2,
      sym__pattern,
      sym_mut_pattern,
  [1316] = 3,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_parameters_repeat1,
  [1326] = 1,
    ACTIONS(193), 3,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COLON,
  [1332] = 3,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_parameter,
  [1342] = 3,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_expression_list_repeat1,
  [1352] = 3,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_DASH_GT,
    STATE(30), 1,
      sym_block,
  [1362] = 3,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_parameters_repeat1,
  [1372] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_parameters_repeat1,
  [1382] = 3,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [1392] = 3,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [1402] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_expression_list_repeat1,
  [1412] = 1,
    ACTIONS(225), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1417] = 1,
    ACTIONS(227), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1422] = 2,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [1429] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_macro_arguments,
  [1436] = 1,
    ACTIONS(231), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1441] = 2,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      anon_sym_EQ,
  [1448] = 2,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(86), 1,
      sym_parameter,
  [1455] = 1,
    ACTIONS(235), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1460] = 2,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_EQ,
  [1467] = 1,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1472] = 1,
    ACTIONS(204), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1477] = 1,
    ACTIONS(241), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1482] = 2,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_parameters,
  [1489] = 1,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
  [1493] = 1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1497] = 1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [1501] = 1,
    ACTIONS(251), 1,
      anon_sym_COLON,
  [1505] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [1509] = 1,
    ACTIONS(255), 1,
      sym_identifier,
  [1513] = 1,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
  [1517] = 1,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [1521] = 1,
    ACTIONS(259), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 160,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 348,
  [SMALL_STATE(10)] = 381,
  [SMALL_STATE(11)] = 411,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 465,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 519,
  [SMALL_STATE(16)] = 546,
  [SMALL_STATE(17)] = 573,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 621,
  [SMALL_STATE(20)] = 648,
  [SMALL_STATE(21)] = 675,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 712,
  [SMALL_STATE(24)] = 729,
  [SMALL_STATE(25)] = 746,
  [SMALL_STATE(26)] = 763,
  [SMALL_STATE(27)] = 779,
  [SMALL_STATE(28)] = 795,
  [SMALL_STATE(29)] = 811,
  [SMALL_STATE(30)] = 827,
  [SMALL_STATE(31)] = 843,
  [SMALL_STATE(32)] = 859,
  [SMALL_STATE(33)] = 875,
  [SMALL_STATE(34)] = 891,
  [SMALL_STATE(35)] = 909,
  [SMALL_STATE(36)] = 925,
  [SMALL_STATE(37)] = 941,
  [SMALL_STATE(38)] = 957,
  [SMALL_STATE(39)] = 973,
  [SMALL_STATE(40)] = 989,
  [SMALL_STATE(41)] = 1001,
  [SMALL_STATE(42)] = 1013,
  [SMALL_STATE(43)] = 1025,
  [SMALL_STATE(44)] = 1037,
  [SMALL_STATE(45)] = 1049,
  [SMALL_STATE(46)] = 1065,
  [SMALL_STATE(47)] = 1077,
  [SMALL_STATE(48)] = 1089,
  [SMALL_STATE(49)] = 1101,
  [SMALL_STATE(50)] = 1113,
  [SMALL_STATE(51)] = 1125,
  [SMALL_STATE(52)] = 1137,
  [SMALL_STATE(53)] = 1156,
  [SMALL_STATE(54)] = 1170,
  [SMALL_STATE(55)] = 1186,
  [SMALL_STATE(56)] = 1199,
  [SMALL_STATE(57)] = 1212,
  [SMALL_STATE(58)] = 1225,
  [SMALL_STATE(59)] = 1238,
  [SMALL_STATE(60)] = 1251,
  [SMALL_STATE(61)] = 1262,
  [SMALL_STATE(62)] = 1275,
  [SMALL_STATE(63)] = 1283,
  [SMALL_STATE(64)] = 1294,
  [SMALL_STATE(65)] = 1305,
  [SMALL_STATE(66)] = 1316,
  [SMALL_STATE(67)] = 1326,
  [SMALL_STATE(68)] = 1332,
  [SMALL_STATE(69)] = 1342,
  [SMALL_STATE(70)] = 1352,
  [SMALL_STATE(71)] = 1362,
  [SMALL_STATE(72)] = 1372,
  [SMALL_STATE(73)] = 1382,
  [SMALL_STATE(74)] = 1392,
  [SMALL_STATE(75)] = 1402,
  [SMALL_STATE(76)] = 1412,
  [SMALL_STATE(77)] = 1417,
  [SMALL_STATE(78)] = 1422,
  [SMALL_STATE(79)] = 1429,
  [SMALL_STATE(80)] = 1436,
  [SMALL_STATE(81)] = 1441,
  [SMALL_STATE(82)] = 1448,
  [SMALL_STATE(83)] = 1455,
  [SMALL_STATE(84)] = 1460,
  [SMALL_STATE(85)] = 1467,
  [SMALL_STATE(86)] = 1472,
  [SMALL_STATE(87)] = 1477,
  [SMALL_STATE(88)] = 1482,
  [SMALL_STATE(89)] = 1489,
  [SMALL_STATE(90)] = 1493,
  [SMALL_STATE(91)] = 1497,
  [SMALL_STATE(92)] = 1501,
  [SMALL_STATE(93)] = 1505,
  [SMALL_STATE(94)] = 1509,
  [SMALL_STATE(95)] = 1513,
  [SMALL_STATE(96)] = 1517,
  [SMALL_STATE(97)] = 1521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dereference_expression, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_argument_elements, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(16),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rustfyp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
