const ANYTHING = /[^\n\r]+/;
const NEWLINE = /\r?\n/;
const IDENTIFIER = /[a-zA-Z0-9_.]+/;
const CONTENT = /[^']*/;

module.exports = grammar({
  name: "dbml",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source: ($) => repeat($.definition),

    definition: ($) =>
      seq($.keyword, $.identifier, optional($._alias), $.block),

    keyword: (_) => choice("Project", "Table", "TableGroup"),

    _alias: ($) => seq("as", $.identifier),

    block: ($) => seq("{", repeat(choice($.note, $.item)), "}"),

    note: ($) => seq($.note_start, ":", $.string),

    note_start: ($) => choice(/[nN]ote/, IDENTIFIER),

    default: ($) => seq($.default_start, ":", $.value),

    default_start: ($) => "default",

    value: ($) =>
      choice($.number, $.string, $.expression, "true", "false", "null", "NULL"),

    number: ($) => repeat1(/[0-9]+/),

    type: ($) =>
      seq(
        choice(
          "blob",
          "bool",
          "boolean",
          "char",
          "character",
          "date",
          "datetime",
          "decimal",
          "float",
          "json",
          /(big|tiny|)int/,
          "integer",
          "long",
          "number",
          "numeric",
          "ntext",
          "rowid",
          "smallint",
          "real",
          "text",
          "timestamp",
          "varchar"
        ),
        optional(/\(\d+\)/)
      ),

    item: ($) =>
      seq($.identifier, optional($.type), optional($.setting), NEWLINE),

    string: ($) => choice(seq("'", CONTENT, "'"), seq("'''", CONTENT, "'''")),

    expression: ($) => seq("`", /[^`]*/, "`"),

    setting: ($) =>
      seq(
        "[",
        repeat(seq(choice($.note, $.default, $.setting_kind), optional(","))),
        "]"
      ),

    setting_kind: ($) =>
      choice(
        "increment",
        "primary key",
        "pk",
        "null",
        "not null",
        "unique",
        "headercolor",
        "type",
        "name"
      ),

    identifier: (_) => seq(optional('"'), IDENTIFIER, optional('"')),

    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});
