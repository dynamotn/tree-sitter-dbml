const ANYTHING = /[^\n\r]+/;
const IDENTIFIER = /[a-zA-Z_.]+/;
const KEYWORD_PROJECT = "Project";
const CONTENT = /[^']*/;
const NOTE = /[nN]ote/;
const DB_TYPE = "database_type";

module.exports = grammar({
  name: "dbml",

  rules: {
    source: ($) => repeat($._definition),

    _definition: ($) => choice($.project_definition),

    keyword_project: (_) => KEYWORD_PROJECT,

    project_definition: ($) => seq($.keyword_project, $.identifier, $.block),

    block: ($) => seq("{", repeat(choice($.note)), "}"),

    note: ($) => seq($.note_start, ":", $.string),

    note_start: ($) => choice(NOTE, DB_TYPE),

    string: ($) => seq("'", CONTENT, "'"),

    identifier: (_) => IDENTIFIER,
  },
});
