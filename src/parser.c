#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT = 1,
  anon_sym_Project = 2,
  anon_sym_Table = 3,
  anon_sym_TableGroup = 4,
  aux_sym_reference_token1 = 5,
  anon_sym_COLON = 6,
  aux_sym_reference_token2 = 7,
  anon_sym_as = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  aux_sym_note_start_token1 = 11,
  anon_sym_database_type = 12,
  sym_default_start = 13,
  anon_sym_name = 14,
  aux_sym_value_token1 = 15,
  aux_sym_value_token2 = 16,
  aux_sym_value_token3 = 17,
  aux_sym_number_token1 = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_type_token1 = 20,
  aux_sym_type_token2 = 21,
  aux_sym_item_token1 = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_string_token1 = 24,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 25,
  anon_sym_BQUOTE = 26,
  aux_sym_expression_token1 = 27,
  anon_sym_LBRACK = 28,
  anon_sym_COMMA = 29,
  anon_sym_RBRACK = 30,
  anon_sym_increment = 31,
  anon_sym_primarykey = 32,
  anon_sym_pk = 33,
  anon_sym_null = 34,
  anon_sym_notnull = 35,
  anon_sym_unique = 36,
  anon_sym_headercolor = 37,
  anon_sym_type = 38,
  sym_identifier = 39,
  sym_comment = 40,
  sym_indexes = 41,
  anon_sym_LPAREN = 42,
  anon_sym_RPAREN = 43,
  sym_source = 44,
  sym_table = 45,
  sym_column = 46,
  sym_definition = 47,
  sym_keyword = 48,
  sym_reference = 49,
  sym__alias = 50,
  sym_block = 51,
  sym_note = 52,
  sym_note_start = 53,
  sym_default = 54,
  sym_name = 55,
  sym_name_start = 56,
  sym_value = 57,
  sym_number = 58,
  sym_type = 59,
  sym_item = 60,
  sym_string = 61,
  sym_expression = 62,
  sym_setting = 63,
  sym_setting_kind = 64,
  sym_schema = 65,
  sym_index_definition = 66,
  sym_index_block = 67,
  sym_index = 68,
  sym_composite_index = 69,
  aux_sym_source_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  aux_sym_number_repeat1 = 72,
  aux_sym_setting_repeat1 = 73,
  aux_sym_index_block_repeat1 = 74,
  aux_sym_composite_index_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_Project] = "Project",
  [anon_sym_Table] = "Table",
  [anon_sym_TableGroup] = "TableGroup",
  [aux_sym_reference_token1] = "reference_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_reference_token2] = "reference_token2",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_comment] = "comment",
  [sym_indexes] = "indexes",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source] = "source",
  [sym_table] = "table",
  [sym_column] = "column",
  [sym_definition] = "definition",
  [sym_keyword] = "keyword",
  [sym_reference] = "reference",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_reference_token2] = aux_sym_reference_token2,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_comment] = sym_comment,
  [sym_indexes] = sym_indexes,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source] = sym_source,
  [sym_table] = sym_table,
  [sym_column] = sym_column,
  [sym_definition] = sym_definition,
  [sym_keyword] = sym_keyword,
  [sym_reference] = sym_reference,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_token2] = {
    .visible = false,
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
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_column] = {
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
  [sym_reference] = {
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
  [3] = 3,
  [4] = 3,
  [5] = 2,
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
  [30] = 19,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 12,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 16,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 50,
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
  [78] = 54,
  [79] = 79,
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
  [93] = 52,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 86,
  [98] = 73,
  [99] = 74,
  [100] = 75,
  [101] = 88,
  [102] = 81,
  [103] = 70,
  [104] = 69,
  [105] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(230);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(157);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(145);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(137);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'j') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(96)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(234);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(75);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_reference_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(256);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(11);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(11);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(256);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'A') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '_') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(212);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'j') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 'y') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'y') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 96},
  [3] = {.lex_state = 96},
  [4] = {.lex_state = 96},
  [5] = {.lex_state = 96},
  [6] = {.lex_state = 96},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 96},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 96},
  [16] = {.lex_state = 96},
  [17] = {.lex_state = 96},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 96},
  [20] = {.lex_state = 96},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 96},
  [25] = {.lex_state = 96},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 96},
  [32] = {.lex_state = 96},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 96},
  [35] = {.lex_state = 96},
  [36] = {.lex_state = 96},
  [37] = {.lex_state = 96},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 96},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 96},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 96},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 96},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 96},
  [69] = {.lex_state = 135},
  [70] = {.lex_state = 135},
  [71] = {.lex_state = 135},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 143},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 96},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 143},
  [103] = {.lex_state = 135},
  [104] = {.lex_state = 135},
  [105] = {.lex_state = 135},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [aux_sym_reference_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_reference_token2] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [sym_indexes] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(95),
    [sym_definition] = STATE(25),
    [sym_keyword] = STATE(57),
    [sym_reference] = STATE(25),
    [aux_sym_source_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(7),
    [aux_sym_reference_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_default_start,
    ACTIONS(17), 1,
      anon_sym_name,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_setting_repeat1,
    STATE(89), 1,
      sym_name_start,
    STATE(101), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(21), 8,
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
    ACTIONS(15), 1,
      sym_default_start,
    ACTIONS(17), 1,
      anon_sym_name,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_setting_repeat1,
    STATE(89), 1,
      sym_name_start,
    STATE(101), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(21), 8,
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
    ACTIONS(15), 1,
      sym_default_start,
    ACTIONS(17), 1,
      anon_sym_name,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_setting_repeat1,
    STATE(89), 1,
      sym_name_start,
    STATE(101), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(21), 8,
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
    ACTIONS(15), 1,
      sym_default_start,
    ACTIONS(17), 1,
      anon_sym_name,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_setting_repeat1,
    STATE(89), 1,
      sym_name_start,
    STATE(101), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(21), 8,
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
    ACTIONS(32), 1,
      sym_default_start,
    ACTIONS(35), 1,
      anon_sym_name,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_setting_repeat1,
    STATE(89), 1,
      sym_name_start,
    STATE(101), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(40), 8,
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
    ACTIONS(45), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      aux_sym_number_repeat1,
    ACTIONS(43), 14,
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
    ACTIONS(49), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      aux_sym_number_repeat1,
    ACTIONS(47), 14,
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
    ACTIONS(52), 1,
      anon_sym_COLON,
    ACTIONS(54), 14,
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
    ACTIONS(56), 14,
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
  [305] = 2,
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
  [325] = 2,
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
  [345] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_number_token1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(72), 1,
      anon_sym_BQUOTE,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_number_repeat1,
    STATE(15), 1,
      sym_value,
    ACTIONS(62), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(11), 3,
      sym_number,
      sym_string,
      sym_expression,
  [383] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_number_token1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(72), 1,
      anon_sym_BQUOTE,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_number_repeat1,
    STATE(10), 1,
      sym_value,
    ACTIONS(62), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(11), 3,
      sym_number,
      sym_string,
      sym_expression,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 14,
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
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 14,
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
  [461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(80), 13,
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
  [483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 14,
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
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 14,
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
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 13,
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
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(94), 1,
      sym_indexes,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(88), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(21), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [568] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_indexes,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(21), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_indexes,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(13), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(22), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_Table,
    ACTIONS(113), 1,
      aux_sym_reference_token1,
    STATE(57), 1,
      sym_keyword,
    ACTIONS(107), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(24), 3,
      sym_definition,
      sym_reference,
      aux_sym_source_repeat1,
  [645] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(11), 1,
      aux_sym_reference_token1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_keyword,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(24), 3,
      sym_definition,
      sym_reference,
      aux_sym_source_repeat1,
  [670] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    STATE(26), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(29), 2,
      sym_expression,
      sym_composite_index,
  [694] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(28), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(29), 2,
      sym_expression,
      sym_composite_index,
  [718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(29), 2,
      sym_expression,
      sym_composite_index,
  [742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_setting,
    ACTIONS(139), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 6,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_Table,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_Table,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
      aux_sym_reference_token2,
  [798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(40), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_Table,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
  [841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_Table,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
  [854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_Table,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
  [867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_BQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(45), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(60), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(187), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_Table,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      aux_sym_reference_token1,
  [960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(45), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(209), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(78), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(49), 1,
      sym_string,
  [1043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_as,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    STATE(66), 1,
      sym__alias,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(16), 1,
      sym_string,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(233), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(51), 1,
      sym_table,
    STATE(87), 1,
      sym_schema,
  [1129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(84), 1,
      sym_schema,
    STATE(85), 1,
      sym_column,
  [1142] = 4,
    ACTIONS(239), 1,
      aux_sym_item_token1,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      sym_comment,
    STATE(82), 1,
      sym_setting,
  [1155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(37), 1,
      sym_column,
    STATE(84), 1,
      sym_schema,
  [1168] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      aux_sym_type_token2,
    STATE(59), 1,
      sym_type,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1189] = 3,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_item_token1,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
  [1199] = 3,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_item_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_index_block,
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COLON,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOT,
  [1243] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_string_token1,
  [1250] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_string_token1,
  [1257] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_string_token1,
  [1264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
  [1271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
  [1278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
  [1299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1306] = 2,
    ACTIONS(229), 1,
      aux_sym_item_token1,
    ACTIONS(243), 1,
      sym_comment,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
  [1320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_identifier,
  [1327] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_expression_token1,
  [1334] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_item_token1,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_reference_token2,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
  [1397] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym_type_token1,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
  [1411] = 2,
    ACTIONS(225), 1,
      aux_sym_item_token1,
    ACTIONS(243), 1,
      sym_comment,
  [1418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_identifier,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_BQUOTE,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON,
  [1474] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_expression_token1,
  [1481] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym_string_token1,
  [1488] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_string_token1,
  [1495] = 2,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(325), 1,
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
  [SMALL_STATE(12)] = 325,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 421,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 461,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 503,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 594,
  [SMALL_STATE(24)] = 620,
  [SMALL_STATE(25)] = 645,
  [SMALL_STATE(26)] = 670,
  [SMALL_STATE(27)] = 694,
  [SMALL_STATE(28)] = 718,
  [SMALL_STATE(29)] = 742,
  [SMALL_STATE(30)] = 758,
  [SMALL_STATE(31)] = 770,
  [SMALL_STATE(32)] = 784,
  [SMALL_STATE(33)] = 798,
  [SMALL_STATE(34)] = 815,
  [SMALL_STATE(35)] = 828,
  [SMALL_STATE(36)] = 841,
  [SMALL_STATE(37)] = 854,
  [SMALL_STATE(38)] = 867,
  [SMALL_STATE(39)] = 880,
  [SMALL_STATE(40)] = 891,
  [SMALL_STATE(41)] = 908,
  [SMALL_STATE(42)] = 921,
  [SMALL_STATE(43)] = 934,
  [SMALL_STATE(44)] = 947,
  [SMALL_STATE(45)] = 960,
  [SMALL_STATE(46)] = 977,
  [SMALL_STATE(47)] = 990,
  [SMALL_STATE(48)] = 1001,
  [SMALL_STATE(49)] = 1014,
  [SMALL_STATE(50)] = 1027,
  [SMALL_STATE(51)] = 1043,
  [SMALL_STATE(52)] = 1059,
  [SMALL_STATE(53)] = 1069,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1089,
  [SMALL_STATE(56)] = 1105,
  [SMALL_STATE(57)] = 1116,
  [SMALL_STATE(58)] = 1129,
  [SMALL_STATE(59)] = 1142,
  [SMALL_STATE(60)] = 1155,
  [SMALL_STATE(61)] = 1168,
  [SMALL_STATE(62)] = 1181,
  [SMALL_STATE(63)] = 1189,
  [SMALL_STATE(64)] = 1199,
  [SMALL_STATE(65)] = 1209,
  [SMALL_STATE(66)] = 1219,
  [SMALL_STATE(67)] = 1229,
  [SMALL_STATE(68)] = 1236,
  [SMALL_STATE(69)] = 1243,
  [SMALL_STATE(70)] = 1250,
  [SMALL_STATE(71)] = 1257,
  [SMALL_STATE(72)] = 1264,
  [SMALL_STATE(73)] = 1271,
  [SMALL_STATE(74)] = 1278,
  [SMALL_STATE(75)] = 1285,
  [SMALL_STATE(76)] = 1292,
  [SMALL_STATE(77)] = 1299,
  [SMALL_STATE(78)] = 1306,
  [SMALL_STATE(79)] = 1313,
  [SMALL_STATE(80)] = 1320,
  [SMALL_STATE(81)] = 1327,
  [SMALL_STATE(82)] = 1334,
  [SMALL_STATE(83)] = 1341,
  [SMALL_STATE(84)] = 1348,
  [SMALL_STATE(85)] = 1355,
  [SMALL_STATE(86)] = 1362,
  [SMALL_STATE(87)] = 1369,
  [SMALL_STATE(88)] = 1376,
  [SMALL_STATE(89)] = 1383,
  [SMALL_STATE(90)] = 1390,
  [SMALL_STATE(91)] = 1397,
  [SMALL_STATE(92)] = 1404,
  [SMALL_STATE(93)] = 1411,
  [SMALL_STATE(94)] = 1418,
  [SMALL_STATE(95)] = 1425,
  [SMALL_STATE(96)] = 1432,
  [SMALL_STATE(97)] = 1439,
  [SMALL_STATE(98)] = 1446,
  [SMALL_STATE(99)] = 1453,
  [SMALL_STATE(100)] = 1460,
  [SMALL_STATE(101)] = 1467,
  [SMALL_STATE(102)] = 1474,
  [SMALL_STATE(103)] = 1481,
  [SMALL_STATE(104)] = 1488,
  [SMALL_STATE(105)] = 1495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(67),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(77),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_start, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kind, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(76),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(76),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(96),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(81),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(29),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(81),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
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
