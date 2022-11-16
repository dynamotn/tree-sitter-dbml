const ANYTHING = /[^\n\r]+/;
const NEWLINE = /\r?\n/;
const IDENTIFIER = /[a-zA-Z0-9_.]+/;
const KEYWORD_PROJECT = "Project";
const KEYWORD_TABLE = "Table";
const KEYWORD_TABLE_GROUP = "TableGroup";
const CONTENT = /[^']*/;
const NOTE = /[nN]ote/;
const AS = "as";
const DB_TYPE = "database_type";

module.exports = grammar({
  name: "dbml",

  rules: {
    source: ($) => repeat($.definition),

    definition: ($) =>
      seq($.keyword, $.identifier, optional($._alias), $.block),

    keyword: (_) => choice(KEYWORD_PROJECT, KEYWORD_TABLE, KEYWORD_TABLE_GROUP),

    _alias: ($) => seq("as", $.identifier),

    block: ($) => seq("{", repeat(choice($.note, $.item)), "}"),

    note: ($) => seq($.note_start, ":", $.string),

    note_start: ($) => choice(NOTE, DB_TYPE),

    item: ($) => seq($.identifier, NEWLINE),

    string: ($) => seq("'", CONTENT, "'"),

    identifier: (_) => IDENTIFIER,
  },
});
