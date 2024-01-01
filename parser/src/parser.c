#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
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
  anon_sym_BANG = 13,
  anon_sym_u8 = 14,
  anon_sym_i8 = 15,
  anon_sym_u16 = 16,
  anon_sym_i16 = 17,
  anon_sym_u32 = 18,
  anon_sym_i32 = 19,
  anon_sym_u64 = 20,
  anon_sym_i64 = 21,
  anon_sym_isize = 22,
  anon_sym_usize = 23,
  anon_sym_LPAREN = 24,
  anon_sym_COMMA = 25,
  anon_sym_RPAREN = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_DOT = 29,
  anon_sym_AMP = 30,
  sym_source_file = 31,
  sym__statement_list = 32,
  sym__statement = 33,
  sym__expression = 34,
  sym__pattern = 35,
  sym_literal = 36,
  sym_let_declaration = 37,
  sym_mut_pattern = 38,
  sym_type_expression = 39,
  sym_empty_statement = 40,
  sym_method_call = 41,
  sym_macro_invocation = 42,
  sym_macro_arguments = 43,
  sym_expression_list = 44,
  sym_reference_expression = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_expression_list_repeat1 = 47,
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
  [anon_sym_BANG] = "!",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_AMP] = "&",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym__item] = "_item",
  [sym__expression] = "_expression",
  [sym_return_expression] = "return_expression",
  [sym__pattern] = "_pattern",
  [sym_literal] = "literal",
  [sym_let_declaration] = "let_declaration",
  [sym_mut_pattern] = "mut_pattern",
  [sym_type_expression] = "type_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [sym_method_call] = "method_call",
  [sym_macro_invocation] = "macro_invocation",
  [sym_macro_arguments] = "macro_arguments",
  [sym_expression_list] = "expression_list",
  [sym_reference_expression] = "reference_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_source_file] = sym_source_file,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym__item] = sym__item,
  [sym__expression] = sym__expression,
  [sym_return_expression] = sym_return_expression,
  [sym__pattern] = sym__pattern,
  [sym_literal] = sym_literal,
  [sym_let_declaration] = sym_let_declaration,
  [sym_mut_pattern] = sym_mut_pattern,
  [sym_type_expression] = sym_type_expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym_empty_statement] = sym_empty_statement,
  [sym_method_call] = sym_method_call,
  [sym_macro_invocation] = sym_macro_invocation,
  [sym_macro_arguments] = sym_macro_arguments,
  [sym_expression_list] = sym_expression_list,
  [sym_reference_expression] = sym_reference_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
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
  [anon_sym_BANG] = {
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
  [sym_return_expression] = {
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
  [sym_mut_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
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
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 10,
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
  [34] = 33,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
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
      if (lookahead == ')') ADVANCE(96);
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
      if (lookahead == '8') ADVANCE(76);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(74);
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
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(78);
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
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(92);
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
      if (lookahead == '8') ADVANCE(77);
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
      if (lookahead == '8') ADVANCE(75);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
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
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
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
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym__statement_list] = STATE(14),
    [sym__statement] = STATE(23),
    [sym_let_declaration] = STATE(23),
    [sym_empty_statement] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_literal] = ACTIONS(11),
    [sym_shebang] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(46), 1,
      sym_type_expression,
    ACTIONS(11), 11,
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
    STATE(49), 1,
      sym_type_expression,
    ACTIONS(11), 11,
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
  [34] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_AMP,
    STATE(58), 1,
      sym_expression_list,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(43), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [58] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_expression_list,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(43), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [82] = 5,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_mutable_specifier,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(36), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [103] = 4,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(50), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [121] = 4,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(47), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [139] = 4,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(30), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [157] = 4,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(56), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [175] = 4,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(54), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [193] = 4,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_AMP,
    ACTIONS(15), 2,
      sym__integer_literal,
      aux_sym_literal_token1,
    STATE(51), 5,
      sym__expression,
      sym_literal,
      sym_method_call,
      sym_macro_invocation,
      sym_reference_expression,
  [211] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(23), 3,
      sym__statement,
      sym_let_declaration,
      sym_empty_statement,
  [230] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(23), 3,
      sym__statement,
      sym_let_declaration,
      sym_empty_statement,
  [249] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      anon_sym_let,
    STATE(15), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(23), 3,
      sym__statement,
      sym_let_declaration,
      sym_empty_statement,
  [268] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(23), 3,
      sym__statement,
      sym_let_declaration,
      sym_empty_statement,
  [287] = 3,
    STATE(42), 1,
      sym__statement_list,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
    STATE(23), 3,
      sym__statement,
      sym_let_declaration,
      sym_empty_statement,
  [301] = 3,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [313] = 3,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    STATE(31), 2,
      sym__pattern,
      sym_mut_pattern,
  [324] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [333] = 3,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(40), 2,
      sym__pattern,
      sym_mut_pattern,
  [344] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(59), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [353] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [364] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [373] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [382] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [391] = 3,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_mutable_specifier,
    STATE(39), 2,
      sym__pattern,
      sym_mut_pattern,
  [402] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [411] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(89), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_return,
      sym_identifier,
      sym_literal,
      anon_sym_let,
  [420] = 1,
    ACTIONS(91), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [426] = 1,
    ACTIONS(93), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [432] = 1,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [438] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_expression_list_repeat1,
  [448] = 1,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [454] = 1,
    ACTIONS(104), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [460] = 1,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [466] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_expression_list_repeat1,
  [476] = 1,
    ACTIONS(112), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [482] = 3,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 1,
      anon_sym_EQ,
  [492] = 3,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_COLON,
    ACTIONS(124), 1,
      anon_sym_EQ,
  [502] = 1,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [508] = 1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
  [514] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_expression_list_repeat1,
  [524] = 1,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [530] = 1,
    ACTIONS(134), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [923] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [931] = 2,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [939] = 3,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_EQ,
  [535] = 2,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_EQ,
  [542] = 1,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [547] = 2,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_macro_arguments,
  [554] = 2,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      anon_sym_EQ,
  [561] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [565] = 1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [569] = 1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [573] = 1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
  [577] = 1,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [581] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [585] = 1,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [589] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [593] = 1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 268,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 373,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 391,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 426,
  [SMALL_STATE(32)] = 432,
  [SMALL_STATE(33)] = 438,
  [SMALL_STATE(34)] = 448,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 460,
  [SMALL_STATE(37)] = 466,
  [SMALL_STATE(38)] = 476,
  [SMALL_STATE(39)] = 482,
  [SMALL_STATE(40)] = 492,
  [SMALL_STATE(41)] = 502,
  [SMALL_STATE(42)] = 508,
  [SMALL_STATE(43)] = 514,
  [SMALL_STATE(44)] = 524,
  [SMALL_STATE(45)] = 530,
  [SMALL_STATE(46)] = 535,
  [SMALL_STATE(47)] = 542,
  [SMALL_STATE(48)] = 547,
  [SMALL_STATE(49)] = 554,
  [SMALL_STATE(50)] = 561,
  [SMALL_STATE(51)] = 565,
  [SMALL_STATE(52)] = 569,
  [SMALL_STATE(53)] = 573,
  [SMALL_STATE(54)] = 577,
  [SMALL_STATE(55)] = 581,
  [SMALL_STATE(56)] = 585,
  [SMALL_STATE(57)] = 589,
  [SMALL_STATE(58)] = 593,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_expression, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_invocation, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_arguments, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
