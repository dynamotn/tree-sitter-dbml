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
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
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
  anon_sym_DQUOTE = 16,
  anon_sym_binary = 17,
  anon_sym_blob = 18,
  aux_sym_type_token1 = 19,
  anon_sym_bytea = 20,
  aux_sym_type_token2 = 21,
  anon_sym_charactervarying = 22,
  aux_sym_type_token3 = 23,
  anon_sym_double = 24,
  anon_sym_decimal = 25,
  aux_sym_type_token4 = 26,
  anon_sym_geometry = 27,
  anon_sym_geography = 28,
  aux_sym_type_token5 = 29,
  aux_sym_type_token6 = 30,
  aux_sym_type_token7 = 31,
  aux_sym_type_token8 = 32,
  anon_sym_integer = 33,
  anon_sym_long = 34,
  anon_sym_money = 35,
  anon_sym_number = 36,
  anon_sym_numeric = 37,
  anon_sym_ntext = 38,
  anon_sym_precision = 39,
  anon_sym_rowid = 40,
  anon_sym_real = 41,
  aux_sym_type_token9 = 42,
  aux_sym_type_token10 = 43,
  anon_sym_text = 44,
  anon_sym_time = 45,
  aux_sym_type_token11 = 46,
  aux_sym_type_token12 = 47,
  anon_sym_uuid = 48,
  aux_sym_type_token13 = 49,
  anon_sym_xml = 50,
  aux_sym_type_token14 = 51,
  aux_sym_item_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_token1 = 54,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 55,
  anon_sym_BQUOTE = 56,
  aux_sym_expression_token1 = 57,
  anon_sym_LBRACK = 58,
  anon_sym_COMMA = 59,
  anon_sym_RBRACK = 60,
  anon_sym_increment = 61,
  anon_sym_primarykey = 62,
  anon_sym_pk = 63,
  anon_sym_null = 64,
  anon_sym_notnull = 65,
  anon_sym_unique = 66,
  anon_sym_headercolor = 67,
  anon_sym_type = 68,
  sym_identifier = 69,
  sym_comment = 70,
  sym_indexes = 71,
  anon_sym_LPAREN = 72,
  anon_sym_RPAREN = 73,
  sym_source = 74,
  sym_definition = 75,
  sym_keyword = 76,
  sym__alias = 77,
  sym_block = 78,
  sym_note = 79,
  sym_note_start = 80,
  sym_default = 81,
  sym_name = 82,
  sym_name_start = 83,
  sym_value = 84,
  sym_number = 85,
  sym_type = 86,
  sym_item = 87,
  sym_string = 88,
  sym_expression = 89,
  sym_setting = 90,
  sym_setting_kind = 91,
  sym_index_definition = 92,
  sym_index_block = 93,
  sym_index = 94,
  sym_composite_index = 95,
  aux_sym_source_repeat1 = 96,
  aux_sym_block_repeat1 = 97,
  aux_sym_number_repeat1 = 98,
  aux_sym_setting_repeat1 = 99,
  aux_sym_index_block_repeat1 = 100,
  aux_sym_composite_index_repeat1 = 101,
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
  [anon_sym_binary] = "binary",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_binary] = anon_sym_binary,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
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
  [5] = 5,
  [6] = 4,
  [7] = 5,
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
  [32] = 14,
  [33] = 33,
  [34] = 34,
  [35] = 12,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 16,
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
  [59] = 56,
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
  [74] = 46,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 48,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 77,
  [86] = 70,
  [87] = 79,
  [88] = 73,
  [89] = 69,
  [90] = 81,
  [91] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(259);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '(') ADVANCE(578);
      if (lookahead == ')') ADVANCE(579);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'F') ADVANCE(356);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(366);
      if (lookahead == 'P') ADVANCE(524);
      if (lookahead == 'T') ADVANCE(362);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'b') ADVANCE(450);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead == 'h') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'j') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(491);
      if (lookahead == 'v') ADVANCE(375);
      if (lookahead == 'x') ADVANCE(482);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'j') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(356);
      if (lookahead == 'N') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead == 'f') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '(') ADVANCE(578);
      if (lookahead == ')') ADVANCE(579);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(392);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(336);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(576);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(225);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 121:
      if (lookahead == 'j') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 123:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(255);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 185:
      if (lookahead == 'q') ADVANCE(237);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 240:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 241:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 242:
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 243:
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 245:
      if (lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(277);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 249:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 254:
      if (lookahead == 'z') ADVANCE(179);
      END_STATE();
    case 255:
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(55);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 257:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 258:
      if (eof) ADVANCE(259);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == 'P') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'j') ADVANCE(210);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'v') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(531);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(199);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_database_type);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_value_token2);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_value_token3);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_blob);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_bytea);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_charactervarying);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_type_token3);
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_type_token3);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_type_token4);
      if (lookahead == '4' ||
          lookahead == '8') ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_geometry);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_geography);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_type_token5);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_type_token6);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_type_token6);
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_type_token7);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_type_token7);
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_type_token7);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_type_token7);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(304);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_type_token8);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_money);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ntext);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_precision);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_rowid);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_type_token9);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_type_token9);
      if (lookahead == '2' ||
          lookahead == '4' ||
          lookahead == '8') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_type_token10);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(553);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_type_token11);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_type_token11);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == 'z') ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_type_token11);
      if (lookahead == 'z') ADVANCE(320);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_type_token12);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_type_token13);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_type_token14);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(10);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(576);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(332);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '`') ADVANCE(576);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(341);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(359);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(364);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'R') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'R') ADVANCE(365);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'S') ADVANCE(358);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'U') ADVANCE(357);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'U') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'U') ADVANCE(361);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '_') ADVANCE(551);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(508);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead == 'v') ADVANCE(375);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(481);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(534);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 't') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 'y') ADVANCE(515);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(306);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(532);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(437);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'h') ADVANCE(570);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == 'y') ADVANCE(556);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(517);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(509);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'j') ADVANCE(430);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(396);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(548);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(419);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(512);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(415);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(452);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == 'x') ADVANCE(573);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(447);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'q') ADVANCE(560);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 's') ADVANCE(418);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(572);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(513);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(421);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'w') ADVANCE(455);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'x') ADVANCE(543);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'x') ADVANCE(545);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'x') ADVANCE(431);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(307);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(277);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(296);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(457);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(516);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(407);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_indexes);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 258},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 258},
  [4] = {.lex_state = 258},
  [5] = {.lex_state = 258},
  [6] = {.lex_state = 258},
  [7] = {.lex_state = 258},
  [8] = {.lex_state = 258},
  [9] = {.lex_state = 258},
  [10] = {.lex_state = 258},
  [11] = {.lex_state = 258},
  [12] = {.lex_state = 258},
  [13] = {.lex_state = 258},
  [14] = {.lex_state = 258},
  [15] = {.lex_state = 258},
  [16] = {.lex_state = 258},
  [17] = {.lex_state = 258},
  [18] = {.lex_state = 258},
  [19] = {.lex_state = 258},
  [20] = {.lex_state = 258},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 258},
  [30] = {.lex_state = 258},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 258},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 258},
  [51] = {.lex_state = 258},
  [52] = {.lex_state = 258},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 258},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 334},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 342},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 334},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 342},
  [90] = {.lex_state = 334},
  [91] = {.lex_state = 334},
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
    [anon_sym_binary] = ACTIONS(1),
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
    [sym_source] = STATE(84),
    [sym_definition] = STATE(29),
    [sym_keyword] = STATE(82),
    [aux_sym_source_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(9),
    [anon_sym_TableGroup] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_item_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_comment,
    STATE(58), 1,
      sym_type,
    STATE(83), 1,
      sym_setting,
    ACTIONS(13), 34,
      anon_sym_binary,
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
  [55] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 5,
      aux_sym_type_token2,
      aux_sym_type_token7,
      aux_sym_type_token9,
      anon_sym_time,
      aux_sym_type_token11,
    ACTIONS(21), 29,
      anon_sym_binary,
      anon_sym_blob,
      aux_sym_type_token1,
      anon_sym_bytea,
      anon_sym_charactervarying,
      aux_sym_type_token3,
      anon_sym_double,
      anon_sym_decimal,
      aux_sym_type_token4,
      anon_sym_geometry,
      anon_sym_geography,
      aux_sym_type_token5,
      aux_sym_type_token6,
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
      aux_sym_type_token10,
      anon_sym_text,
      aux_sym_type_token12,
      anon_sym_uuid,
      aux_sym_type_token13,
      anon_sym_xml,
  [97] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_default_start,
    ACTIONS(29), 1,
      anon_sym_name,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_setting_repeat1,
    STATE(75), 1,
      sym_name_start,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(13), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(33), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [139] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_default_start,
    ACTIONS(29), 1,
      anon_sym_name,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_setting_repeat1,
    STATE(75), 1,
      sym_name_start,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(13), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(33), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [181] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_default_start,
    ACTIONS(29), 1,
      anon_sym_name,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_setting_repeat1,
    STATE(75), 1,
      sym_name_start,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(13), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(33), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [223] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_default_start,
    ACTIONS(29), 1,
      anon_sym_name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_setting_repeat1,
    STATE(75), 1,
      sym_name_start,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(13), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(33), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [265] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_default_start,
    ACTIONS(47), 1,
      anon_sym_name,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_setting_repeat1,
    STATE(75), 1,
      sym_name_start,
    STATE(88), 1,
      sym_note_start,
    ACTIONS(41), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(13), 4,
      sym_note,
      sym_default,
      sym_name,
      sym_setting_kind,
    ACTIONS(52), 8,
      anon_sym_increment,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_null,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
  [307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(9), 1,
      aux_sym_number_repeat1,
    ACTIONS(55), 14,
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
  [333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym_number_token1,
    STATE(9), 1,
      aux_sym_number_repeat1,
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
  [359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_COLON,
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
  [382] = 2,
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
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(70), 13,
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
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 14,
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
  [444] = 2,
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
  [464] = 2,
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
  [484] = 2,
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
  [504] = 2,
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
  [524] = 2,
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
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 13,
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
  [563] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_number_repeat1,
    STATE(17), 1,
      sym_value,
    ACTIONS(84), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(19), 3,
      sym_number,
      sym_string,
      sym_expression,
  [598] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_number_repeat1,
    STATE(18), 1,
      sym_value,
    ACTIONS(84), 3,
      aux_sym_value_token1,
      aux_sym_value_token2,
      aux_sym_value_token3,
    STATE(19), 3,
      sym_number,
      sym_string,
      sym_expression,
  [633] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_indexes,
    STATE(73), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(25), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_indexes,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_note_start,
    ACTIONS(25), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(23), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [685] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(112), 1,
      sym_indexes,
    STATE(73), 1,
      sym_note_start,
    ACTIONS(106), 2,
      aux_sym_note_start_token1,
      anon_sym_database_type,
    STATE(25), 4,
      sym_note,
      sym_item,
      sym_index_definition,
      aux_sym_block_repeat1,
  [711] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      anon_sym_BQUOTE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(28), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [735] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BQUOTE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [759] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(28), 2,
      sym_index,
      aux_sym_index_block_repeat1,
    STATE(31), 2,
      sym_expression,
      sym_composite_index,
  [783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Table,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_keyword,
    ACTIONS(7), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(30), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [804] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_Table,
    STATE(82), 1,
      sym_keyword,
    ACTIONS(140), 2,
      anon_sym_Project,
      anon_sym_TableGroup,
    STATE(30), 2,
      sym_definition,
      aux_sym_source_repeat1,
  [825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_setting,
    ACTIONS(146), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 6,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(154), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(170), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_BQUOTE,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(36), 2,
      sym_expression,
      aux_sym_composite_index_repeat1,
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_identifier,
      anon_sym_LPAREN,
  [965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(188), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(192), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(76), 4,
      anon_sym_RBRACE,
      aux_sym_note_start_token1,
      anon_sym_database_type,
      sym_indexes,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_as,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    STATE(62), 1,
      sym__alias,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1066] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      aux_sym_type_token14,
    ACTIONS(210), 1,
      aux_sym_item_token1,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_Table,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_Table,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_Table,
    ACTIONS(222), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_identifier,
      anon_sym_LPAREN,
  [1128] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym_type_token14,
    ACTIONS(232), 1,
      aux_sym_item_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_Table,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(16), 1,
      sym_string,
  [1169] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_type_token14,
    ACTIONS(242), 1,
      aux_sym_item_token1,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
  [1182] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_item_token1,
    STATE(76), 1,
      sym_setting,
  [1195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(45), 1,
      sym_string,
  [1208] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym_type_token14,
    ACTIONS(232), 1,
      aux_sym_item_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
  [1221] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_item_token1,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
  [1241] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_item_token1,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
  [1251] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_item_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_index_block,
  [1271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [1278] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym_string_token1,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
  [1292] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_expression_token1,
  [1299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
  [1306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [1320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COLON,
  [1327] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_item_token1,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [1341] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_item_token1,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
  [1355] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_item_token1,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
  [1376] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_string_token1,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_identifier,
  [1390] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_item_token1,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_BQUOTE,
  [1411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
  [1418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [1432] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_expression_token1,
  [1439] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_string_token1,
  [1446] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 97,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 265,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 402,
  [SMALL_STATE(14)] = 424,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 563,
  [SMALL_STATE(22)] = 598,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 659,
  [SMALL_STATE(25)] = 685,
  [SMALL_STATE(26)] = 711,
  [SMALL_STATE(27)] = 735,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 804,
  [SMALL_STATE(31)] = 825,
  [SMALL_STATE(32)] = 841,
  [SMALL_STATE(33)] = 853,
  [SMALL_STATE(34)] = 870,
  [SMALL_STATE(35)] = 883,
  [SMALL_STATE(36)] = 896,
  [SMALL_STATE(37)] = 913,
  [SMALL_STATE(38)] = 924,
  [SMALL_STATE(39)] = 937,
  [SMALL_STATE(40)] = 954,
  [SMALL_STATE(41)] = 965,
  [SMALL_STATE(42)] = 978,
  [SMALL_STATE(43)] = 991,
  [SMALL_STATE(44)] = 1004,
  [SMALL_STATE(45)] = 1017,
  [SMALL_STATE(46)] = 1030,
  [SMALL_STATE(47)] = 1040,
  [SMALL_STATE(48)] = 1056,
  [SMALL_STATE(49)] = 1066,
  [SMALL_STATE(50)] = 1082,
  [SMALL_STATE(51)] = 1094,
  [SMALL_STATE(52)] = 1106,
  [SMALL_STATE(53)] = 1118,
  [SMALL_STATE(54)] = 1128,
  [SMALL_STATE(55)] = 1144,
  [SMALL_STATE(56)] = 1156,
  [SMALL_STATE(57)] = 1169,
  [SMALL_STATE(58)] = 1182,
  [SMALL_STATE(59)] = 1195,
  [SMALL_STATE(60)] = 1208,
  [SMALL_STATE(61)] = 1221,
  [SMALL_STATE(62)] = 1231,
  [SMALL_STATE(63)] = 1241,
  [SMALL_STATE(64)] = 1251,
  [SMALL_STATE(65)] = 1261,
  [SMALL_STATE(66)] = 1271,
  [SMALL_STATE(67)] = 1278,
  [SMALL_STATE(68)] = 1285,
  [SMALL_STATE(69)] = 1292,
  [SMALL_STATE(70)] = 1299,
  [SMALL_STATE(71)] = 1306,
  [SMALL_STATE(72)] = 1313,
  [SMALL_STATE(73)] = 1320,
  [SMALL_STATE(74)] = 1327,
  [SMALL_STATE(75)] = 1334,
  [SMALL_STATE(76)] = 1341,
  [SMALL_STATE(77)] = 1348,
  [SMALL_STATE(78)] = 1355,
  [SMALL_STATE(79)] = 1362,
  [SMALL_STATE(80)] = 1369,
  [SMALL_STATE(81)] = 1376,
  [SMALL_STATE(82)] = 1383,
  [SMALL_STATE(83)] = 1390,
  [SMALL_STATE(84)] = 1397,
  [SMALL_STATE(85)] = 1404,
  [SMALL_STATE(86)] = 1411,
  [SMALL_STATE(87)] = 1418,
  [SMALL_STATE(88)] = 1425,
  [SMALL_STATE(89)] = 1432,
  [SMALL_STATE(90)] = 1439,
  [SMALL_STATE(91)] = 1446,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(66),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(72),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_number_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_start, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_kind, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(69),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(31),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_block_repeat1, 2), SHIFT_REPEAT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(68),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_definition, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_definition, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(69),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2), SHIFT_REPEAT(36),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_block, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_block, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
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
