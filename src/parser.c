#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_default_start = 10,
  anon_sym_name = 11,
  aux_sym_value_token1 = 12,
  aux_sym_value_token2 = 13,
  aux_sym_value_token3 = 14,
  aux_sym_number_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_type_token1 = 17,
  aux_sym_type_token2 = 18,
  aux_sym_item_token1 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_string_token1 = 21,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 22,
  anon_sym_BQUOTE = 23,
  aux_sym_expression_token1 = 24,
  anon_sym_LBRACK = 25,
  anon_sym_COMMA = 26,
  anon_sym_RBRACK = 27,
  anon_sym_increment = 28,
  anon_sym_primarykey = 29,
  anon_sym_pk = 30,
  anon_sym_null = 31,
  anon_sym_notnull = 32,
  anon_sym_unique = 33,
  anon_sym_headercolor = 34,
  anon_sym_type = 35,
  sym_identifier = 36,
  anon_sym_DOT = 37,
  sym_comment = 38,
  sym_indexes = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  sym_source = 42,
  sym_definition = 43,
  sym_keyword = 44,
  sym__alias = 45,
  sym_block = 46,
  sym_note = 47,
  sym_note_start = 48,
  sym_default = 49,
  sym_name = 50,
  sym_name_start = 51,
  sym_value = 52,
  sym_number = 53,
  sym_type = 54,
  sym_item = 55,
  sym_string = 56,
  sym_expression = 57,
  sym_setting = 58,
  sym_setting_kind = 59,
  sym_schema = 60,
  sym_index_definition = 61,
  sym_index_block = 62,
  sym_index = 63,
  sym_composite_index = 64,
  aux_sym_source_repeat1 = 65,
  aux_sym_block_repeat1 = 66,
  aux_sym_number_repeat1 = 67,
  aux_sym_setting_repeat1 = 68,
  aux_sym_index_block_repeat1 = 69,
  aux_sym_composite_index_repeat1 = 70,
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
  [sym_default_start] = "default_start",
  [anon_sym_name] = "name",
  [aux_sym_value_token1] = "value_token1",
  [aux_sym_value_token2] = "value_token2",
  [aux_sym_value_token3] = "value_token3",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_type_token1] = "type_token1",
  [aux_sym_type_token2] = "type_token2",
  [aux_sym_item_token1] = "item_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_expression_token1] = "expression_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_increment] = "increment",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_pk] = "pk",
  [anon_sym_null] = "null",
  [anon_sym_notnull] = "not null",
  [anon_sym_unique] = "unique",
  [anon_sym_headercolor] = "headercolor",
  [anon_sym_type] = "type",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_indexes] = "indexes",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source] = "source",
  [sym_definition] = "definition",
  [sym_keyword] = "keyword",
  [sym__alias] = "_alias",
  [sym_block] = "block",
  [sym_note] = "note",
  [sym_note_start] = "note_start",
  [sym_default] = "default",
  [sym_name] = "name",
  [sym_name_start] = "name_start",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_type] = "type",
  [sym_item] = "item",
  [sym_string] = "string",
  [sym_expression] = "expression",
  [sym_setting] = "setting",
  [sym_setting_kind] = "setting_kind",
  [sym_schema] = "schema",
  [sym_index_definition] = "index_definition",
  [sym_index_block] = "index_block",
  [sym_index] = "index",
  [sym_composite_index] = "composite_index",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_number_repeat1] = "number_repeat1",
  [aux_sym_setting_repeat1] = "setting_repeat1",
  [aux_sym_index_block_repeat1] = "index_block_repeat1",
  [aux_sym_composite_index_repeat1] = "composite_index_repeat1",
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
  [sym_default_start] = sym_default_start,
  [anon_sym_name] = anon_sym_name,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [aux_sym_value_token2] = aux_sym_value_token2,
  [aux_sym_value_token3] = aux_sym_value_token3,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [aux_sym_type_token2] = aux_sym_type_token2,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_increment] = anon_sym_increment,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_headercolor] = anon_sym_headercolor,
  [anon_sym_type] = anon_sym_type,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_indexes] = sym_indexes,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source] = sym_source,
  [sym_definition] = sym_definition,
  [sym_keyword] = sym_keyword,
  [sym__alias] = sym__alias,
  [sym_block] = sym_block,
  [sym_note] = sym_note,
  [sym_note_start] = sym_note_start,
  [sym_default] = sym_default,
  [sym_name] = sym_name,
  [sym_name_start] = sym_name_start,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_type] = sym_type,
  [sym_item] = sym_item,
  [sym_string] = sym_string,
  [sym_expression] = sym_expression,
  [sym_setting] = sym_setting,
  [sym_setting_kind] = sym_setting_kind,
  [sym_schema] = sym_schema,
  [sym_index_definition] = sym_index_definition,
  [sym_index_block] = sym_index_block,
  [sym_index] = sym_index,
  [sym_composite_index] = sym_composite_index,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_number_repeat1] = aux_sym_number_repeat1,
  [aux_sym_setting_repeat1] = aux_sym_setting_repeat1,
  [aux_sym_index_block_repeat1] = aux_sym_index_block_repeat1,
  [aux_sym_composite_index_repeat1] = aux_sym_composite_index_repeat1,
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
  [sym_default_start] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token2] = {
    .visible = false,
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headercolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_indexes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_start] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_index_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_index_block] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_composite_index] = {
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
  [aux_sym_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_composite_index_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
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
  [29] = 13,
  [30] = 30,
  [31] = 31,
  [32] = 12,
  [33] = 14,
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
  [51] = 50,
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
  [67] = 53,
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
  [84] = 52,
  [85] = 85,
  [86] = 65,
  [87] = 80,
  [88] = 77,
  [89] = 78,
  [90] = 63,
  [91] = 71,
  [92] = 70,
  [93] = 69,
  [94] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'I') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == 'P') ADVANCE(223);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(152);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(210);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(250);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'j') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 90:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 93:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == ',') ADVANCE(141);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(227);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(73);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(250);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(11);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(11);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(250);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '_') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'j') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'q') ADVANCE(243);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 'y') ADVANCE(220);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == 'y') ADVANCE(221);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 94},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 94},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 94},
  [9] = {.lex_state = 94},
  [10] = {.lex_state = 94},
  [11] = {.lex_state = 94},
  [12] = {.lex_state = 94},
  [13] = {.lex_state = 94},
  [14] = {.lex_state = 94},
  [15] = {.lex_state = 94},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 94},
  [18] = {.lex_state = 94},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 94},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 94},
  [28] = {.lex_state = 94},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 94},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 94},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 94},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 130},
  [70] = {.lex_state = 130},
  [71] = {.lex_state = 138},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 130},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 138},
  [92] = {.lex_state = 130},
  [93] = {.lex_state = 130},
  [94] = {.lex_state = 130},
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
    [sym_default_start] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [aux_sym_value_token2] = ACTIONS(1),
    [aux_sym_value_token3] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_headercolor] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_indexes] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(85),
    [sym_definition] = STATE(28),
    [sym_keyword] = STATE(59),
    [aux_sym_source_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_default_start,
    ACTIONS(15), 1,
      anon_sym_name,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_setting_repeat1,
    STATE(76), 1,
      sym_name_start,
    STATE(90), 1,
      sym_note_start,
    ACTIONS(11), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(11), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(19), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [42] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_default_start,
    ACTIONS(15), 1,
      anon_sym_name,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_setting_repeat1,
    STATE(76), 1,
      sym_name_start,
    STATE(90), 1,
      sym_note_start,
    ACTIONS(11), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(11), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(19), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [84] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_default_start,
    ACTIONS(15), 1,
      anon_sym_name,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_setting_repeat1,
    STATE(76), 1,
      sym_name_start,
    STATE(90), 1,
      sym_note_start,
    ACTIONS(11), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(11), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(19), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [126] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_default_start,
    ACTIONS(31), 1,
      anon_sym_name,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_setting_repeat1,
    STATE(76), 1,
      sym_name_start,
    STATE(90), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(11), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(36), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [168] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_default_start,
    ACTIONS(15), 1,
      anon_sym_name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_setting_repeat1,
    STATE(76), 1,
      sym_name_start,
    STATE(90), 1,
      sym_note_start,
    ACTIONS(11), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(11), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(19), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      aux_sym_number_repeat1,
    ACTIONS(41), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      aux_sym_number_repeat1,
    ACTIONS(45), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_COLON,
    ACTIONS(52), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(54), 13,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [407] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_number_token1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_number_repeat1,
    STATE(17), 1,
      sym_value,
    ACTIONS(66), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(18), 3,
      sym_number,
      sym_string,
      sym_expression,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 14,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [485] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_number_token1,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(78), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_number_repeat1,
    STATE(15), 1,
      sym_value,
    ACTIONS(66), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(18), 3,
      sym_number,
      sym_string,
      sym_expression,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 13,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_default_start,
      anon_sym_name,
      anon_sym_RBRACK,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [542] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_indexes,
    STATE(63), 1,
      sym_note_start,
    ACTIONS(11), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(22), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_indexes,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_note_start,
    ACTIONS(11), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(23), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_indexes,
    STATE(63), 1,
      sym_note_start,
    ACTIONS(94), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(23), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_BQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(24), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(30), 2,
      sym_expression,
      sym_composite_index,
  [644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(24), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(30), 2,
      sym_expression,
      sym_composite_index,
  [668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(30), 2,
      sym_expression,
      sym_composite_index,
  [692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_Table,
    STATE(59), 1,
      sym_keyword,
    ACTIONS(126), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(27), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_keyword,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(27), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 6,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_setting,
    ACTIONS(134), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(138), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(58), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(62), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(146), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [814] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_as,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_DOT,
    STATE(47), 1,
      sym_block,
    STATE(60), 1,
      sym__alias,
  [833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_BQUOTE,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(164), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(170), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(41), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_Table,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_Table,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_as,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    STATE(57), 1,
      sym__alias,
  [985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_Table,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_Table,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(32), 1,
      sym_string,
  [1035] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(12), 1,
      sym_string,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_Table,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1083] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_type_token2,
    ACTIONS(224), 1,
      sym_comment,
    STATE(56), 1,
      sym_type,
  [1096] = 4,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym_item_token1,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_setting,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [1119] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym_item_token1,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(83), 1,
      sym_schema,
  [1139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_index_block,
  [1159] = 3,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_item_token1,
    ACTIONS(240), 1,
      anon_sym_LBRACK,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COLON,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_BQUOTE,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [1197] = 2,
    ACTIONS(214), 1,
      aux_sym_item_token1,
    ACTIONS(224), 1,
      sym_comment,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
  [1211] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_string_token1,
  [1218] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_string_token1,
  [1225] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_expression_token1,
  [1232] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_item_token1,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
  [1246] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym_string_token1,
  [1253] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_type_token1,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [1267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
  [1274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
  [1295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
  [1302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
  [1309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
  [1316] = 2,
    ACTIONS(212), 1,
      aux_sym_item_token1,
    ACTIONS(224), 1,
      sym_comment,
  [1323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_BQUOTE,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
  [1351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1365] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_expression_token1,
  [1372] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_string_token1,
  [1379] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(290), 1,
      aux_sym_string_token1,
  [1386] = 2,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 327,
  [SMALL_STATE(13)] = 347,
  [SMALL_STATE(14)] = 367,
  [SMALL_STATE(15)] = 387,
  [SMALL_STATE(16)] = 407,
  [SMALL_STATE(17)] = 445,
  [SMALL_STATE(18)] = 465,
  [SMALL_STATE(19)] = 485,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 594,
  [SMALL_STATE(24)] = 620,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 668,
  [SMALL_STATE(27)] = 692,
  [SMALL_STATE(28)] = 713,
  [SMALL_STATE(29)] = 734,
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 762,
  [SMALL_STATE(32)] = 775,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 801,
  [SMALL_STATE(35)] = 814,
  [SMALL_STATE(36)] = 833,
  [SMALL_STATE(37)] = 850,
  [SMALL_STATE(38)] = 863,
  [SMALL_STATE(39)] = 874,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 904,
  [SMALL_STATE(42)] = 921,
  [SMALL_STATE(43)] = 932,
  [SMALL_STATE(44)] = 945,
  [SMALL_STATE(45)] = 957,
  [SMALL_STATE(46)] = 969,
  [SMALL_STATE(47)] = 985,
  [SMALL_STATE(48)] = 997,
  [SMALL_STATE(49)] = 1009,
  [SMALL_STATE(50)] = 1019,
  [SMALL_STATE(51)] = 1035,
  [SMALL_STATE(52)] = 1051,
  [SMALL_STATE(53)] = 1061,
  [SMALL_STATE(54)] = 1071,
  [SMALL_STATE(55)] = 1083,
  [SMALL_STATE(56)] = 1096,
  [SMALL_STATE(57)] = 1109,
  [SMALL_STATE(58)] = 1119,
  [SMALL_STATE(59)] = 1129,
  [SMALL_STATE(60)] = 1139,
  [SMALL_STATE(61)] = 1149,
  [SMALL_STATE(62)] = 1159,
  [SMALL_STATE(63)] = 1169,
  [SMALL_STATE(64)] = 1176,
  [SMALL_STATE(65)] = 1183,
  [SMALL_STATE(66)] = 1190,
  [SMALL_STATE(67)] = 1197,
  [SMALL_STATE(68)] = 1204,
  [SMALL_STATE(69)] = 1211,
  [SMALL_STATE(70)] = 1218,
  [SMALL_STATE(71)] = 1225,
  [SMALL_STATE(72)] = 1232,
  [SMALL_STATE(73)] = 1239,
  [SMALL_STATE(74)] = 1246,
  [SMALL_STATE(75)] = 1253,
  [SMALL_STATE(76)] = 1260,
  [SMALL_STATE(77)] = 1267,
  [SMALL_STATE(78)] = 1274,
  [SMALL_STATE(79)] = 1281,
  [SMALL_STATE(80)] = 1288,
  [SMALL_STATE(81)] = 1295,
  [SMALL_STATE(82)] = 1302,
  [SMALL_STATE(83)] = 1309,
  [SMALL_STATE(84)] = 1316,
  [SMALL_STATE(85)] = 1323,
  [SMALL_STATE(86)] = 1330,
  [SMALL_STATE(87)] = 1337,
  [SMALL_STATE(88)] = 1344,
  [SMALL_STATE(89)] = 1351,
  [SMALL_STATE(90)] = 1358,
  [SMALL_STATE(91)] = 1365,
  [SMALL_STATE(92)] = 1372,
  [SMALL_STATE(93)] = 1379,
  [SMALL_STATE(94)] = 1386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(64),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(66),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_start, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kind, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(71),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(30),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(71),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(36),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [278] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
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
