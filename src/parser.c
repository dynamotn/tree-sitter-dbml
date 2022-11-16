#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword_project = 1,
  sym_keyword_table = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON = 5,
  aux_sym_note_start_token1 = 6,
  anon_sym_database_type = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_string_token1 = 9,
  sym_identifier = 10,
  sym_source = 11,
  sym__definition = 12,
  sym_project_definition = 13,
  sym_schema_definition = 14,
  sym_block = 15,
  sym_note = 16,
  sym_note_start = 17,
  sym_string = 18,
  aux_sym_source_repeat1 = 19,
  aux_sym_block_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_project] = "keyword_project",
  [sym_keyword_table] = "keyword_table",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_note_start_token1] = "note_start_token1",
  [anon_sym_database_type] = "database_type",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [sym_identifier] = "identifier",
  [sym_source] = "source",
  [sym__definition] = "_definition",
  [sym_project_definition] = "project_definition",
  [sym_schema_definition] = "schema_definition",
  [sym_block] = "block",
  [sym_note] = "note",
  [sym_note_start] = "note_start",
  [sym_string] = "string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_project] = sym_keyword_project,
  [sym_keyword_table] = sym_keyword_table,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_note_start_token1] = aux_sym_note_start_token1,
  [anon_sym_database_type] = anon_sym_database_type,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_identifier] = sym_identifier,
  [sym_source] = sym_source,
  [sym__definition] = sym__definition,
  [sym_project_definition] = sym_project_definition,
  [sym_schema_definition] = sym_schema_definition,
  [sym_block] = sym_block,
  [sym_note] = sym_note,
  [sym_note_start] = sym_note_start,
  [sym_string] = sym_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_project] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_table] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_start_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_database_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_project_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_note_start] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'j') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_keyword_project);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_project] = ACTIONS(1),
    [sym_keyword_table] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_note_start_token1] = ACTIONS(1),
    [anon_sym_database_type] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym__definition] = STATE(3),
    [sym_project_definition] = STATE(3),
    [sym_schema_definition] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword_project] = ACTIONS(5),
    [sym_keyword_table] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_keyword_project,
    ACTIONS(14), 1,
      sym_keyword_table,
    STATE(2), 4,
      sym__definition,
      sym_project_definition,
      sym_schema_definition,
      aux_sym_source_repeat1,
  [16] = 4,
    ACTIONS(5), 1,
      sym_keyword_project,
    ACTIONS(7), 1,
      sym_keyword_table,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 4,
      sym__definition,
      sym_project_definition,
      sym_schema_definition,
      aux_sym_source_repeat1,
  [32] = 4,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_note_start,
    ACTIONS(21), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(6), 2,
      sym_note,
      aux_sym_block_repeat1,
  [47] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_note_start,
    ACTIONS(21), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(4), 2,
      sym_note,
      aux_sym_block_repeat1,
  [62] = 4,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_note_start,
    ACTIONS(27), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(6), 2,
      sym_note,
      aux_sym_block_repeat1,
  [77] = 1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      sym_keyword_project,
      sym_keyword_table,
  [83] = 1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      sym_keyword_project,
      sym_keyword_table,
  [89] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      sym_keyword_project,
      sym_keyword_table,
  [95] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      sym_keyword_project,
      sym_keyword_table,
  [101] = 1,
    ACTIONS(38), 3,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
  [107] = 1,
    ACTIONS(40), 3,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
  [113] = 2,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [120] = 2,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
  [127] = 2,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_string,
  [134] = 1,
    ACTIONS(46), 1,
      sym_identifier,
  [138] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [142] = 1,
    ACTIONS(50), 1,
      anon_sym_COLON,
  [146] = 1,
    ACTIONS(52), 1,
      anon_sym_COLON,
  [150] = 1,
    ACTIONS(54), 1,
      sym_identifier,
  [154] = 1,
    ACTIONS(56), 1,
      aux_sym_string_token1,
  [158] = 1,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 127,
  [SMALL_STATE(16)] = 134,
  [SMALL_STATE(17)] = 138,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 146,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 154,
  [SMALL_STATE(22)] = 158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_definition, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbml(void) {
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
