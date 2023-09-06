const ANYTHING = /[^\n\r]+/;
const NEWLINE = /\r?\n/;
const IDENTIFIER = /[a-zA-Z0-9_.]+/;
const CONTENT = /[^'\"]*/;
const CARDINALITY = /[-<>]/;
const PREC = {
  NOTE: -99,
  COLUMN: 3,
  SCHEMA: 2,
  INDEX: 1,
  IDENTIFIER: -1,
};

module.exports = grammar({
  name: "dbml",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source: ($) => repeat(choice($.definition, $.reference)),

    table: ($) => seq(optional($.schema), $.identifier),

    column: ($) => prec.left(PREC.COLUMN, seq(optional($.schema), $.identifier, ".", $.identifier)),

    definition: ($) =>
      seq($.keyword, $.table, optional($._alias), $.block),

    keyword: (_) => choice("Project", "Table", "TableGroup"),

    reference: ($) =>
      seq(/[Rr]ef/, ":", $.column, CARDINALITY, $.column),

    _alias: ($) => seq("as", $.identifier),

    block: ($) =>
      seq("{", repeat(choice($.note, $.item, $.index_definition)), "}"),

    note: ($) => seq($.note_start, ":", $.string),

    note_start: ($) => choice(/[nN]ote/, "database_type"),

    default: ($) => seq($.default_start, ":", $.value),

    default_start: ($) => "default",

    name: ($) => seq($.name_start, ":", $.value),

    name_start: ($) => "name",

    value: ($) =>
      choice(
        $.number,
        $.string,
        $.expression,
        $.identifier,
        /true|TRUE/,
        /false|FALSE/,
        /null|NULL/
      ),

    number: ($) => repeat1(/[0-9]+/),

    type: ($) =>
      choice(
        seq(
          "\"",
          /[^\[\]\"]+/,
          "\"",
        ),
        /[^\"\s]+/,
      ),

    item: ($) =>
      seq($.identifier, $.type, optional($.setting), NEWLINE),

    string: ($) => choice(seq("'", CONTENT, "'"), seq("'''", CONTENT, "'''"), seq("\"", CONTENT, "\"")),

    expression: ($) => seq("`", /[^`]*/, "`"),

    setting: ($) =>
      seq(
        "[",
        repeat(
          seq(choice($.note, $.default, $.name, $.setting_kind), optional(","))
        ),
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

    identifier: (_) =>
      token(
        prec(PREC.IDENTIFIER, seq(optional('"'), IDENTIFIER, optional('"')))
      ),

    schema: ($) => prec.left(PREC.SCHEMA, seq($.identifier, ".")),

    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),

    indexes: (_) => token(prec(PREC.INDEX, /[iI]ndexes/)),

    index_definition: ($) => seq($.indexes, $.index_block),

    index_block: ($) => seq("{", repeat($.index), "}"),

    index: ($) =>
      seq(
        choice($.identifier, $.expression, $.composite_index),
        optional($.setting)
      ),

    composite_index: ($) =>
      seq("(", repeat(choice($.identifier, $.expression)), ")"),
  },
});
