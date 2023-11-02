#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT = 1,
  anon_sym_Project = 2,
  anon_sym_Table = 3,
  anon_sym_TableGroup = 4,
  sym_keyword_ref = 5,
  sym_keyword_enum = 6,
  anon_sym_COLON = 7,
  aux_sym_reference_token1 = 8,
  anon_sym_as = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  aux_sym_note_start_token1 = 12,
  anon_sym_database_type = 13,
  sym_default_start = 14,
  anon_sym_name = 15,
  aux_sym_value_token1 = 16,
  aux_sym_value_token2 = 17,
  aux_sym_value_token3 = 18,
  aux_sym_number_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_type_token1 = 21,
  aux_sym_type_token2 = 22,
  aux_sym_item_token1 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_string_token1 = 25,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 26,
  anon_sym_BQUOTE = 27,
  aux_sym_expression_token1 = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  anon_sym_increment = 32,
  anon_sym_primarykey = 33,
  anon_sym_pk = 34,
  anon_sym_null = 35,
  anon_sym_notnull = 36,
  anon_sym_unique = 37,
  anon_sym_headercolor = 38,
  anon_sym_type = 39,
  sym_identifier = 40,
  sym_comment = 41,
  sym_indexes = 42,
  anon_sym_LPAREN = 43,
  anon_sym_RPAREN = 44,
  sym_source = 45,
  sym_table = 46,
  sym_column = 47,
  sym_definition = 48,
  sym_keyword_def = 49,
  sym_reference = 50,
  sym_enum = 51,
  sym__alias = 52,
  sym_block = 53,
  sym_enum_block = 54,
  sym_note = 55,
  sym_note_start = 56,
  sym_default = 57,
  sym_name = 58,
  sym_name_start = 59,
  sym_value = 60,
  sym_number = 61,
  sym_type = 62,
  sym_item = 63,
  sym_enum_item = 64,
  sym_string = 65,
  sym_expression = 66,
  sym_setting = 67,
  sym_setting_kind = 68,
  sym_schema = 69,
  sym_index_definition = 70,
  sym_index_block = 71,
  sym_index = 72,
  sym_composite_index = 73,
  aux_sym_source_repeat1 = 74,
  aux_sym_block_repeat1 = 75,
  aux_sym_enum_block_repeat1 = 76,
  aux_sym_number_repeat1 = 77,
  aux_sym_setting_repeat1 = 78,
  aux_sym_index_block_repeat1 = 79,
  aux_sym_composite_index_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_Project] = "Project",
  [anon_sym_Table] = "Table",
  [anon_sym_TableGroup] = "TableGroup",
  [sym_keyword_ref] = "keyword_ref",
  [sym_keyword_enum] = "keyword_enum",
  [anon_sym_COLON] = ":",
  [aux_sym_reference_token1] = "reference_token1",
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
  [sym_keyword_def] = "keyword_def",
  [sym_reference] = "reference",
  [sym_enum] = "enum",
  [sym__alias] = "_alias",
  [sym_block] = "block",
  [sym_enum_block] = "enum_block",
  [sym_note] = "note",
  [sym_note_start] = "note_start",
  [sym_default] = "default",
  [sym_name] = "name",
  [sym_name_start] = "name_start",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_type] = "type",
  [sym_item] = "item",
  [sym_enum_item] = "enum_item",
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
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
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
  [sym_keyword_ref] = sym_keyword_ref,
  [sym_keyword_enum] = sym_keyword_enum,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
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
  [sym_keyword_def] = sym_keyword_def,
  [sym_reference] = sym_reference,
  [sym_enum] = sym_enum,
  [sym__alias] = sym__alias,
  [sym_block] = sym_block,
  [sym_enum_block] = sym_enum_block,
  [sym_note] = sym_note,
  [sym_note_start] = sym_note_start,
  [sym_default] = sym_default,
  [sym_name] = sym_name,
  [sym_name_start] = sym_name_start,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_type] = sym_type,
  [sym_item] = sym_item,
  [sym_enum_item] = sym_enum_item,
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
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
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
  [sym_keyword_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_enum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_token1] = {
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
  [sym_keyword_def] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
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
  [sym_enum_block] = {
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
  [sym_enum_item] = {
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
  [aux_sym_enum_block_repeat1] = {
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
  [4] = 4,
  [5] = 4,
  [6] = 3,
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
  [29] = 11,
  [30] = 30,
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
  [41] = 16,
  [42] = 42,
  [43] = 19,
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
  [59] = 59,
  [60] = 60,
  [61] = 54,
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 57,
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 52,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 82,
  [111] = 89,
  [112] = 90,
  [113] = 91,
  [114] = 108,
  [115] = 95,
  [116] = 86,
  [117] = 85,
  [118] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(224);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == 'P') ADVANCE(237);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == '`') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(135);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'N') ADVANCE(173);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '`') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '[') ADVANCE(150);
      if (lookahead == '`') ADVANCE(143);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(142);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(264);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'j') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 73:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == ',') ADVANCE(151);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(241);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(77);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_keyword_ref);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_keyword_enum);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(264);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(11);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(11);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(264);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'A') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'E') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'E') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'R') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'S') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'U') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '_') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'd') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'j') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'k') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'q') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == 'y') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 99},
  [6] = {.lex_state = 99},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 99},
  [9] = {.lex_state = 99},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 99},
  [21] = {.lex_state = 99},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 99},
  [33] = {.lex_state = 99},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 99},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 99},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 99},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 99},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 99},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 99},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 140},
  [85] = {.lex_state = 140},
  [86] = {.lex_state = 140},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 148},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 148},
  [116] = {.lex_state = 140},
  [117] = {.lex_state = 140},
  [118] = {.lex_state = 140},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [sym_keyword_ref] = ACTIONS(1),
    [sym_keyword_enum] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_reference_token1] = ACTIONS(1),
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
    [sym_source] = STATE(106),
    [sym_definition] = STATE(22),
    [sym_keyword_def] = STATE(69),
    [sym_reference] = STATE(22),
    [sym_enum] = STATE(22),
    [aux_sym_source_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(7),
    [sym_keyword_ref] = ACTIONS(11),
    [sym_keyword_enum] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym_default_start,
    ACTIONS(21), 1,
      anon_sym_name,
    ACTIONS(24), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_setting_repeat1,
    STATE(78), 1,
      sym_name_start,
    STATE(114), 1,
      sym_note_start,
    ACTIONS(15), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(26), 8,
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
    ACTIONS(31), 1,
      sym_default_start,
    ACTIONS(33), 1,
      anon_sym_name,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_setting_repeat1,
    STATE(78), 1,
      sym_name_start,
    STATE(114), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(37), 8,
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
    ACTIONS(31), 1,
      sym_default_start,
    ACTIONS(33), 1,
      anon_sym_name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_setting_repeat1,
    STATE(78), 1,
      sym_name_start,
    STATE(114), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(37), 8,
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
    ACTIONS(31), 1,
      sym_default_start,
    ACTIONS(33), 1,
      anon_sym_name,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_setting_repeat1,
    STATE(78), 1,
      sym_name_start,
    STATE(114), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(37), 8,
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
    ACTIONS(31), 1,
      sym_default_start,
    ACTIONS(33), 1,
      anon_sym_name,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_setting_repeat1,
    STATE(78), 1,
      sym_name_start,
    STATE(114), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(17), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(37), 8,
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
  [236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      aux_sym_number_repeat1,
    ACTIONS(49), 14,
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
    ACTIONS(54), 1,
      anon_sym_COLON,
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
  [285] = 2,
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
  [305] = 2,
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
  [325] = 2,
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
  [345] = 2,
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
  [365] = 11,
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
    STATE(10), 1,
      sym_value,
    ACTIONS(66), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(13), 3,
      sym_number,
      sym_string,
      sym_expression,
  [403] = 11,
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
    STATE(12), 1,
      sym_value,
    ACTIONS(66), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(13), 3,
      sym_number,
      sym_string,
      sym_expression,
  [441] = 2,
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
  [461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(82), 13,
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
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 14,
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
    ACTIONS(24), 13,
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
  [542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_Table,
    ACTIONS(96), 1,
      sym_keyword_ref,
    ACTIONS(99), 1,
      sym_keyword_enum,
    STATE(69), 1,
      sym_keyword_def,
    ACTIONS(90), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(21), 4,
      sym_definition,
      sym_reference,
      sym_enum,
      aux_sym_source_repeat1,
  [571] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(11), 1,
      sym_keyword_ref,
    ACTIONS(13), 1,
      sym_keyword_enum,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_keyword_def,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(21), 4,
      sym_definition,
      sym_reference,
      sym_enum,
      aux_sym_source_repeat1,
  [600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_indexes,
    STATE(108), 1,
      sym_note_start,
    ACTIONS(106), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(23), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [626] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_indexes,
    STATE(108), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(23), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [652] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_indexes,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_note_start,
    ACTIONS(29), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(24), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [678] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_BQUOTE,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(26), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [702] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_BQUOTE,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(28), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [726] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_BQUOTE,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 7,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_Table,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
      aux_sym_reference_token1,
  [778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_setting,
    ACTIONS(148), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_Table,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_Table,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_Table,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_Table,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_Table,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_Table,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_Table,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_Table,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
      sym_keyword_ref,
      sym_keyword_enum,
  [906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_composite_index_repeat1,
    STATE(59), 1,
      sym_expression,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(80), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(190), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(86), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(198), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [988] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_BQUOTE,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_composite_index_repeat1,
    STATE(59), 1,
      sym_expression,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [1018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(212), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(216), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(220), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_composite_index_repeat1,
    STATE(59), 1,
      sym_expression,
  [1076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(53), 2,
      sym_enum_item,
      aux_sym_enum_block_repeat1,
  [1100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(43), 1,
      sym_string,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(58), 2,
      sym_enum_item,
      aux_sym_enum_block_repeat1,
  [1130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_as,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
    STATE(76), 1,
      sym__alias,
  [1146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(53), 2,
      sym_enum_item,
      aux_sym_enum_block_repeat1,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(251), 3,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_RPAREN,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(19), 1,
      sym_string,
  [1208] = 4,
    ACTIONS(257), 1,
      aux_sym_item_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_comment,
    STATE(104), 1,
      sym_setting,
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DOT,
    ACTIONS(265), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_RPAREN,
  [1241] = 4,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_type_token2,
    STATE(67), 1,
      sym_type,
  [1254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(39), 1,
      sym_column,
    STATE(88), 1,
      sym_schema,
  [1267] = 4,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_item_token1,
    STATE(96), 1,
      sym_setting,
  [1280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(88), 1,
      sym_schema,
    STATE(92), 1,
      sym_column,
  [1293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(56), 1,
      sym_table,
    STATE(94), 1,
      sym_schema,
  [1306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_enum_block,
  [1324] = 3,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym_item_token1,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_index_block,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [1370] = 3,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_item_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
  [1401] = 2,
    ACTIONS(247), 1,
      aux_sym_item_token1,
    ACTIONS(261), 1,
      sym_comment,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_BQUOTE,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [1422] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_string_token1,
  [1429] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(307), 1,
      aux_sym_string_token1,
  [1436] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(309), 1,
      aux_sym_string_token1,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_reference_token1,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOT,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
  [1499] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_expression_token1,
  [1506] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym_item_token1,
  [1513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DOT,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [1534] = 2,
    ACTIONS(226), 1,
      aux_sym_item_token1,
    ACTIONS(261), 1,
      sym_comment,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COLON,
  [1555] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_type_token1,
  [1562] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_item_token1,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COLON,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_BQUOTE,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1639] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym_expression_token1,
  [1646] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(357), 1,
      aux_sym_string_token1,
  [1653] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(359), 1,
      aux_sym_string_token1,
  [1660] = 2,
    ACTIONS(261), 1,
      sym_comment,
    ACTIONS(361), 1,
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
  [SMALL_STATE(14)] = 365,
  [SMALL_STATE(15)] = 403,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 461,
  [SMALL_STATE(18)] = 483,
  [SMALL_STATE(19)] = 503,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 571,
  [SMALL_STATE(23)] = 600,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 702,
  [SMALL_STATE(28)] = 726,
  [SMALL_STATE(29)] = 750,
  [SMALL_STATE(30)] = 763,
  [SMALL_STATE(31)] = 778,
  [SMALL_STATE(32)] = 794,
  [SMALL_STATE(33)] = 808,
  [SMALL_STATE(34)] = 822,
  [SMALL_STATE(35)] = 836,
  [SMALL_STATE(36)] = 850,
  [SMALL_STATE(37)] = 864,
  [SMALL_STATE(38)] = 878,
  [SMALL_STATE(39)] = 892,
  [SMALL_STATE(40)] = 906,
  [SMALL_STATE(41)] = 925,
  [SMALL_STATE(42)] = 938,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 964,
  [SMALL_STATE(45)] = 975,
  [SMALL_STATE(46)] = 988,
  [SMALL_STATE(47)] = 1007,
  [SMALL_STATE(48)] = 1018,
  [SMALL_STATE(49)] = 1031,
  [SMALL_STATE(50)] = 1044,
  [SMALL_STATE(51)] = 1057,
  [SMALL_STATE(52)] = 1076,
  [SMALL_STATE(53)] = 1086,
  [SMALL_STATE(54)] = 1100,
  [SMALL_STATE(55)] = 1116,
  [SMALL_STATE(56)] = 1130,
  [SMALL_STATE(57)] = 1146,
  [SMALL_STATE(58)] = 1156,
  [SMALL_STATE(59)] = 1170,
  [SMALL_STATE(60)] = 1182,
  [SMALL_STATE(61)] = 1192,
  [SMALL_STATE(62)] = 1208,
  [SMALL_STATE(63)] = 1221,
  [SMALL_STATE(64)] = 1232,
  [SMALL_STATE(65)] = 1241,
  [SMALL_STATE(66)] = 1254,
  [SMALL_STATE(67)] = 1267,
  [SMALL_STATE(68)] = 1280,
  [SMALL_STATE(69)] = 1293,
  [SMALL_STATE(70)] = 1306,
  [SMALL_STATE(71)] = 1314,
  [SMALL_STATE(72)] = 1324,
  [SMALL_STATE(73)] = 1334,
  [SMALL_STATE(74)] = 1342,
  [SMALL_STATE(75)] = 1352,
  [SMALL_STATE(76)] = 1360,
  [SMALL_STATE(77)] = 1370,
  [SMALL_STATE(78)] = 1380,
  [SMALL_STATE(79)] = 1387,
  [SMALL_STATE(80)] = 1394,
  [SMALL_STATE(81)] = 1401,
  [SMALL_STATE(82)] = 1408,
  [SMALL_STATE(83)] = 1415,
  [SMALL_STATE(84)] = 1422,
  [SMALL_STATE(85)] = 1429,
  [SMALL_STATE(86)] = 1436,
  [SMALL_STATE(87)] = 1443,
  [SMALL_STATE(88)] = 1450,
  [SMALL_STATE(89)] = 1457,
  [SMALL_STATE(90)] = 1464,
  [SMALL_STATE(91)] = 1471,
  [SMALL_STATE(92)] = 1478,
  [SMALL_STATE(93)] = 1485,
  [SMALL_STATE(94)] = 1492,
  [SMALL_STATE(95)] = 1499,
  [SMALL_STATE(96)] = 1506,
  [SMALL_STATE(97)] = 1513,
  [SMALL_STATE(98)] = 1520,
  [SMALL_STATE(99)] = 1527,
  [SMALL_STATE(100)] = 1534,
  [SMALL_STATE(101)] = 1541,
  [SMALL_STATE(102)] = 1548,
  [SMALL_STATE(103)] = 1555,
  [SMALL_STATE(104)] = 1562,
  [SMALL_STATE(105)] = 1569,
  [SMALL_STATE(106)] = 1576,
  [SMALL_STATE(107)] = 1583,
  [SMALL_STATE(108)] = 1590,
  [SMALL_STATE(109)] = 1597,
  [SMALL_STATE(110)] = 1604,
  [SMALL_STATE(111)] = 1611,
  [SMALL_STATE(112)] = 1618,
  [SMALL_STATE(113)] = 1625,
  [SMALL_STATE(114)] = 1632,
  [SMALL_STATE(115)] = 1639,
  [SMALL_STATE(116)] = 1646,
  [SMALL_STATE(117)] = 1653,
  [SMALL_STATE(118)] = 1660,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(83),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(102),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_start, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kind, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(101),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(101),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(109),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(107),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(95),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(31),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_block, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(95),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(59),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2), SHIFT_REPEAT(62),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_def, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [341] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
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
