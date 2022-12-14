const ANYTHING = /[^\n\r]+/;
const NEWLINE = /\r?\n/;
const IDENTIFIER = /[a-zA-Z0-9_.]+/;
const CONTENT = /[^']*/;
const PREC = {
  NOTE: -99,
  INDEX: 1,
  IDENTIFIER: -1,
};

module.exports = grammar({
  name: "dbml",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source: ($) => repeat($.definition),

    definition: ($) =>
      seq($.keyword, $.identifier, optional($._alias), $.block),

    keyword: (_) => choice("Project", "Table", "TableGroup"),

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
      seq(
        choice(
          "blob",
          /bool(|ean)/,
          "bytea",
          /char(|acter)/,
          "character varying",
          /date(|time)/,
          "double",
          "decimal",
          /float(|4|8)/,
          "geometry",
          "geography",
          /box(2|3)d/,
          /json(|b)/,
          /(big|tiny|small|)int/,
          /int(2|4|8)/,
          "integer",
          "long",
          "money",
          "number",
          "numeric",
          "ntext",
          "precision",
          "rowid",
          "real",
          /(small|big|)serial/,
          /serial(2|4|8)/,
          "text",
          "time",
          /timestamp(|z)/,
          /timestamp with(|out) time zone/,
          "uuid",
          /(|n)varchar/,
          "xml"
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
