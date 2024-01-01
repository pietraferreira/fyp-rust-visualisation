#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
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
  anon_sym_u8 = 13,
  anon_sym_i8 = 14,
  anon_sym_u16 = 15,
  anon_sym_i16 = 16,
  anon_sym_u32 = 17,
  anon_sym_i32 = 18,
  anon_sym_u64 = 19,
  anon_sym_i64 = 20,
  anon_sym_isize = 21,
  anon_sym_usize = 22,
  anon_sym_LPAREN = 23,
  anon_sym_COMMA = 24,
  anon_sym_RPAREN = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_DOT = 28,
  anon_sym_BANG = 29,
  anon_sym_AMP = 30,
  sym_source_file = 31,
  sym__statement_list = 32,
  sym__statement = 33,
  sym__expression = 34,
  sym__pattern = 35,
  sym_literal = 36,
  sym_let_declaration = 37,
  sym_function_declaration = 38,
  sym_mut_pattern = 39,
  sym_type_expression = 40,
  sym_parameters = 41,
  sym_parameter = 42,
  sym_block = 43,
  sym_empty_statement = 44,
  sym_method_call = 45,
  sym_macro_invocation = 46,
  sym_macro_arguments = 47,
  sym_expression_list = 48,
  sym_reference_expression = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_parameters_repeat1 = 51,
  aux_sym_block_repeat1 = 52,
  aux_sym_expression_list_repeat1 = 53,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP] = "&",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym__pattern] = "_pattern",
  [sym_literal] = "literal",
  [sym_let_declaration] = "let_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_mut_pattern] = "mut_pattern",
  [sym_type_expression] = "type_expression",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [sym_method_call] = "method_call",
  [sym_macro_invocation] = "macro_invocation",
  [sym_macro_arguments] = "macro_arguments",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_source_file] = sym_source_file,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym__pattern] = sym__pattern,
  [sym_literal] = sym_literal,
  [sym_let_declaration] = sym_let_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_mut_pattern] = sym_mut_pattern,
  [sym_type_expression] = sym_type_expression,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_empty_statement] = sym_empty_statement,
  [sym_method_call] = sym_method_call,
  [sym_macro_invocation] = sym_macro_invocation,
  [sym_macro_arguments] = sym_macro_arguments,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_method_call] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
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
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 19,
  [29] = 21,
  [30] = 17,
  [31] = 27,
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
  [47] = 41,
  [48] = 38,
  [49] = 40,
  [50] = 42,
  [51] = 36,
  [52] = 45,
  [53] = 43,
  [54] = 44,
  [55] = 39,
  [56] = 56,
  [57] = 33,
  [58] = 58,
  [59] = 34,
  [60] = 58,
  [61] = 56,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 69,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 67,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 91,
  [99] = 88,
  [100] = 100,
  [101] = 96,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 103,
  [107] = 107,
  [108] = 107,
  [109] = 105,
  [110] = 110,
  [111] = 104,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(99);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(75);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(73);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(58);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'z') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'z') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(65);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(45);
      if (lookahead == '8') ADVANCE(76);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '3') ADVANCE(44);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(74);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
  [94] = {.lex_state = 0},
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
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(115),
    [sym__statement_list] = STATE(12),
    [sym__statement] = STATE(37),
    [sym_let_declaration] = STATE(37),
    [sym_function_declaration] = STATE(37),
    [sym_empty_statement] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_fn] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(99), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [17] = 2,
    STATE(100), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [34] = 2,
    STATE(88), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [51] = 2,
    STATE(96), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [68] = 2,
    STATE(101), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [85] = 2,
    STATE(91), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [102] = 2,
    STATE(98), 1,
      sym_type_expression,
    ACTIONS(13), 11,
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
  [119] = 6,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_AMP,
    STATE(102), 1,
      sym_expression_list,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(72), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [143] = 6,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_expression_list,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(72), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [167] = 5,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      sym_mutable_specifier,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(84), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [188] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(37), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
  [211] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(37), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
  [234] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      anon_sym_fn,
    STATE(14), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(37), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
  [257] = 6,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(37), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
  [280] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(92), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [298] = 5,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      anon_sym_fn,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(18), 5,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [318] = 5,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_let,
    ACTIONS(58), 1,
      anon_sym_fn,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(18), 5,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [338] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(107), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [356] = 3,
    STATE(46), 1,
      sym__statement_list,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
    STATE(37), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
  [372] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(105), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [390] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(65), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [408] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(106), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [426] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(103), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [444] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(104), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [462] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(111), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [480] = 5,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      anon_sym_fn,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(17), 5,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [500] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(108), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [518] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_AMP,
    ACTIONS(17), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(109), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [536] = 5,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(18), 5,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [556] = 5,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      anon_sym_fn,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(30), 5,
      sym__statement,
      sym_let_declaration,
      sym_function_declaration,
      sym_empty_statement,
      aux_sym_block_repeat1,
  [576] = 1,
    ACTIONS(71), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [584] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(75), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [594] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(79), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [604] = 3,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_BANG,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [616] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [626] = 3,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [638] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [648] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [658] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(107), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [668] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [678] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [688] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(119), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [698] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [708] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [718] = 1,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
  [725] = 1,
    ACTIONS(109), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [732] = 1,
    ACTIONS(97), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [739] = 1,
    ACTIONS(105), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [746] = 1,
    ACTIONS(113), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [753] = 1,
    ACTIONS(87), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [760] = 1,
    ACTIONS(125), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [767] = 1,
    ACTIONS(117), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [774] = 1,
    ACTIONS(121), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [781] = 1,
    ACTIONS(101), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [788] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym_mutable_specifier,
    STATE(73), 2,
      sym__pattern,
      sym_mut_pattern,
  [799] = 1,
    ACTIONS(73), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [806] = 3,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_mutable_specifier,
    STATE(68), 2,
      sym__pattern,
      sym_mut_pattern,
  [817] = 1,
    ACTIONS(77), 4,
      anon_sym_SEMI,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_RBRACE,
  [824] = 3,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_mutable_specifier,
    STATE(70), 2,
      sym__pattern,
      sym_mut_pattern,
  [835] = 3,
    ACTIONS(133), 1,
      sym_mutable_specifier,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(69), 2,
      sym__pattern,
      sym_mut_pattern,
  [846] = 3,
    ACTIONS(133), 1,
      sym_mutable_specifier,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(82), 2,
      sym__pattern,
      sym_mut_pattern,
  [857] = 1,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [863] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_expression_list_repeat1,
  [873] = 1,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [879] = 2,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [887] = 3,
    ACTIONS(160), 1,
      anon_sym_DASH_GT,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [897] = 3,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      anon_sym_COLON,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [907] = 3,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      anon_sym_EQ,
  [917] = 3,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(180), 1,
      anon_sym_EQ,
  [927] = 1,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [933] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_expression_list_repeat1,
  [943] = 3,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      anon_sym_EQ,
  [953] = 1,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [959] = 1,
    ACTIONS(196), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [965] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_parameters_repeat1,
  [975] = 3,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_parameter,
  [985] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_expression_list_repeat1,
  [995] = 1,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1001] = 1,
    ACTIONS(211), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1007] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_parameters_repeat1,
  [1017] = 1,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [1023] = 3,
    ACTIONS(219), 1,
      anon_sym_DASH_GT,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [1033] = 1,
    ACTIONS(223), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1039] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_parameters_repeat1,
  [1049] = 1,
    ACTIONS(227), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1054] = 2,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(95), 1,
      sym_parameter,
  [1061] = 2,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [1068] = 2,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_macro_arguments,
  [1075] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_parameters,
  [1082] = 2,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      anon_sym_EQ,
  [1089] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1094] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_parameters,
  [1101] = 1,
    ACTIONS(237), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1106] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1111] = 2,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      anon_sym_EQ,
  [1118] = 1,
    ACTIONS(243), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1123] = 2,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_EQ,
  [1130] = 2,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
  [1137] = 1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1142] = 2,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      anon_sym_EQ,
  [1149] = 1,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
  [1153] = 1,
    ACTIONS(239), 1,
      anon_sym_SEMI,
  [1157] = 1,
    ACTIONS(257), 1,
      anon_sym_SEMI,
  [1161] = 1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [1165] = 1,
    ACTIONS(251), 1,
      anon_sym_SEMI,
  [1169] = 1,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [1173] = 1,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [1177] = 1,
    ACTIONS(261), 1,
      anon_sym_SEMI,
  [1181] = 1,
    ACTIONS(263), 1,
      sym_identifier,
  [1185] = 1,
    ACTIONS(265), 1,
      anon_sym_SEMI,
  [1189] = 1,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
  [1193] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1197] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [1201] = 1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
  [1205] = 1,
    ACTIONS(275), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 372,
  [SMALL_STATE(22)] = 390,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 480,
  [SMALL_STATE(28)] = 500,
  [SMALL_STATE(29)] = 518,
  [SMALL_STATE(30)] = 536,
  [SMALL_STATE(31)] = 556,
  [SMALL_STATE(32)] = 576,
  [SMALL_STATE(33)] = 584,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 604,
  [SMALL_STATE(36)] = 616,
  [SMALL_STATE(37)] = 626,
  [SMALL_STATE(38)] = 638,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 668,
  [SMALL_STATE(42)] = 678,
  [SMALL_STATE(43)] = 688,
  [SMALL_STATE(44)] = 698,
  [SMALL_STATE(45)] = 708,
  [SMALL_STATE(46)] = 718,
  [SMALL_STATE(47)] = 725,
  [SMALL_STATE(48)] = 732,
  [SMALL_STATE(49)] = 739,
  [SMALL_STATE(50)] = 746,
  [SMALL_STATE(51)] = 753,
  [SMALL_STATE(52)] = 760,
  [SMALL_STATE(53)] = 767,
  [SMALL_STATE(54)] = 774,
  [SMALL_STATE(55)] = 781,
  [SMALL_STATE(56)] = 788,
  [SMALL_STATE(57)] = 799,
  [SMALL_STATE(58)] = 806,
  [SMALL_STATE(59)] = 817,
  [SMALL_STATE(60)] = 824,
  [SMALL_STATE(61)] = 835,
  [SMALL_STATE(62)] = 846,
  [SMALL_STATE(63)] = 857,
  [SMALL_STATE(64)] = 863,
  [SMALL_STATE(65)] = 873,
  [SMALL_STATE(66)] = 879,
  [SMALL_STATE(67)] = 887,
  [SMALL_STATE(68)] = 897,
  [SMALL_STATE(69)] = 907,
  [SMALL_STATE(70)] = 917,
  [SMALL_STATE(71)] = 927,
  [SMALL_STATE(72)] = 933,
  [SMALL_STATE(73)] = 943,
  [SMALL_STATE(74)] = 953,
  [SMALL_STATE(75)] = 959,
  [SMALL_STATE(76)] = 965,
  [SMALL_STATE(77)] = 975,
  [SMALL_STATE(78)] = 985,
  [SMALL_STATE(79)] = 995,
  [SMALL_STATE(80)] = 1001,
  [SMALL_STATE(81)] = 1007,
  [SMALL_STATE(82)] = 1017,
  [SMALL_STATE(83)] = 1023,
  [SMALL_STATE(84)] = 1033,
  [SMALL_STATE(85)] = 1039,
  [SMALL_STATE(86)] = 1049,
  [SMALL_STATE(87)] = 1054,
  [SMALL_STATE(88)] = 1061,
  [SMALL_STATE(89)] = 1068,
  [SMALL_STATE(90)] = 1075,
  [SMALL_STATE(91)] = 1082,
  [SMALL_STATE(92)] = 1089,
  [SMALL_STATE(93)] = 1094,
  [SMALL_STATE(94)] = 1101,
  [SMALL_STATE(95)] = 1106,
  [SMALL_STATE(96)] = 1111,
  [SMALL_STATE(97)] = 1118,
  [SMALL_STATE(98)] = 1123,
  [SMALL_STATE(99)] = 1130,
  [SMALL_STATE(100)] = 1137,
  [SMALL_STATE(101)] = 1142,
  [SMALL_STATE(102)] = 1149,
  [SMALL_STATE(103)] = 1153,
  [SMALL_STATE(104)] = 1157,
  [SMALL_STATE(105)] = 1161,
  [SMALL_STATE(106)] = 1165,
  [SMALL_STATE(107)] = 1169,
  [SMALL_STATE(108)] = 1173,
  [SMALL_STATE(109)] = 1177,
  [SMALL_STATE(110)] = 1181,
  [SMALL_STATE(111)] = 1185,
  [SMALL_STATE(112)] = 1189,
  [SMALL_STATE(113)] = 1193,
  [SMALL_STATE(114)] = 1197,
  [SMALL_STATE(115)] = 1201,
  [SMALL_STATE(116)] = 1205,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(87),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
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
