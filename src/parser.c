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
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_Project = 1,
  anon_sym_Table = 2,
  anon_sym_TableGroup = 3,
  sym_index = 4,
  anon_sym_as = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_COLON = 8,
  aux_sym_note_start_token1 = 9,
  aux_sym_note_start_token2 = 10,
  sym_default_start = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_null = 14,
  anon_sym_NULL = 15,
  aux_sym_number_token1 = 16,
  anon_sym_blob = 17,
  anon_sym_bool = 18,
  anon_sym_boolean = 19,
  anon_sym_char = 20,
  anon_sym_character = 21,
  anon_sym_date = 22,
  anon_sym_datetime = 23,
  anon_sym_decimal = 24,
  anon_sym_float = 25,
  anon_sym_json = 26,
  aux_sym_type_token1 = 27,
  anon_sym_integer = 28,
  anon_sym_long = 29,
  anon_sym_number = 30,
  anon_sym_numeric = 31,
  anon_sym_ntext = 32,
  anon_sym_rowid = 33,
  anon_sym_smallint = 34,
  anon_sym_real = 35,
  anon_sym_text = 36,
  anon_sym_timestamp = 37,
  anon_sym_varchar = 38,
  aux_sym_type_token2 = 39,
  aux_sym_item_token1 = 40,
  anon_sym_SQUOTE = 41,
  aux_sym_string_token1 = 42,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 43,
  anon_sym_BQUOTE = 44,
  aux_sym_expression_token1 = 45,
  anon_sym_LBRACK = 46,
  anon_sym_COMMA = 47,
  anon_sym_RBRACK = 48,
  anon_sym_increment = 49,
  anon_sym_primarykey = 50,
  anon_sym_pk = 51,
  anon_sym_notnull = 52,
  anon_sym_unique = 53,
  anon_sym_headercolor = 54,
  anon_sym_type = 55,
  anon_sym_name = 56,
  anon_sym_DQUOTE = 57,
  sym_comment = 58,
  sym_source = 59,
  sym_definition = 60,
  sym_keyword = 61,
  sym__alias = 62,
  sym_block = 63,
  sym_note = 64,
  sym_note_start = 65,
  sym_default = 66,
  sym_value = 67,
  sym_number = 68,
  sym_type = 69,
  sym_item = 70,
  sym_string = 71,
  sym_expression = 72,
  sym_setting = 73,
  sym_setting_kind = 74,
  sym_identifier = 75,
  aux_sym_source_repeat1 = 76,
  aux_sym_block_repeat1 = 77,
  aux_sym_number_repeat1 = 78,
  aux_sym_setting_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Project] = "Project",
  [anon_sym_Table] = "Table",
  [anon_sym_TableGroup] = "TableGroup",
  [sym_index] = "index",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_note_start_token1] = "note_start_token1",
  [aux_sym_note_start_token2] = "note_start_token2",
  [sym_default_start] = "default_start",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_NULL] = "NULL",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_blob] = "blob",
  [anon_sym_bool] = "bool",
  [anon_sym_boolean] = "boolean",
  [anon_sym_char] = "char",
  [anon_sym_character] = "character",
  [anon_sym_date] = "date",
  [anon_sym_datetime] = "datetime",
  [anon_sym_decimal] = "decimal",
  [anon_sym_float] = "float",
  [anon_sym_json] = "json",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_integer] = "integer",
  [anon_sym_long] = "long",
  [anon_sym_number] = "number",
  [anon_sym_numeric] = "numeric",
  [anon_sym_ntext] = "ntext",
  [anon_sym_rowid] = "rowid",
  [anon_sym_smallint] = "smallint",
  [anon_sym_real] = "real",
  [anon_sym_text] = "text",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_varchar] = "varchar",
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
  [sym_index] = sym_index,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_note_start_token1] = aux_sym_note_start_token1,
  [aux_sym_note_start_token2] = aux_sym_note_start_token2,
  [sym_default_start] = sym_default_start,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_NULL] = anon_sym_NULL,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_blob] = anon_sym_blob,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_character] = anon_sym_character,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_json] = anon_sym_json,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_numeric] = anon_sym_numeric,
  [anon_sym_ntext] = anon_sym_ntext,
  [anon_sym_rowid] = anon_sym_rowid,
  [anon_sym_smallint] = anon_sym_smallint,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_varchar] = anon_sym_varchar,
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
  [sym_index] = {
    .visible = true,
    .named = true,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_character] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
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
  [anon_sym_rowid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smallint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varchar] = {
    .visible = true,
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
  [70] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(181);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(283);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(249);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'j') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(297);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 134:
      if (lookahead == 'q') ADVANCE(171);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 173:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(157);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 177:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 178:
      if (lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(145);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_index);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_note_start_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'k') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'm') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'q') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'y') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == 'y') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_note_start_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_default_start);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_default_start);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_blob);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_character);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_type_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_ntext);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_rowid);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_smallint);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(278);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(278);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '/') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '\n') ADVANCE(290);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(288);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_increment);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_pk);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_unique);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_headercolor);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_headercolor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
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
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 289},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 281},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 281},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 281},
  [70] = {.lex_state = 281},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [sym_index] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_note_start_token1] = ACTIONS(1),
    [sym_default_start] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_blob] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_character] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_numeric] = ACTIONS(1),
    [anon_sym_ntext] = ACTIONS(1),
    [anon_sym_rowid] = ACTIONS(1),
    [anon_sym_smallint] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_varchar] = ACTIONS(1),
    [aux_sym_type_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
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
    ACTIONS(11), 22,
      anon_sym_blob,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_char,
      anon_sym_character,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_json,
      aux_sym_type_token1,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_rowid,
      anon_sym_smallint,
      anon_sym_real,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [40] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(23), 1,
      aux_sym_item_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 23,
      anon_sym_blob,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_char,
      anon_sym_character,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_json,
      aux_sym_type_token1,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_rowid,
      anon_sym_smallint,
      anon_sym_real,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
      anon_sym_LBRACK,
  [78] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_item_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 23,
      anon_sym_blob,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_char,
      anon_sym_character,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_json,
      aux_sym_type_token1,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_rowid,
      anon_sym_smallint,
      anon_sym_real,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
      anon_sym_LBRACK,
  [113] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_item_token1,
    ACTIONS(27), 23,
      anon_sym_blob,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_char,
      anon_sym_character,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_json,
      aux_sym_type_token1,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_rowid,
      anon_sym_smallint,
      anon_sym_real,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
      anon_sym_LBRACK,
  [145] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_item_token1,
    ACTIONS(33), 23,
      anon_sym_blob,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_char,
      anon_sym_character,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_decimal,
      anon_sym_float,
      anon_sym_json,
      aux_sym_type_token1,
      anon_sym_integer,
      anon_sym_long,
      anon_sym_number,
      anon_sym_numeric,
      anon_sym_ntext,
      anon_sym_rowid,
      anon_sym_smallint,
      anon_sym_real,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
      anon_sym_LBRACK,
  [177] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_default_start,
    ACTIONS(46), 1,
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
    ACTIONS(43), 7,
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [215] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_default_start,
    ACTIONS(57), 1,
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
    ACTIONS(55), 7,
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [253] = 9,
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
    ACTIONS(55), 7,
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [291] = 5,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [319] = 5,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [347] = 3,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [369] = 3,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [391] = 3,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [413] = 4,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [437] = 3,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [459] = 3,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [481] = 3,
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
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 3,
      anon_sym_RBRACK,
      anon_sym_primarykey,
      anon_sym_notnull,
    ACTIONS(106), 10,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
      sym_default_start,
      anon_sym_null,
      anon_sym_increment,
      anon_sym_pk,
      anon_sym_unique,
      anon_sym_headercolor,
      anon_sym_type,
      anon_sym_name,
  [524] = 9,
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
    STATE(18), 3,
      sym_number,
      sym_string,
      sym_expression,
    ACTIONS(108), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_NULL,
  [557] = 8,
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
  [584] = 8,
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
  [611] = 8,
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
  [638] = 6,
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
  [659] = 6,
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
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(149), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
  [692] = 5,
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
  [708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_Table,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_Table,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_Table,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(169), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_Table,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_Project,
      anon_sym_TableGroup,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(177), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      aux_sym_note_start_token1,
      aux_sym_note_start_token2,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [804] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_type_token2,
    ACTIONS(181), 1,
      aux_sym_item_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [828] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_item_token1,
    STATE(51), 1,
      sym_setting,
  [841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(30), 1,
      sym_string,
  [854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(13), 1,
      sym_string,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_note_start_token2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_identifier,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_note_start_token2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_identifier,
  [893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      aux_sym_note_start_token2,
      anon_sym_DQUOTE,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [928] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_item_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
  [938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_block,
  [948] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(187), 1,
      aux_sym_item_token1,
  [955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [962] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_item_token1,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
  [976] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym_expression_token1,
  [983] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_item_token1,
  [990] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_string_token1,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_BQUOTE,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [1025] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_string_token1,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [1039] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_item_token1,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_note_start_token2,
  [1053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_note_start_token2,
  [1060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [1088] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_string_token1,
  [1095] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 459,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 503,
  [SMALL_STATE(20)] = 524,
  [SMALL_STATE(21)] = 557,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 638,
  [SMALL_STATE(25)] = 659,
  [SMALL_STATE(26)] = 680,
  [SMALL_STATE(27)] = 692,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 720,
  [SMALL_STATE(30)] = 732,
  [SMALL_STATE(31)] = 744,
  [SMALL_STATE(32)] = 756,
  [SMALL_STATE(33)] = 768,
  [SMALL_STATE(34)] = 780,
  [SMALL_STATE(35)] = 792,
  [SMALL_STATE(36)] = 804,
  [SMALL_STATE(37)] = 817,
  [SMALL_STATE(38)] = 828,
  [SMALL_STATE(39)] = 841,
  [SMALL_STATE(40)] = 854,
  [SMALL_STATE(41)] = 867,
  [SMALL_STATE(42)] = 880,
  [SMALL_STATE(43)] = 893,
  [SMALL_STATE(44)] = 904,
  [SMALL_STATE(45)] = 912,
  [SMALL_STATE(46)] = 920,
  [SMALL_STATE(47)] = 928,
  [SMALL_STATE(48)] = 938,
  [SMALL_STATE(49)] = 948,
  [SMALL_STATE(50)] = 955,
  [SMALL_STATE(51)] = 962,
  [SMALL_STATE(52)] = 969,
  [SMALL_STATE(53)] = 976,
  [SMALL_STATE(54)] = 983,
  [SMALL_STATE(55)] = 990,
  [SMALL_STATE(56)] = 997,
  [SMALL_STATE(57)] = 1004,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1018,
  [SMALL_STATE(60)] = 1025,
  [SMALL_STATE(61)] = 1032,
  [SMALL_STATE(62)] = 1039,
  [SMALL_STATE(63)] = 1046,
  [SMALL_STATE(64)] = 1053,
  [SMALL_STATE(65)] = 1060,
  [SMALL_STATE(66)] = 1067,
  [SMALL_STATE(67)] = 1074,
  [SMALL_STATE(68)] = 1081,
  [SMALL_STATE(69)] = 1088,
  [SMALL_STATE(70)] = 1095,
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
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setting_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_start, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
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
