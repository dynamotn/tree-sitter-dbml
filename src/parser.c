#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_Project = 1,
  anon_sym_Table = 2,
  anon_sym_TableGroup = 3,
  anon_sym_as = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_COLON = 7,
  aux_sym_note_start_token1 = 8,
  anon_sym_database_type = 9,
  aux_sym_item_token1 = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym_identifier = 13,
  sym_comment = 14,
  sym_source = 15,
  sym_definition = 16,
  sym_keyword = 17,
  sym__alias = 18,
  sym_block = 19,
  sym_note = 20,
  sym_note_start = 21,
  sym_item = 22,
  sym_string = 23,
  aux_sym_source_repeat1 = 24,
  aux_sym_block_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Project] = "Project",
  [anon_sym_Table] = "Table",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_note_start_token1] = "note_start_token1",
  [anon_sym_database_type] = "database_type",
  [aux_sym_item_token1] = "item_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_definition] = "definition",
  [sym_keyword] = "keyword",
  [sym__alias] = "_alias",
  [sym_block] = "block",
  [sym_note] = "note",
  [sym_note_start] = "note_start",
  [sym_item] = "item",
  [sym_string] = "string",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_note_start_token1] = aux_sym_note_start_token1,
  [anon_sym_database_type] = anon_sym_database_type,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_definition] = sym_definition,
  [sym_keyword] = sym_keyword,
  [sym__alias] = sym__alias,
  [sym_block] = sym_block,
  [sym_note] = sym_note,
  [sym_note_start] = sym_note_start,
  [sym_item] = sym_item,
  [sym_string] = sym_string,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Project] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
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
  [aux_sym_item_token1] = {
    .visible = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__alias] = {
    .visible = false,
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
  [sym_item] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'j') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_database_type);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(66);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_note_start_token1] = ACTIONS(1),
    [anon_sym_database_type] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(24),
    [sym_definition] = STATE(6),
    [sym_keyword] = STATE(23),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(16), 1,
      sym_identifier,
    STATE(21), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(2), 3,
      sym_note,
      sym_item,
      aux_sym_block_repeat1,
  [22] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(21), 1,
      sym_note_start,
    ACTIONS(21), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(2), 3,
      sym_note,
      sym_item,
      aux_sym_block_repeat1,
  [44] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_note_start,
    ACTIONS(21), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(3), 3,
      sym_note,
      sym_item,
      aux_sym_block_repeat1,
  [66] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_Table,
    STATE(23), 1,
      sym_keyword,
    ACTIONS(29), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(5), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [87] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_keyword,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(5), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_Table,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_block,
    STATE(15), 1,
      sym__alias,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_Table,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_Table,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 3,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_identifier,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_Table,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 3,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_identifier,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 3,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_identifier,
  [208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_block,
  [218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_string,
  [228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
  [249] = 2,
    ACTIONS(77), 1,
      aux_sym_item_token1,
    ACTIONS(79), 1,
      sym_comment,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COLON,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_identifier,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_identifier,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [284] = 2,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_string_token1,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 249,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 270,
  [SMALL_STATE(24)] = 277,
  [SMALL_STATE(25)] = 284,
  [SMALL_STATE(26)] = 291,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
