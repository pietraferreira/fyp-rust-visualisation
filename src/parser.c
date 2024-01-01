#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  sym_identifier = 3,
  sym__integer_literal = 4,
  aux_sym_literal_token1 = 5,
  sym_shebang = 6,
  sym_mutable_specifier = 7,
  anon_sym_let = 8,
  anon_sym_COLON = 9,
  anon_sym_EQ = 10,
  anon_sym_fn = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_DOT = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_u8 = 16,
  anon_sym_i8 = 17,
  anon_sym_u16 = 18,
  anon_sym_i16 = 19,
  anon_sym_u32 = 20,
  anon_sym_i32 = 21,
  anon_sym_u64 = 22,
  anon_sym_i64 = 23,
  anon_sym_isize = 24,
  anon_sym_usize = 25,
  anon_sym_COMMA = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_BANG = 29,
  anon_sym_AMP = 30,
  sym_source_file = 31,
  sym__statement_list = 32,
  sym__statement = 33,
  sym__expression = 34,
  sym_expression_statement = 35,
  sym__pattern = 36,
  sym_literal = 37,
  sym_let_declaration = 38,
  sym_function_declaration = 39,
  sym_method_call = 40,
  sym_mut_pattern = 41,
  sym_type_expression = 42,
  sym_parameters = 43,
  sym_parameter = 44,
  sym_block = 45,
  sym_empty_statement = 46,
  sym_macro_invocation = 47,
  sym_macro_arguments = 48,
  sym__macro_argument_elements = 49,
  sym_expression_list = 50,
  sym_reference_expression = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_parameters_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_expression_list_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym__integer_literal] = "_integer_literal",
  [aux_sym_literal_token1] = "literal_token1",
  [sym_shebang] = "shebang",
  [sym_mutable_specifier] = "mutable_specifier",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP] = "&",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_expression_statement] = "expression_statement",
  [sym__pattern] = "_pattern",
  [sym_literal] = "literal",
  [sym_let_declaration] = "let_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_method_call] = "method_call",
  [sym_mut_pattern] = "mut_pattern",
  [sym_type_expression] = "type_expression",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [sym_macro_invocation] = "macro_invocation",
  [sym_macro_arguments] = "macro_arguments",
  [sym__macro_argument_elements] = "_macro_argument_elements",
  [sym_expression_list] = "expression_list",
  [sym_reference_expression] = "reference_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym__integer_literal] = sym__integer_literal,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [sym_shebang] = sym_shebang,
  [sym_mutable_specifier] = sym_mutable_specifier,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_source_file] = sym_source_file,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_expression_statement] = sym_expression_statement,
  [sym__pattern] = sym__pattern,
  [sym_literal] = sym_literal,
  [sym_let_declaration] = sym_let_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_method_call] = sym_method_call,
  [sym_mut_pattern] = sym_mut_pattern,
  [sym_type_expression] = sym_type_expression,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_empty_statement] = sym_empty_statement,
  [sym_macro_invocation] = sym_macro_invocation,
  [sym_macro_arguments] = sym_macro_arguments,
  [sym__macro_argument_elements] = sym__macro_argument_elements,
  [sym_expression_list] = sym_expression_list,
  [sym_reference_expression] = sym_reference_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_EQ] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
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
  [sym_expression_statement] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
  [9] = 6,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 12,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 24,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 46,
  [47] = 29,
  [48] = 33,
  [49] = 34,
  [50] = 42,
  [51] = 39,
  [52] = 37,
  [53] = 43,
  [54] = 44,
  [55] = 35,
  [56] = 30,
  [57] = 38,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 61,
  [64] = 62,
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
  [79] = 78,
  [80] = 69,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 65,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 92,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 90,
  [104] = 104,
  [105] = 105,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 109,
  [113] = 113,
  [114] = 114,
  [115] = 111,
  [116] = 116,
  [117] = 108,
  [118] = 114,
  [119] = 119,
  [120] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '{') ADVANCE(71);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(43);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'z') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(50);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(27);
      if (lookahead == '8') ADVANCE(61);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(60);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
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
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(110),
    [sym__statement_list] = STATE(4),
    [sym__statement] = STATE(32),
    [sym__expression] = STATE(118),
    [sym_expression_statement] = STATE(32),
    [sym_literal] = STATE(118),
    [sym_let_declaration] = STATE(32),
    [sym_function_declaration] = STATE(32),
    [sym_method_call] = STATE(118),
    [sym_empty_statement] = STATE(32),
    [sym_macro_invocation] = STATE(118),
    [sym_reference_expression] = STATE(118),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym__integer_literal] = ACTIONS(9),
    [aux_sym_literal_token1] = ACTIONS(9),
    [sym_shebang] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(5), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(32), 5,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
    STATE(118), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [41] = 10,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(2), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(32), 5,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
    STATE(118), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [82] = 10,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_fn,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(5), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(32), 5,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
    STATE(118), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [123] = 10,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_let,
    ACTIONS(37), 1,
      anon_sym_fn,
    ACTIONS(40), 1,
      anon_sym_AMP,
    ACTIONS(31), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(5), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(32), 5,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
    STATE(118), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [164] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(114), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
    STATE(8), 6,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [202] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(114), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
    STATE(6), 6,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [240] = 9,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_let,
    ACTIONS(65), 1,
      anon_sym_fn,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_AMP,
    ACTIONS(59), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(114), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
    STATE(8), 6,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [278] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(114), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
    STATE(8), 6,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [316] = 9,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(114), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
    STATE(9), 6,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [354] = 5,
    STATE(46), 1,
      sym__statement_list,
    ACTIONS(79), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
    STATE(32), 5,
      sym__statement,
      sym_expression_statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
    STATE(118), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [384] = 2,
    STATE(89), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [401] = 2,
    STATE(101), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [418] = 2,
    STATE(95), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [435] = 2,
    STATE(102), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [452] = 2,
    STATE(91), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [469] = 2,
    STATE(103), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [486] = 2,
    STATE(90), 1,
      sym_type_expression,
    ACTIONS(81), 11,
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
  [503] = 6,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_expression_list,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(86), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [527] = 5,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(113), 6,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym__macro_argument_elements,
      sym_reference_expression,
  [549] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      sym_mutable_specifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(74), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [570] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(117), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [588] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(106), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [606] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(109), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [624] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(108), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [642] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(104), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [660] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(111), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [678] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(67), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [696] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(93), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [710] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(97), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [724] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(101), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [738] = 3,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [754] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [768] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [782] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(119), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [796] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(115), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [814] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(123), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [828] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(127), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [842] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [856] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(112), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [874] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(99), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [892] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(135), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [906] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(139), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [920] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(143), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [934] = 2,
    ACTIONS(101), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(99), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [947] = 2,
    ACTIONS(147), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_AMP,
  [960] = 2,
    ACTIONS(93), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(91), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [973] = 2,
    ACTIONS(111), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(109), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [986] = 2,
    ACTIONS(115), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(113), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [999] = 2,
    ACTIONS(135), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(133), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1012] = 2,
    ACTIONS(131), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(129), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1025] = 2,
    ACTIONS(123), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(121), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1038] = 2,
    ACTIONS(139), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(137), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1051] = 2,
    ACTIONS(143), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(141), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1064] = 2,
    ACTIONS(119), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1077] = 2,
    ACTIONS(97), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(95), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1090] = 2,
    ACTIONS(127), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(125), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1103] = 3,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      anon_sym_BANG,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1115] = 1,
    ACTIONS(155), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1123] = 3,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      sym_mutable_specifier,
    STATE(75), 2,
      sym__pattern,
      sym_mut_pattern,
  [1134] = 3,
    ACTIONS(159), 1,
      sym_mutable_specifier,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(79), 2,
      sym__pattern,
      sym_mut_pattern,
  [1145] = 3,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_mutable_specifier,
    STATE(69), 2,
      sym__pattern,
      sym_mut_pattern,
  [1156] = 3,
    ACTIONS(159), 1,
      sym_mutable_specifier,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(78), 2,
      sym__pattern,
      sym_mut_pattern,
  [1167] = 3,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_mutable_specifier,
    STATE(80), 2,
      sym__pattern,
      sym_mut_pattern,
  [1178] = 3,
    ACTIONS(173), 1,
      anon_sym_DASH_GT,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [1188] = 1,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1194] = 1,
    ACTIONS(179), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1200] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_parameters_repeat1,
  [1210] = 3,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [1220] = 1,
    ACTIONS(191), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1226] = 3,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_expression_list_repeat1,
  [1236] = 1,
    ACTIONS(197), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1242] = 1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1248] = 1,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1254] = 1,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [1260] = 3,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_parameter,
  [1270] = 3,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_parameters_repeat1,
  [1280] = 3,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(218), 1,
      anon_sym_EQ,
  [1290] = 3,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(224), 1,
      anon_sym_EQ,
  [1300] = 3,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(230), 1,
      anon_sym_EQ,
  [1310] = 3,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_expression_list_repeat1,
  [1320] = 2,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1328] = 1,
    ACTIONS(241), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1334] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_parameters_repeat1,
  [1344] = 3,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [1354] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_expression_list_repeat1,
  [1364] = 1,
    ACTIONS(251), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1370] = 2,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_macro_arguments,
  [1377] = 2,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_EQ,
  [1384] = 2,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [1391] = 2,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      anon_sym_EQ,
  [1398] = 2,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_parameters,
  [1405] = 1,
    ACTIONS(265), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1410] = 2,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(96), 1,
      sym_parameter,
  [1417] = 1,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1422] = 1,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1427] = 2,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_parameters,
  [1434] = 1,
    ACTIONS(269), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1439] = 1,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1444] = 1,
    ACTIONS(271), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1449] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_EQ,
  [1456] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      anon_sym_EQ,
  [1463] = 2,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
  [1470] = 1,
    ACTIONS(255), 1,
      anon_sym_SEMI,
  [1474] = 1,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
  [1478] = 1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [1482] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1486] = 1,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [1490] = 1,
    ACTIONS(287), 1,
      anon_sym_SEMI,
  [1494] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [1498] = 1,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [1502] = 1,
    ACTIONS(291), 1,
      anon_sym_SEMI,
  [1506] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1510] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1514] = 1,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [1518] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [1522] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1526] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [1530] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1534] = 1,
    ACTIONS(305), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 278,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 384,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 452,
  [SMALL_STATE(17)] = 469,
  [SMALL_STATE(18)] = 486,
  [SMALL_STATE(19)] = 503,
  [SMALL_STATE(20)] = 527,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 570,
  [SMALL_STATE(23)] = 588,
  [SMALL_STATE(24)] = 606,
  [SMALL_STATE(25)] = 624,
  [SMALL_STATE(26)] = 642,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 678,
  [SMALL_STATE(29)] = 696,
  [SMALL_STATE(30)] = 710,
  [SMALL_STATE(31)] = 724,
  [SMALL_STATE(32)] = 738,
  [SMALL_STATE(33)] = 754,
  [SMALL_STATE(34)] = 768,
  [SMALL_STATE(35)] = 782,
  [SMALL_STATE(36)] = 796,
  [SMALL_STATE(37)] = 814,
  [SMALL_STATE(38)] = 828,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 856,
  [SMALL_STATE(41)] = 874,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 906,
  [SMALL_STATE(44)] = 920,
  [SMALL_STATE(45)] = 934,
  [SMALL_STATE(46)] = 947,
  [SMALL_STATE(47)] = 960,
  [SMALL_STATE(48)] = 973,
  [SMALL_STATE(49)] = 986,
  [SMALL_STATE(50)] = 999,
  [SMALL_STATE(51)] = 1012,
  [SMALL_STATE(52)] = 1025,
  [SMALL_STATE(53)] = 1038,
  [SMALL_STATE(54)] = 1051,
  [SMALL_STATE(55)] = 1064,
  [SMALL_STATE(56)] = 1077,
  [SMALL_STATE(57)] = 1090,
  [SMALL_STATE(58)] = 1103,
  [SMALL_STATE(59)] = 1115,
  [SMALL_STATE(60)] = 1123,
  [SMALL_STATE(61)] = 1134,
  [SMALL_STATE(62)] = 1145,
  [SMALL_STATE(63)] = 1156,
  [SMALL_STATE(64)] = 1167,
  [SMALL_STATE(65)] = 1178,
  [SMALL_STATE(66)] = 1188,
  [SMALL_STATE(67)] = 1194,
  [SMALL_STATE(68)] = 1200,
  [SMALL_STATE(69)] = 1210,
  [SMALL_STATE(70)] = 1220,
  [SMALL_STATE(71)] = 1226,
  [SMALL_STATE(72)] = 1236,
  [SMALL_STATE(73)] = 1242,
  [SMALL_STATE(74)] = 1248,
  [SMALL_STATE(75)] = 1254,
  [SMALL_STATE(76)] = 1260,
  [SMALL_STATE(77)] = 1270,
  [SMALL_STATE(78)] = 1280,
  [SMALL_STATE(79)] = 1290,
  [SMALL_STATE(80)] = 1300,
  [SMALL_STATE(81)] = 1310,
  [SMALL_STATE(82)] = 1320,
  [SMALL_STATE(83)] = 1328,
  [SMALL_STATE(84)] = 1334,
  [SMALL_STATE(85)] = 1344,
  [SMALL_STATE(86)] = 1354,
  [SMALL_STATE(87)] = 1364,
  [SMALL_STATE(88)] = 1370,
  [SMALL_STATE(89)] = 1377,
  [SMALL_STATE(90)] = 1384,
  [SMALL_STATE(91)] = 1391,
  [SMALL_STATE(92)] = 1398,
  [SMALL_STATE(93)] = 1405,
  [SMALL_STATE(94)] = 1410,
  [SMALL_STATE(95)] = 1417,
  [SMALL_STATE(96)] = 1422,
  [SMALL_STATE(97)] = 1427,
  [SMALL_STATE(98)] = 1434,
  [SMALL_STATE(99)] = 1439,
  [SMALL_STATE(100)] = 1444,
  [SMALL_STATE(101)] = 1449,
  [SMALL_STATE(102)] = 1456,
  [SMALL_STATE(103)] = 1463,
  [SMALL_STATE(104)] = 1470,
  [SMALL_STATE(105)] = 1474,
  [SMALL_STATE(106)] = 1478,
  [SMALL_STATE(107)] = 1482,
  [SMALL_STATE(108)] = 1486,
  [SMALL_STATE(109)] = 1490,
  [SMALL_STATE(110)] = 1494,
  [SMALL_STATE(111)] = 1498,
  [SMALL_STATE(112)] = 1502,
  [SMALL_STATE(113)] = 1506,
  [SMALL_STATE(114)] = 1510,
  [SMALL_STATE(115)] = 1514,
  [SMALL_STATE(116)] = 1518,
  [SMALL_STATE(117)] = 1522,
  [SMALL_STATE(118)] = 1526,
  [SMALL_STATE(119)] = 1530,
  [SMALL_STATE(120)] = 1534,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(120),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(94),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(41),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
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
