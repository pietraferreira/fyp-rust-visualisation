#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
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
  sym_expression_list = 49,
  sym_reference_expression = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_parameters_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  aux_sym_expression_list_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
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
  [sym__declaration_statement] = "_declaration_statement",
  [sym__item] = "_item",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__declaration_statement] = sym__declaration_statement,
  [sym__item] = sym__item,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__item] = {
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
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 13,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 31,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 29,
  [46] = 42,
  [47] = 36,
  [48] = 43,
  [49] = 44,
  [50] = 34,
  [51] = 24,
  [52] = 23,
  [53] = 32,
  [54] = 37,
  [55] = 39,
  [56] = 56,
  [57] = 40,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 61,
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
  [76] = 74,
  [77] = 71,
  [78] = 78,
  [79] = 72,
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
  [96] = 90,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 88,
  [102] = 93,
  [103] = 89,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 108,
  [114] = 104,
  [115] = 109,
  [116] = 116,
  [117] = 117,
  [118] = 112,
  [119] = 110,
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
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
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
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
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
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
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
    [sym_source_file] = STATE(106),
    [sym__statement_list] = STATE(4),
    [sym__statement] = STATE(38),
    [sym__expression] = STATE(118),
    [sym_expression_statement] = STATE(38),
    [sym_literal] = STATE(118),
    [sym_let_declaration] = STATE(38),
    [sym_function_declaration] = STATE(38),
    [sym_method_call] = STATE(118),
    [sym_empty_statement] = STATE(38),
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
    STATE(38), 5,
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
    STATE(38), 5,
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
    STATE(38), 5,
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
    STATE(38), 5,
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
    STATE(112), 5,
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
    STATE(112), 5,
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
    STATE(112), 5,
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
    STATE(112), 5,
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
    STATE(112), 5,
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
    STATE(56), 1,
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
    STATE(38), 5,
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
    STATE(97), 1,
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
    STATE(93), 1,
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
    STATE(88), 1,
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
  [503] = 6,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_expression_list,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(81), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [527] = 6,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_expression_list,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(81), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [551] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(89), 1,
      sym_mutable_specifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(67), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [572] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(113), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [590] = 2,
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
  [604] = 2,
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
  [618] = 4,
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
  [636] = 4,
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
  [654] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(75), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [672] = 4,
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
  [690] = 2,
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
  [704] = 4,
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
  [722] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(110), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [740] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [754] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(114), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [772] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(109), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [786] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(119), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [804] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(113), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [818] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [832] = 3,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 7,
      anon_sym_SEMI,
      sym_identifier,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_AMP,
  [848] = 2,
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
  [862] = 2,
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
  [876] = 4,
    ACTIONS(17), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(9), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(92), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [894] = 2,
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
  [908] = 2,
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
  [922] = 2,
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
  [936] = 2,
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
  [949] = 2,
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
  [962] = 2,
    ACTIONS(113), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(111), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [975] = 2,
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
  [988] = 2,
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
  [1001] = 2,
    ACTIONS(109), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(107), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1014] = 2,
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
  [1027] = 2,
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
  [1040] = 2,
    ACTIONS(105), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(103), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1053] = 2,
    ACTIONS(117), 3,
      sym_identifier,
      anon_sym_let,
      anon_sym_fn,
    ACTIONS(115), 5,
      anon_sym_SEMI,
      sym__integer_literal,
      aux_sym_literal_token1,
      anon_sym_RBRACE,
      anon_sym_AMP,
  [1066] = 2,
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
  [1079] = 2,
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
  [1092] = 2,
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
  [1105] = 1,
    ACTIONS(149), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1113] = 3,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(151), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1125] = 3,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      sym_mutable_specifier,
    STATE(71), 2,
      sym__pattern,
      sym_mut_pattern,
  [1136] = 3,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      sym_mutable_specifier,
    STATE(79), 2,
      sym__pattern,
      sym_mut_pattern,
  [1147] = 3,
    ACTIONS(159), 1,
      sym_mutable_specifier,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(77), 2,
      sym__pattern,
      sym_mut_pattern,
  [1158] = 3,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      sym_mutable_specifier,
    STATE(72), 2,
      sym__pattern,
      sym_mut_pattern,
  [1169] = 3,
    ACTIONS(159), 1,
      sym_mutable_specifier,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(82), 2,
      sym__pattern,
      sym_mut_pattern,
  [1180] = 3,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_expression_list_repeat1,
  [1190] = 3,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_parameters_repeat1,
  [1200] = 1,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1206] = 1,
    ACTIONS(184), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1212] = 1,
    ACTIONS(186), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1218] = 1,
    ACTIONS(188), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1224] = 3,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_EQ,
  [1234] = 3,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      anon_sym_COLON,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [1244] = 3,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_parameter,
  [1254] = 3,
    ACTIONS(206), 1,
      anon_sym_DASH_GT,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [1264] = 1,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1270] = 3,
    ACTIONS(212), 1,
      anon_sym_DASH_GT,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [1280] = 3,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_EQ,
  [1290] = 3,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_parameters_repeat1,
  [1300] = 3,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_EQ,
  [1310] = 1,
    ACTIONS(233), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1316] = 3,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_expression_list_repeat1,
  [1326] = 1,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [1332] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_parameters_repeat1,
  [1342] = 1,
    ACTIONS(243), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1348] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_expression_list_repeat1,
  [1358] = 2,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1366] = 1,
    ACTIONS(251), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1372] = 2,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      anon_sym_EQ,
  [1379] = 2,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      anon_sym_EQ,
  [1386] = 2,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_parameters,
  [1393] = 1,
    ACTIONS(263), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1398] = 1,
    ACTIONS(173), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1403] = 2,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [1410] = 2,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_macro_arguments,
  [1417] = 2,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(98), 1,
      sym_parameter,
  [1424] = 2,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_parameters,
  [1431] = 1,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1436] = 1,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1441] = 1,
    ACTIONS(269), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1446] = 1,
    ACTIONS(271), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1451] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_EQ,
  [1458] = 2,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [1465] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(279), 1,
      anon_sym_EQ,
  [1472] = 1,
    ACTIONS(257), 1,
      anon_sym_SEMI,
  [1476] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1480] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1484] = 1,
    ACTIONS(285), 1,
      sym_identifier,
  [1488] = 1,
    ACTIONS(287), 1,
      anon_sym_SEMI,
  [1492] = 1,
    ACTIONS(289), 1,
      anon_sym_SEMI,
  [1496] = 1,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [1500] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [1504] = 1,
    ACTIONS(293), 1,
      anon_sym_SEMI,
  [1508] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1512] = 1,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [1516] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1520] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1524] = 1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
  [1528] = 1,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [1532] = 1,
    ACTIONS(253), 1,
      anon_sym_SEMI,
  [1536] = 1,
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
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 590,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 618,
  [SMALL_STATE(26)] = 636,
  [SMALL_STATE(27)] = 654,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 690,
  [SMALL_STATE(30)] = 704,
  [SMALL_STATE(31)] = 722,
  [SMALL_STATE(32)] = 740,
  [SMALL_STATE(33)] = 754,
  [SMALL_STATE(34)] = 772,
  [SMALL_STATE(35)] = 786,
  [SMALL_STATE(36)] = 804,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 832,
  [SMALL_STATE(39)] = 848,
  [SMALL_STATE(40)] = 862,
  [SMALL_STATE(41)] = 876,
  [SMALL_STATE(42)] = 894,
  [SMALL_STATE(43)] = 908,
  [SMALL_STATE(44)] = 922,
  [SMALL_STATE(45)] = 936,
  [SMALL_STATE(46)] = 949,
  [SMALL_STATE(47)] = 962,
  [SMALL_STATE(48)] = 975,
  [SMALL_STATE(49)] = 988,
  [SMALL_STATE(50)] = 1001,
  [SMALL_STATE(51)] = 1014,
  [SMALL_STATE(52)] = 1027,
  [SMALL_STATE(53)] = 1040,
  [SMALL_STATE(54)] = 1053,
  [SMALL_STATE(55)] = 1066,
  [SMALL_STATE(56)] = 1079,
  [SMALL_STATE(57)] = 1092,
  [SMALL_STATE(58)] = 1105,
  [SMALL_STATE(59)] = 1113,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1136,
  [SMALL_STATE(62)] = 1147,
  [SMALL_STATE(63)] = 1158,
  [SMALL_STATE(64)] = 1169,
  [SMALL_STATE(65)] = 1180,
  [SMALL_STATE(66)] = 1190,
  [SMALL_STATE(67)] = 1200,
  [SMALL_STATE(68)] = 1206,
  [SMALL_STATE(69)] = 1212,
  [SMALL_STATE(70)] = 1218,
  [SMALL_STATE(71)] = 1224,
  [SMALL_STATE(72)] = 1234,
  [SMALL_STATE(73)] = 1244,
  [SMALL_STATE(74)] = 1254,
  [SMALL_STATE(75)] = 1264,
  [SMALL_STATE(76)] = 1270,
  [SMALL_STATE(77)] = 1280,
  [SMALL_STATE(78)] = 1290,
  [SMALL_STATE(79)] = 1300,
  [SMALL_STATE(80)] = 1310,
  [SMALL_STATE(81)] = 1316,
  [SMALL_STATE(82)] = 1326,
  [SMALL_STATE(83)] = 1332,
  [SMALL_STATE(84)] = 1342,
  [SMALL_STATE(85)] = 1348,
  [SMALL_STATE(86)] = 1358,
  [SMALL_STATE(87)] = 1366,
  [SMALL_STATE(88)] = 1372,
  [SMALL_STATE(89)] = 1379,
  [SMALL_STATE(90)] = 1386,
  [SMALL_STATE(91)] = 1393,
  [SMALL_STATE(92)] = 1398,
  [SMALL_STATE(93)] = 1403,
  [SMALL_STATE(94)] = 1410,
  [SMALL_STATE(95)] = 1417,
  [SMALL_STATE(96)] = 1424,
  [SMALL_STATE(97)] = 1431,
  [SMALL_STATE(98)] = 1436,
  [SMALL_STATE(99)] = 1441,
  [SMALL_STATE(100)] = 1446,
  [SMALL_STATE(101)] = 1451,
  [SMALL_STATE(102)] = 1458,
  [SMALL_STATE(103)] = 1465,
  [SMALL_STATE(104)] = 1472,
  [SMALL_STATE(105)] = 1476,
  [SMALL_STATE(106)] = 1480,
  [SMALL_STATE(107)] = 1484,
  [SMALL_STATE(108)] = 1488,
  [SMALL_STATE(109)] = 1492,
  [SMALL_STATE(110)] = 1496,
  [SMALL_STATE(111)] = 1500,
  [SMALL_STATE(112)] = 1504,
  [SMALL_STATE(113)] = 1508,
  [SMALL_STATE(114)] = 1512,
  [SMALL_STATE(115)] = 1516,
  [SMALL_STATE(116)] = 1520,
  [SMALL_STATE(117)] = 1524,
  [SMALL_STATE(118)] = 1528,
  [SMALL_STATE(119)] = 1532,
  [SMALL_STATE(120)] = 1536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(120),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(95),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
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
