#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  sym_identifier = 3,
  sym_literal = 4,
  sym_shebang = 5,
  sym_mutable_specifier = 6,
  anon_sym_let = 7,
  anon_sym_COLON = 8,
  anon_sym_EQ = 9,
  anon_sym_fn = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_BANG = 12,
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
  sym_source_file = 28,
  sym__statement_list = 29,
  sym__statement = 30,
  sym__expression = 31,
  sym__pattern = 32,
  sym_variable_declaration = 33,
  sym_mut_pattern = 34,
  sym_type_expression = 35,
  sym_empty_statement = 36,
  aux_sym_source_file_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_literal] = "literal",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym__pattern] = "_pattern",
  [sym_variable_declaration] = "variable_declaration",
  [sym_mut_pattern] = "mut_pattern",
  [sym_type_expression] = "type_expression",
  [sym_empty_statement] = "empty_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_literal] = sym_literal,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym__pattern] = sym__pattern,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_mut_pattern] = sym_mut_pattern,
  [sym_type_expression] = sym_type_expression,
  [sym_empty_statement] = sym_empty_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_literal] = {
    .visible = true,
    .named = true,
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
  [sym_variable_declaration] = {
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
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(57);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'z') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'z') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '8') ADVANCE(60);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '6') ADVANCE(35);
      if (lookahead == '8') ADVANCE(58);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__statement_list] = STATE(5),
    [sym__statement] = STATE(13),
    [sym_variable_declaration] = STATE(13),
    [sym_empty_statement] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(29), 1,
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
    STATE(30), 1,
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
  [34] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(13), 3,
      sym__statement,
      sym_variable_declaration,
      sym_empty_statement,
  [53] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(13), 3,
      sym__statement,
      sym_variable_declaration,
      sym_empty_statement,
  [72] = 5,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(13), 3,
      sym__statement,
      sym_variable_declaration,
      sym_empty_statement,
  [91] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    ACTIONS(22), 1,
      anon_sym_let,
    STATE(7), 2,
      sym__statement_list,
      aux_sym_source_file_repeat1,
    STATE(13), 3,
      sym__statement,
      sym_variable_declaration,
      sym_empty_statement,
  [110] = 3,
    STATE(20), 1,
      sym__statement_list,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
    STATE(13), 3,
      sym__statement,
      sym_variable_declaration,
      sym_empty_statement,
  [124] = 2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(29), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [133] = 2,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [142] = 3,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    STATE(27), 2,
      sym__pattern,
      sym_mut_pattern,
  [153] = 2,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [162] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [173] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    STATE(26), 2,
      sym__pattern,
      sym_mut_pattern,
  [184] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [193] = 3,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(22), 2,
      sym__pattern,
      sym_mut_pattern,
  [204] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(61), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [213] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [222] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_let,
  [231] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_let,
  [237] = 2,
    STATE(33), 1,
      sym__expression,
    ACTIONS(73), 2,
      sym_identifier,
      sym_literal,
  [245] = 1,
    ACTIONS(75), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [251] = 2,
    STATE(34), 1,
      sym__expression,
    ACTIONS(77), 2,
      sym_identifier,
      sym_literal,
  [259] = 2,
    STATE(32), 1,
      sym__expression,
    ACTIONS(79), 2,
      sym_identifier,
      sym_literal,
  [267] = 2,
    STATE(35), 1,
      sym__expression,
    ACTIONS(81), 2,
      sym_identifier,
      sym_literal,
  [275] = 3,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      anon_sym_EQ,
  [285] = 3,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_EQ,
  [295] = 1,
    ACTIONS(95), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [300] = 2,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      anon_sym_EQ,
  [307] = 2,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      anon_sym_EQ,
  [314] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [318] = 1,
    ACTIONS(97), 1,
      anon_sym_SEMI,
  [322] = 1,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [326] = 1,
    ACTIONS(107), 1,
      anon_sym_SEMI,
  [330] = 1,
    ACTIONS(109), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 237,
  [SMALL_STATE(22)] = 245,
  [SMALL_STATE(23)] = 251,
  [SMALL_STATE(24)] = 259,
  [SMALL_STATE(25)] = 267,
  [SMALL_STATE(26)] = 275,
  [SMALL_STATE(27)] = 285,
  [SMALL_STATE(28)] = 295,
  [SMALL_STATE(29)] = 300,
  [SMALL_STATE(30)] = 307,
  [SMALL_STATE(31)] = 314,
  [SMALL_STATE(32)] = 318,
  [SMALL_STATE(33)] = 322,
  [SMALL_STATE(34)] = 326,
  [SMALL_STATE(35)] = 330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 8),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rust(void) {
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
