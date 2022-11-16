#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
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
  aux_sym_note_start_token2 = 9,
  sym_default_start = 10,
  aux_sym_value_token1 = 11,
  aux_sym_value_token2 = 12,
  aux_sym_value_token3 = 13,
  aux_sym_number_token1 = 14,
  anon_sym_blob = 15,
  aux_sym_type_token1 = 16,
  anon_sym_bytea = 17,
  aux_sym_type_token2 = 18,
  anon_sym_charactervarying = 19,
  aux_sym_type_token3 = 20,
  anon_sym_double = 21,
  anon_sym_decimal = 22,
  aux_sym_type_token4 = 23,
  anon_sym_geometry = 24,
  anon_sym_geography = 25,
  aux_sym_type_token5 = 26,
  aux_sym_type_token6 = 27,
  aux_sym_type_token7 = 28,
  aux_sym_type_token8 = 29,
  anon_sym_integer = 30,
  anon_sym_long = 31,
  anon_sym_money = 32,
  anon_sym_number = 33,
  anon_sym_numeric = 34,
  anon_sym_ntext = 35,
  anon_sym_precision = 36,
  anon_sym_rowid = 37,
  anon_sym_real = 38,
  aux_sym_type_token9 = 39,
  aux_sym_type_token10 = 40,
  anon_sym_text = 41,
  anon_sym_time = 42,
  aux_sym_type_token11 = 43,
  aux_sym_type_token12 = 44,
  anon_sym_uuid = 45,
  aux_sym_type_token13 = 46,
  anon_sym_xml = 47,
  aux_sym_type_token14 = 48,
  aux_sym_item_token1 = 49,
  anon_sym_SQUOTE = 50,
  aux_sym_string_token1 = 51,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 52,
  anon_sym_BQUOTE = 53,
  aux_sym_expression_token1 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_COMMA = 56,
  anon_sym_RBRACK = 57,
  anon_sym_increment = 58,
  anon_sym_primarykey = 59,
  anon_sym_pk = 60,
  anon_sym_null = 61,
  anon_sym_notnull = 62,
  anon_sym_unique = 63,
  anon_sym_headercolor = 64,
  anon_sym_type = 65,
  anon_sym_name = 66,
  anon_sym_DQUOTE = 67,
  sym_comment = 68,
  sym_source = 69,
  sym_definition = 70,
  sym_keyword = 71,
  sym__alias = 72,
  sym_block = 73,
  sym_note = 74,
  sym_note_start = 75,
  sym_default = 76,
  sym_value = 77,
  sym_number = 78,
  sym_type = 79,
  sym_item = 80,
  sym_string = 81,
  sym_expression = 82,
  sym_setting = 83,
  sym_setting_kind = 84,
  sym_identifier = 85,
  aux_sym_source_repeat1 = 86,
  aux_sym_block_repeat1 = 87,
  aux_sym_number_repeat1 = 88,
  aux_sym_setting_repeat1 = 89,
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
  [aux_sym_note_start_token2] = "note_start_token2",
  [sym_default_start] = "default_start",
  [aux_sym_value_token1] = "value_token1",
  [aux_sym_value_token2] = "value_token2",
  [aux_sym_value_token3] = "value_token3",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_blob] = "blob",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_bytea] = "bytea",
  [aux_sym_type_token2] = "type_token2",
  [anon_sym_charactervarying] = "character varying",
  [aux_sym_type_token3] = "type_token3",
  [anon_sym_double] = "double",
  [anon_sym_decimal] = "decimal",
  [aux_sym_type_token4] = "type_token4",
  [anon_sym_geometry] = "geometry",
  [anon_sym_geography] = "geography",
  [aux_sym_type_token5] = "type_token5",
  [aux_sym_type_token6] = "type_token6",
  [aux_sym_type_token7] = "type_token7",
  [aux_sym_type_token8] = "type_token8",
  [anon_sym_integer] = "integer",
  [anon_sym_long] = "long",
  [anon_sym_money] = "money",
  [anon_sym_number] = "number",
  [anon_sym_numeric] = "numeric",
  [anon_sym_ntext] = "ntext",
  [anon_sym_precision] = "precision",
  [anon_sym_rowid] = "rowid",
  [anon_sym_real] = "real",
  [aux_sym_type_token9] = "type_token9",
  [aux_sym_type_token10] = "type_token10",
  [anon_sym_text] = "text",
  [anon_sym_time] = "time",
  [aux_sym_type_token11] = "type_token11",
  [aux_sym_type_token12] = "type_token12",
  [anon_sym_uuid] = "uuid",
  [aux_sym_type_token13] = "type_token13",
  [anon_sym_xml] = "xml",
  [aux_sym_type_token14] = "type_token14",
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
  [anon_sym_name] = "name",
  [anon_sym_DQUOTE] = "\"",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_definition] = "definition",
  [sym_keyword] = "keyword",
  [sym__alias] = "_alias",
  [sym_block] = "block",
  [sym_note] = "note",
  [sym_note_start] = "note_start",
  [sym_default] = "default",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_type] = "type",
  [sym_item] = "item",
  [sym_string] = "string",
  [sym_expression] = "expression",
  [sym_setting] = "setting",
  [sym_setting_kind] = "setting_kind",
  [sym_identifier] = "identifier",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_number_repeat1] = "number_repeat1",
  [aux_sym_setting_repeat1] = "setting_repeat1",
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
  [aux_sym_note_start_token2] = aux_sym_note_start_token2,
  [sym_default_start] = sym_default_start,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [aux_sym_value_token2] = aux_sym_value_token2,
  [aux_sym_value_token3] = aux_sym_value_token3,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_blob] = anon_sym_blob,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_bytea] = anon_sym_bytea,
  [aux_sym_type_token2] = aux_sym_type_token2,
  [anon_sym_charactervarying] = anon_sym_charactervarying,
  [aux_sym_type_token3] = aux_sym_type_token3,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_decimal] = anon_sym_decimal,
  [aux_sym_type_token4] = aux_sym_type_token4,
  [anon_sym_geometry] = anon_sym_geometry,
  [anon_sym_geography] = anon_sym_geography,
  [aux_sym_type_token5] = aux_sym_type_token5,
  [aux_sym_type_token6] = aux_sym_type_token6,
  [aux_sym_type_token7] = aux_sym_type_token7,
  [aux_sym_type_token8] = aux_sym_type_token8,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_money] = anon_sym_money,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_numeric] = anon_sym_numeric,
  [anon_sym_ntext] = anon_sym_ntext,
  [anon_sym_precision] = anon_sym_precision,
  [anon_sym_rowid] = anon_sym_rowid,
  [anon_sym_real] = anon_sym_real,
  [aux_sym_type_token9] = aux_sym_type_token9,
  [aux_sym_type_token10] = aux_sym_type_token10,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_time] = anon_sym_time,
  [aux_sym_type_token11] = aux_sym_type_token11,
  [aux_sym_type_token12] = aux_sym_type_token12,
  [anon_sym_uuid] = anon_sym_uuid,
  [aux_sym_type_token13] = aux_sym_type_token13,
  [anon_sym_xml] = anon_sym_xml,
  [aux_sym_type_token14] = aux_sym_type_token14,
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
  [anon_sym_name] = anon_sym_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_definition] = sym_definition,
  [sym_keyword] = sym_keyword,
  [sym__alias] = sym__alias,
  [sym_block] = sym_block,
  [sym_note] = sym_note,
  [sym_note_start] = sym_note_start,
  [sym_default] = sym_default,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_type] = sym_type,
  [sym_item] = sym_item,
  [sym_string] = sym_string,
  [sym_expression] = sym_expression,
  [sym_setting] = sym_setting,
  [sym_setting_kind] = sym_setting_kind,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_number_repeat1] = aux_sym_number_repeat1,
  [aux_sym_setting_repeat1] = aux_sym_setting_repeat1,
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
  [aux_sym_note_start_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_default_start] = {
    .visible = true,
    .named = true,
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
  [anon_sym_blob] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bytea] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_charactervarying] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_geometry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geography] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_money] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numeric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ntext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rowid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token14] = {
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
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_default] = {
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
  [sym_identifier] = {
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
  [30] = 13,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 14,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 4,
  [44] = 6,
  [45] = 45,
  [46] = 5,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 52,
  [67] = 57,
  [68] = 58,
  [69] = 55,
  [70] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(257);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(196);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '[') ADVANCE(382);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead == '`') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'j') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(150);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(366);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(264);
      if (lookahead == '[') ADVANCE(382);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'j') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == '`') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(374);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(403);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == ']') ADVANCE(384);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(322);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(324);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(346);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 126:
      if (lookahead == 'j') ADVANCE(87);
      END_STATE();
    case 127:
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 189:
      if (lookahead == 'q') ADVANCE(238);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 243:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 245:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(218);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(116);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 254:
      if (lookahead == 'z') ADVANCE(184);
      END_STATE();
    case 255:
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(64);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(203);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'c') ADVANCE(300);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'k') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'q') ADVANCE(313);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'y') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'y') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_default_start);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_blob);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_bytea);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_charactervarying);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_type_token3);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_type_token4);
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_geometry);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_geography);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_type_token6);
      if (lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_type_token7);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(344);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_type_token8);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_money);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_ntext);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_precision);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_rowid);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_type_token9);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_type_token9);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_type_token10);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_type_token11);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_type_token11);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == 'z') ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_type_token12);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_type_token13);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_type_token14);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(366);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '/') ADVANCE(373);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_increment);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_pk);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_headercolor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 380},
  [54] = {.lex_state = 372},
  [55] = {.lex_state = 372},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 372},
  [70] = {.lex_state = 372},
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
    [sym_default_start] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [aux_sym_value_token2] = ACTIONS(1),
    [aux_sym_value_token3] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_blob] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [anon_sym_bytea] = ACTIONS(1),
    [aux_sym_type_token2] = ACTIONS(1),
    [anon_sym_charactervarying] = ACTIONS(1),
    [aux_sym_type_token3] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [aux_sym_type_token4] = ACTIONS(1),
    [anon_sym_geometry] = ACTIONS(1),
    [anon_sym_geography] = ACTIONS(1),
    [aux_sym_type_token5] = ACTIONS(1),
    [aux_sym_type_token6] = ACTIONS(1),
    [aux_sym_type_token7] = ACTIONS(1),
    [aux_sym_type_token8] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_money] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_numeric] = ACTIONS(1),
    [anon_sym_ntext] = ACTIONS(1),
    [anon_sym_precision] = ACTIONS(1),
    [anon_sym_rowid] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [aux_sym_type_token9] = ACTIONS(1),
    [aux_sym_type_token10] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [aux_sym_type_token11] = ACTIONS(1),
    [aux_sym_type_token12] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [aux_sym_type_token13] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [aux_sym_type_token14] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_headercolor] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(65),
    [sym_definition] = STATE(25),
    [sym_keyword] = STATE(41),
    [aux_sym_source_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      aux_sym_item_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    STATE(38), 1,
      sym_type,
    STATE(49), 1,
      sym_setting,
    ACTIONS(11), 33,
      anon_sym_blob,
      aux_sym_type_token1,
      anon_sym_bytea,
      aux_sym_type_token2,
      anon_sym_charactervarying,
      aux_sym_type_token3,
      anon_sym_double,
      anon_sym_decimal,
      aux_sym_type_token4,
      anon_sym_geometry,
      anon_sym_geography,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym_type_token8,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_money,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_precision,
      anon_sym_rowid,
      anon_sym_real,
      aux_sym_type_token9,
      aux_sym_type_token10,
      anon_sym_text,
      anon_sym_time,
      aux_sym_type_token11,
      aux_sym_type_token12,
      anon_sym_uuid,
      aux_sym_type_token13,
      anon_sym_xml,
  [51] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      aux_sym_item_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 34,
      anon_sym_blob,
      aux_sym_type_token1,
      anon_sym_bytea,
      aux_sym_type_token2,
      anon_sym_charactervarying,
      aux_sym_type_token3,
      anon_sym_double,
      anon_sym_decimal,
      aux_sym_type_token4,
      anon_sym_geometry,
      anon_sym_geography,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym_type_token8,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_money,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_precision,
      anon_sym_rowid,
      anon_sym_real,
      aux_sym_type_token9,
      aux_sym_type_token10,
      anon_sym_text,
      anon_sym_time,
      aux_sym_type_token11,
      aux_sym_type_token12,
      anon_sym_uuid,
      aux_sym_type_token13,
      anon_sym_xml,
      anon_sym_LBRACK,
  [100] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_item_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 34,
      anon_sym_blob,
      aux_sym_type_token1,
      anon_sym_bytea,
      aux_sym_type_token2,
      anon_sym_charactervarying,
      aux_sym_type_token3,
      anon_sym_double,
      anon_sym_decimal,
      aux_sym_type_token4,
      anon_sym_geometry,
      anon_sym_geography,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym_type_token8,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_money,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_precision,
      anon_sym_rowid,
      anon_sym_real,
      aux_sym_type_token9,
      aux_sym_type_token10,
      anon_sym_text,
      anon_sym_time,
      aux_sym_type_token11,
      aux_sym_type_token12,
      anon_sym_uuid,
      aux_sym_type_token13,
      anon_sym_xml,
      anon_sym_LBRACK,
  [146] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_item_token1,
    ACTIONS(27), 34,
      anon_sym_blob,
      aux_sym_type_token1,
      anon_sym_bytea,
      aux_sym_type_token2,
      anon_sym_charactervarying,
      aux_sym_type_token3,
      anon_sym_double,
      anon_sym_decimal,
      aux_sym_type_token4,
      anon_sym_geometry,
      anon_sym_geography,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym_type_token8,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_money,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_precision,
      anon_sym_rowid,
      anon_sym_real,
      aux_sym_type_token9,
      aux_sym_type_token10,
      anon_sym_text,
      anon_sym_time,
      aux_sym_type_token11,
      aux_sym_type_token12,
      anon_sym_uuid,
      aux_sym_type_token13,
      anon_sym_xml,
      anon_sym_LBRACK,
  [189] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_item_token1,
    ACTIONS(33), 34,
      anon_sym_blob,
      aux_sym_type_token1,
      anon_sym_bytea,
      aux_sym_type_token2,
      anon_sym_charactervarying,
      aux_sym_type_token3,
      anon_sym_double,
      anon_sym_decimal,
      aux_sym_type_token4,
      anon_sym_geometry,
      anon_sym_geography,
      aux_sym_type_token5,
      aux_sym_type_token6,
      aux_sym_type_token7,
      aux_sym_type_token8,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_money,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_precision,
      anon_sym_rowid,
      anon_sym_real,
      aux_sym_type_token9,
      aux_sym_type_token10,
      anon_sym_text,
      anon_sym_time,
      aux_sym_type_token11,
      aux_sym_type_token12,
      anon_sym_uuid,
      aux_sym_type_token13,
      anon_sym_xml,
      anon_sym_LBRACK,
  [232] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_default_start,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_setting_repeat1,
    STATE(68), 1,
      sym_note_start,
    ACTIONS(37), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(48), 2,
      anon_sym_primarykey,
      anon_sym_notnull,
    STATE(15), 3,
      sym_note,
      sym_default,
      sym_setting_kind,
    ACTIONS(45), 7,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_default_start,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_setting_repeat1,
    STATE(68), 1,
      sym_note_start,
    ACTIONS(51), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(59), 2,
      anon_sym_primarykey,
      anon_sym_notnull,
    STATE(15), 3,
      sym_note,
      sym_default,
      sym_setting_kind,
    ACTIONS(57), 7,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [308] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_default_start,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_setting_repeat1,
    STATE(68), 1,
      sym_note_start,
    ACTIONS(51), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(59), 2,
      anon_sym_primarykey,
      anon_sym_notnull,
    STATE(15), 3,
      sym_note,
      sym_default,
      sym_setting_kind,
    ACTIONS(57), 7,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_number_token1,
    STATE(11), 1,
      aux_sym_number_repeat1,
    ACTIONS(67), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(63), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_number_token1,
    STATE(11), 1,
      aux_sym_number_repeat1,
    ACTIONS(74), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(69), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(76), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(80), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(84), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(92), 3,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(88), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(94), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(98), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(102), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(106), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [579] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_number_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      aux_sym_number_repeat1,
    STATE(12), 1,
      sym_value,
    ACTIONS(108), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(18), 3,
      sym_number,
      sym_string,
      sym_expression,
  [611] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_note_start_token1,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      aux_sym_note_start_token2,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(58), 1,
      sym_note_start,
    STATE(22), 3,
      sym_note,
      sym_item,
      aux_sym_block_repeat1,
  [638] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_note_start_token1,
    ACTIONS(120), 1,
      aux_sym_note_start_token2,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(58), 1,
      sym_note_start,
    STATE(23), 3,
      sym_note,
      sym_item,
      aux_sym_block_repeat1,
  [665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      aux_sym_note_start_token1,
    ACTIONS(131), 1,
      aux_sym_note_start_token2,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(58), 1,
      sym_note_start,
    STATE(23), 3,
      sym_note,
      sym_item,
      aux_sym_block_repeat1,
  [692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_Table,
    STATE(41), 1,
      sym_keyword,
    ACTIONS(139), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(24), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_keyword,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(24), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(149), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
  [746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_as,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    STATE(48), 1,
      sym__alias,
  [762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_Table,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_Table,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(169), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_Table,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(177), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [858] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_type_token14,
    ACTIONS(181), 1,
      aux_sym_item_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
  [871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [882] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_item_token1,
    STATE(51), 1,
      sym_setting,
  [895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(30), 1,
      sym_string,
  [908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(13), 1,
      sym_string,
  [921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_note_start_token2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_identifier,
  [934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_note_start_token2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_identifier,
  [947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      aux_sym_note_start_token2,
      anon_sym_DQUOTE,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [982] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_item_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [1002] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_item_token1,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [1016] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_item_token1,
  [1023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
  [1030] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_expression_token1,
  [1037] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_string_token1,
  [1044] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_string_token1,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_BQUOTE,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [1079] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_item_token1,
  [1086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [1093] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_item_token1,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_note_start_token2,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_note_start_token2,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [1142] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_string_token1,
  [1149] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 189,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 374,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 424,
  [SMALL_STATE(14)] = 446,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 514,
  [SMALL_STATE(18)] = 536,
  [SMALL_STATE(19)] = 558,
  [SMALL_STATE(20)] = 579,
  [SMALL_STATE(21)] = 611,
  [SMALL_STATE(22)] = 638,
  [SMALL_STATE(23)] = 665,
  [SMALL_STATE(24)] = 692,
  [SMALL_STATE(25)] = 713,
  [SMALL_STATE(26)] = 734,
  [SMALL_STATE(27)] = 746,
  [SMALL_STATE(28)] = 762,
  [SMALL_STATE(29)] = 774,
  [SMALL_STATE(30)] = 786,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 810,
  [SMALL_STATE(33)] = 822,
  [SMALL_STATE(34)] = 834,
  [SMALL_STATE(35)] = 846,
  [SMALL_STATE(36)] = 858,
  [SMALL_STATE(37)] = 871,
  [SMALL_STATE(38)] = 882,
  [SMALL_STATE(39)] = 895,
  [SMALL_STATE(40)] = 908,
  [SMALL_STATE(41)] = 921,
  [SMALL_STATE(42)] = 934,
  [SMALL_STATE(43)] = 947,
  [SMALL_STATE(44)] = 958,
  [SMALL_STATE(45)] = 966,
  [SMALL_STATE(46)] = 974,
  [SMALL_STATE(47)] = 982,
  [SMALL_STATE(48)] = 992,
  [SMALL_STATE(49)] = 1002,
  [SMALL_STATE(50)] = 1009,
  [SMALL_STATE(51)] = 1016,
  [SMALL_STATE(52)] = 1023,
  [SMALL_STATE(53)] = 1030,
  [SMALL_STATE(54)] = 1037,
  [SMALL_STATE(55)] = 1044,
  [SMALL_STATE(56)] = 1051,
  [SMALL_STATE(57)] = 1058,
  [SMALL_STATE(58)] = 1065,
  [SMALL_STATE(59)] = 1072,
  [SMALL_STATE(60)] = 1079,
  [SMALL_STATE(61)] = 1086,
  [SMALL_STATE(62)] = 1093,
  [SMALL_STATE(63)] = 1100,
  [SMALL_STATE(64)] = 1107,
  [SMALL_STATE(65)] = 1114,
  [SMALL_STATE(66)] = 1121,
  [SMALL_STATE(67)] = 1128,
  [SMALL_STATE(68)] = 1135,
  [SMALL_STATE(69)] = 1142,
  [SMALL_STATE(70)] = 1149,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_start, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(59),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(61),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(16),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_number_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_kind, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kind, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(45),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(45),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
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
