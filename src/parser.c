#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword_project = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  aux_sym_note_start_token1 = 5,
  anon_sym_database_type = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_token1 = 8,
  sym_identifier = 9,
  sym_source = 10,
  sym__definition = 11,
  sym_project_definition = 12,
  sym_block = 13,
  sym_note = 14,
  sym_note_start = 15,
  sym_string = 16,
  aux_sym_source_repeat1 = 17,
  aux_sym_block_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_project] = "keyword_project",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'j') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_keyword_project);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_note_start_token1] = ACTIONS(1),
    [anon_sym_database_type] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(15),
    [sym__definition] = STATE(5),
    [sym_project_definition] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword_project] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_note_start,
    ACTIONS(9), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(3), 2,
      sym_note,
      aux_sym_block_repeat1,
  [15] = 4,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_note_start,
    ACTIONS(9), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(4), 2,
      sym_note,
      aux_sym_block_repeat1,
  [30] = 4,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_note_start,
    ACTIONS(15), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(4), 2,
      sym_note,
      aux_sym_block_repeat1,
  [45] = 3,
    ACTIONS(5), 1,
      sym_keyword_project,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym__definition,
      sym_project_definition,
      aux_sym_source_repeat1,
  [57] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      sym_keyword_project,
    STATE(6), 3,
      sym__definition,
      sym_project_definition,
      aux_sym_source_repeat1,
  [69] = 1,
    ACTIONS(25), 3,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
  [75] = 1,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
  [81] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [88] = 1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_keyword_project,
  [93] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_keyword_project,
  [98] = 2,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_string,
  [105] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_keyword_project,
  [110] = 1,
    ACTIONS(39), 1,
      sym_identifier,
  [114] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [118] = 1,
    ACTIONS(43), 1,
      anon_sym_COLON,
  [122] = 1,
    ACTIONS(45), 1,
      anon_sym_COLON,
  [126] = 1,
    ACTIONS(47), 1,
      aux_sym_string_token1,
  [130] = 1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 98,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 114,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 122,
  [SMALL_STATE(18)] = 126,
  [SMALL_STATE(19)] = 130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_definition, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
