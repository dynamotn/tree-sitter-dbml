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
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  sym_default_start = 10,
  anon_sym_name = 11,
  aux_sym_value_token1 = 12,
  aux_sym_value_token2 = 13,
  aux_sym_value_token3 = 14,
  aux_sym_number_token1 = 15,
  anon_sym_blob = 16,
  aux_sym_type_token1 = 17,
  anon_sym_bytea = 18,
  aux_sym_type_token2 = 19,
  anon_sym_charactervarying = 20,
  aux_sym_type_token3 = 21,
  anon_sym_double = 22,
  anon_sym_decimal = 23,
  aux_sym_type_token4 = 24,
  anon_sym_geometry = 25,
  anon_sym_geography = 26,
  aux_sym_type_token5 = 27,
  aux_sym_type_token6 = 28,
  aux_sym_type_token7 = 29,
  aux_sym_type_token8 = 30,
  anon_sym_integer = 31,
  anon_sym_long = 32,
  anon_sym_money = 33,
  anon_sym_number = 34,
  anon_sym_numeric = 35,
  anon_sym_ntext = 36,
  anon_sym_precision = 37,
  anon_sym_rowid = 38,
  anon_sym_real = 39,
  aux_sym_type_token9 = 40,
  aux_sym_type_token10 = 41,
  anon_sym_text = 42,
  anon_sym_time = 43,
  aux_sym_type_token11 = 44,
  aux_sym_type_token12 = 45,
  anon_sym_uuid = 46,
  aux_sym_type_token13 = 47,
  anon_sym_xml = 48,
  aux_sym_type_token14 = 49,
  aux_sym_item_token1 = 50,
  anon_sym_SQUOTE = 51,
  aux_sym_string_token1 = 52,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 53,
  anon_sym_BQUOTE = 54,
  aux_sym_expression_token1 = 55,
  anon_sym_LBRACK = 56,
  anon_sym_COMMA = 57,
  anon_sym_RBRACK = 58,
  anon_sym_increment = 59,
  anon_sym_primarykey = 60,
  anon_sym_pk = 61,
  anon_sym_null = 62,
  anon_sym_notnull = 63,
  anon_sym_unique = 64,
  anon_sym_headercolor = 65,
  anon_sym_type = 66,
  sym_identifier = 67,
  sym_comment = 68,
  sym_indexes = 69,
  anon_sym_LPAREN = 70,
  anon_sym_RPAREN = 71,
  sym_source = 72,
  sym_definition = 73,
  sym_keyword = 74,
  sym__alias = 75,
  sym_block = 76,
  sym_note = 77,
  sym_note_start = 78,
  sym_default = 79,
  sym_name = 80,
  sym_name_start = 81,
  sym_value = 82,
  sym_number = 83,
  sym_type = 84,
  sym_item = 85,
  sym_string = 86,
  sym_expression = 87,
  sym_setting = 88,
  sym_setting_kind = 89,
  sym_index_definition = 90,
  sym_index_block = 91,
  sym_index = 92,
  sym_composite_index = 93,
  aux_sym_source_repeat1 = 94,
  aux_sym_block_repeat1 = 95,
  aux_sym_number_repeat1 = 96,
  aux_sym_setting_repeat1 = 97,
  aux_sym_index_block_repeat1 = 98,
  aux_sym_composite_index_repeat1 = 99,
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
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [4] = 4,
  [5] = 3,
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
  [29] = 29,
  [30] = 16,
  [31] = 31,
  [32] = 32,
  [33] = 15,
  [34] = 14,
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
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 45,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 48,
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
  [79] = 72,
  [80] = 65,
  [81] = 73,
  [82] = 62,
  [83] = 70,
  [84] = 63,
  [85] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(248);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(561);
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == 'I') ADVANCE(474);
      if (lookahead == 'N') ADVANCE(352);
      if (lookahead == 'P') ADVANCE(509);
      if (lookahead == 'T') ADVANCE(348);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'b') ADVANCE(435);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(417);
      if (lookahead == 'h') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == 'v') ADVANCE(361);
      if (lookahead == 'x') ADVANCE(467);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'j') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == 'N') ADVANCE(353);
      if (lookahead == 'T') ADVANCE(349);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '(') ADVANCE(561);
      if (lookahead == ')') ADVANCE(562);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(377);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(474);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(322);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(559);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(558);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(220);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(265);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 115:
      if (lookahead == 'j') ADVANCE(70);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 177:
      if (lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 230:
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 231:
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 232:
      if (lookahead == 'x') ADVANCE(201);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 234:
      if (lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 235:
      if (lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 236:
      if (lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 237:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 238:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 242:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 243:
      if (lookahead == 'z') ADVANCE(171);
      END_STATE();
    case 244:
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(53);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 246:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 247:
      if (eof) ADVANCE(248);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(515);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(186);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_blob);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_bytea);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_charactervarying);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_type_token3);
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_type_token3);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_type_token4);
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_geometry);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_geography);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_type_token6);
      if (lookahead == 'b') ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_type_token7);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_type_token7);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_type_token8);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_money);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_ntext);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_precision);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_rowid);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_type_token9);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_type_token9);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_type_token10);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_type_token11);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_type_token11);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'z') ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_type_token11);
      if (lookahead == 'z') ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_type_token12);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_type_token13);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_type_token14);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(321);
      if (lookahead == '\'') ADVANCE(559);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '`') ADVANCE(559);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(329);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'L') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'L') ADVANCE(346);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'S') ADVANCE(344);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'U') ADVANCE(343);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'U') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'U') ADVANCE(347);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '_') ADVANCE(534);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead == 'v') ADVANCE(361);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'b') ADVANCE(464);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'b') ADVANCE(376);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'b') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'b') ADVANCE(466);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(438);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(439);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(539);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(419);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == 'y') ADVANCE(500);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(370);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(441);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(292);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(516);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'g') ADVANCE(422);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(553);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(372);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'y') ADVANCE(540);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'j') ADVANCE(415);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'k') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(381);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(497);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(400);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'q') ADVANCE(544);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(291);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(490);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(366);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(498);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(399);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(382);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(527);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(529);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(416);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(293);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(283);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(442);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(501);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(392);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 247},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 247},
  [4] = {.lex_state = 247},
  [5] = {.lex_state = 247},
  [6] = {.lex_state = 247},
  [7] = {.lex_state = 247},
  [8] = {.lex_state = 247},
  [9] = {.lex_state = 247},
  [10] = {.lex_state = 247},
  [11] = {.lex_state = 247},
  [12] = {.lex_state = 247},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 247},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 247},
  [17] = {.lex_state = 247},
  [18] = {.lex_state = 247},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 247},
  [29] = {.lex_state = 247},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 247},
  [47] = {.lex_state = 247},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 247},
  [51] = {.lex_state = 247},
  [52] = {.lex_state = 247},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 320},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 328},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 320},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 328},
  [84] = {.lex_state = 320},
  [85] = {.lex_state = 320},
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
    [anon_sym_blob] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [anon_sym_bytea] = ACTIONS(1),
    [aux_sym_type_token2] = ACTIONS(1),
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
    [anon_sym_uuid] = ACTIONS(1),
    [aux_sym_type_token13] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
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
    [sym_source] = STATE(78),
    [sym_definition] = STATE(29),
    [sym_keyword] = STATE(76),
    [aux_sym_source_repeat1] = STATE(29),
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
    STATE(54), 1,
      sym_type,
    STATE(75), 1,
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
  [51] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_default_start,
    ACTIONS(23), 1,
      anon_sym_name,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_setting_repeat1,
    STATE(67), 1,
      sym_name_start,
    STATE(82), 1,
      sym_note_start,
    ACTIONS(19), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(18), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(27), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [93] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_default_start,
    ACTIONS(23), 1,
      anon_sym_name,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_setting_repeat1,
    STATE(67), 1,
      sym_name_start,
    STATE(82), 1,
      sym_note_start,
    ACTIONS(19), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(18), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(27), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [135] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_default_start,
    ACTIONS(23), 1,
      anon_sym_name,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_setting_repeat1,
    STATE(67), 1,
      sym_name_start,
    STATE(82), 1,
      sym_note_start,
    ACTIONS(19), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(18), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(27), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [177] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_default_start,
    ACTIONS(23), 1,
      anon_sym_name,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_setting_repeat1,
    STATE(67), 1,
      sym_name_start,
    STATE(82), 1,
      sym_note_start,
    ACTIONS(19), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(18), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(27), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [219] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym_default_start,
    ACTIONS(41), 1,
      anon_sym_name,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_setting_repeat1,
    STATE(67), 1,
      sym_name_start,
    STATE(82), 1,
      sym_note_start,
    ACTIONS(35), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(18), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(46), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    STATE(9), 1,
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
  [287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    STATE(9), 1,
      aux_sym_number_repeat1,
    ACTIONS(53), 14,
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
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_COLON,
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
  [336] = 2,
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
  [356] = 2,
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
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 14,
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
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 14,
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
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 14,
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
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 14,
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
  [456] = 2,
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
  [476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(74), 13,
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
  [498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_token1,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(86), 1,
      anon_sym_BQUOTE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_number_repeat1,
    STATE(12), 1,
      sym_value,
    ACTIONS(78), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(11), 3,
      sym_number,
      sym_string,
      sym_expression,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 13,
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
  [552] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_number_token1,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(86), 1,
      anon_sym_BQUOTE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_number_repeat1,
    STATE(13), 1,
      sym_value,
    ACTIONS(78), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(11), 3,
      sym_number,
      sym_string,
      sym_expression,
  [587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      sym_indexes,
    STATE(62), 1,
      sym_note_start,
    ACTIONS(19), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(23), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      sym_indexes,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_note_start,
    ACTIONS(19), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(24), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [639] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_indexes,
    STATE(62), 1,
      sym_note_start,
    ACTIONS(100), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(24), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [665] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(25), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [689] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    STATE(27), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [713] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_Table,
    STATE(76), 1,
      sym_keyword,
    ACTIONS(132), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(28), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_keyword,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(28), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 6,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_setting,
    ACTIONS(140), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(144), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(70), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_BQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(162), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(166), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(35), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(174), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(188), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_as,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    STATE(58), 1,
      sym__alias,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_Table,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_Table,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_Table,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_Table,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(15), 1,
      sym_string,
  [1091] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_item_token1,
    STATE(66), 1,
      sym_setting,
  [1104] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_type_token14,
    ACTIONS(222), 1,
      aux_sym_item_token1,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
  [1117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(33), 1,
      sym_string,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_index_block,
  [1140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [1150] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_item_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
  [1167] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_item_token1,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COLON,
  [1181] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_string_token1,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [1195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
  [1202] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_item_token1,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [1216] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_item_token1,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1230] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_expression_token1,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_identifier,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_BQUOTE,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
  [1265] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(218), 1,
      aux_sym_item_token1,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
  [1279] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym_string_token1,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [1321] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_expression_token1,
  [1328] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_string_token1,
  [1335] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 376,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 436,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 476,
  [SMALL_STATE(19)] = 498,
  [SMALL_STATE(20)] = 533,
  [SMALL_STATE(21)] = 552,
  [SMALL_STATE(22)] = 587,
  [SMALL_STATE(23)] = 613,
  [SMALL_STATE(24)] = 639,
  [SMALL_STATE(25)] = 665,
  [SMALL_STATE(26)] = 689,
  [SMALL_STATE(27)] = 713,
  [SMALL_STATE(28)] = 737,
  [SMALL_STATE(29)] = 758,
  [SMALL_STATE(30)] = 779,
  [SMALL_STATE(31)] = 791,
  [SMALL_STATE(32)] = 807,
  [SMALL_STATE(33)] = 820,
  [SMALL_STATE(34)] = 833,
  [SMALL_STATE(35)] = 846,
  [SMALL_STATE(36)] = 863,
  [SMALL_STATE(37)] = 874,
  [SMALL_STATE(38)] = 887,
  [SMALL_STATE(39)] = 900,
  [SMALL_STATE(40)] = 917,
  [SMALL_STATE(41)] = 930,
  [SMALL_STATE(42)] = 941,
  [SMALL_STATE(43)] = 954,
  [SMALL_STATE(44)] = 971,
  [SMALL_STATE(45)] = 984,
  [SMALL_STATE(46)] = 994,
  [SMALL_STATE(47)] = 1010,
  [SMALL_STATE(48)] = 1022,
  [SMALL_STATE(49)] = 1032,
  [SMALL_STATE(50)] = 1042,
  [SMALL_STATE(51)] = 1054,
  [SMALL_STATE(52)] = 1066,
  [SMALL_STATE(53)] = 1078,
  [SMALL_STATE(54)] = 1091,
  [SMALL_STATE(55)] = 1104,
  [SMALL_STATE(56)] = 1117,
  [SMALL_STATE(57)] = 1130,
  [SMALL_STATE(58)] = 1140,
  [SMALL_STATE(59)] = 1150,
  [SMALL_STATE(60)] = 1160,
  [SMALL_STATE(61)] = 1167,
  [SMALL_STATE(62)] = 1174,
  [SMALL_STATE(63)] = 1181,
  [SMALL_STATE(64)] = 1188,
  [SMALL_STATE(65)] = 1195,
  [SMALL_STATE(66)] = 1202,
  [SMALL_STATE(67)] = 1209,
  [SMALL_STATE(68)] = 1216,
  [SMALL_STATE(69)] = 1223,
  [SMALL_STATE(70)] = 1230,
  [SMALL_STATE(71)] = 1237,
  [SMALL_STATE(72)] = 1244,
  [SMALL_STATE(73)] = 1251,
  [SMALL_STATE(74)] = 1258,
  [SMALL_STATE(75)] = 1265,
  [SMALL_STATE(76)] = 1272,
  [SMALL_STATE(77)] = 1279,
  [SMALL_STATE(78)] = 1286,
  [SMALL_STATE(79)] = 1293,
  [SMALL_STATE(80)] = 1300,
  [SMALL_STATE(81)] = 1307,
  [SMALL_STATE(82)] = 1314,
  [SMALL_STATE(83)] = 1321,
  [SMALL_STATE(84)] = 1328,
  [SMALL_STATE(85)] = 1335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(64),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(69),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(9),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_start, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kind, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(70),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(31),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(71),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(71),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(70),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(35),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [264] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
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
