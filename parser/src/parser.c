#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  sym_literal = 2,
  sym_shebang = 3,
  sym_mutable_specifier = 4,
  anon_sym_let = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_SEMI = 8,
  sym_source_file = 9,
  sym__statement = 10,
  sym__expression = 11,
  sym__pattern = 12,
  sym_variable_declaration = 13,
  sym_mut_pattern = 14,
  sym_type_expression = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_literal] = "literal",
  [sym_shebang] = "shebang",
  [sym_mutable_specifier] = "mutable_specifier",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym__pattern] = "_pattern",
  [sym_variable_declaration] = "variable_declaration",
  [sym_mut_pattern] = "mut_pattern",
  [sym_type_expression] = "type_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_literal] = sym_literal,
  [sym_shebang] = sym_shebang,
  [sym_mutable_specifier] = sym_mutable_specifier,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym__pattern] = sym__pattern,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_mut_pattern] = sym_mut_pattern,
  [sym_type_expression] = sym_type_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_SEMI] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__statement] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_let,
    STATE(2), 3,
      sym__statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym__statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym__statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [36] = 3,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym__statement,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [48] = 3,
    ACTIONS(18), 1,
      sym_identifier,
    ACTIONS(20), 1,
      sym_mutable_specifier,
    STATE(14), 2,
      sym__pattern,
      sym_mut_pattern,
  [59] = 3,
    ACTIONS(22), 1,
      sym_identifier,
    ACTIONS(24), 1,
      sym_mutable_specifier,
    STATE(11), 2,
      sym__pattern,
      sym_mut_pattern,
  [70] = 3,
    ACTIONS(24), 1,
      sym_mutable_specifier,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(15), 2,
      sym__pattern,
      sym_mut_pattern,
  [81] = 2,
    STATE(30), 1,
      sym__expression,
    ACTIONS(28), 2,
      sym_identifier,
      sym_literal,
  [89] = 2,
    STATE(28), 1,
      sym__expression,
    ACTIONS(30), 2,
      sym_identifier,
      sym_literal,
  [97] = 3,
    ACTIONS(32), 1,
      anon_sym_COLON,
    ACTIONS(34), 1,
      anon_sym_EQ,
    ACTIONS(36), 1,
      anon_sym_SEMI,
  [107] = 2,
    STATE(31), 1,
      sym__expression,
    ACTIONS(38), 2,
      sym_identifier,
      sym_literal,
  [115] = 2,
    STATE(27), 1,
      sym__expression,
    ACTIONS(40), 2,
      sym_identifier,
      sym_literal,
  [123] = 3,
    ACTIONS(42), 1,
      anon_sym_COLON,
    ACTIONS(44), 1,
      anon_sym_EQ,
    ACTIONS(46), 1,
      anon_sym_SEMI,
  [133] = 1,
    ACTIONS(48), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_SEMI,
  [139] = 2,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(52), 1,
      anon_sym_SEMI,
  [146] = 2,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(21), 1,
      sym_type_expression,
  [153] = 1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [158] = 1,
    ACTIONS(58), 2,
      anon_sym_EQ,
      anon_sym_SEMI,
  [163] = 2,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(16), 1,
      sym_type_expression,
  [170] = 2,
    ACTIONS(60), 1,
      anon_sym_EQ,
    ACTIONS(62), 1,
      anon_sym_SEMI,
  [177] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [182] = 1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [187] = 1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [192] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [197] = 1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [202] = 1,
    ACTIONS(52), 1,
      anon_sym_SEMI,
  [206] = 1,
    ACTIONS(62), 1,
      anon_sym_SEMI,
  [210] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [214] = 1,
    ACTIONS(76), 1,
      anon_sym_SEMI,
  [218] = 1,
    ACTIONS(78), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 139,
  [SMALL_STATE(17)] = 146,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 158,
  [SMALL_STATE(20)] = 163,
  [SMALL_STATE(21)] = 170,
  [SMALL_STATE(22)] = 177,
  [SMALL_STATE(23)] = 182,
  [SMALL_STATE(24)] = 187,
  [SMALL_STATE(25)] = 192,
  [SMALL_STATE(26)] = 197,
  [SMALL_STATE(27)] = 202,
  [SMALL_STATE(28)] = 206,
  [SMALL_STATE(29)] = 210,
  [SMALL_STATE(30)] = 214,
  [SMALL_STATE(31)] = 218,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mut_pattern, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 8),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
