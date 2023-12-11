// define the grammar
module.exports = grammar ({
  name: 'rust',

  rules: {
    source_file: $ => seq(
      optional($.shebang),
      repeat($._statement),
    ),

    // simple statement rule (variable declaration)
    _statement: $ => choice(
      $.variable_declaration,
    ),

    // simple expression rule
    _expression: $ => choice(
      $.identifier,
      $.literal,
    ),

    _pattern: $ => choice(
      $.identifier,
      $.mut_pattern,
    ),

    // identifier rule
    identifier: $ => /[a-zA-Z_]\w*/,

    // literal rule (only integers for now)
    literal: $ => /\d+/,

    shebang: _ => /#![\s]*[^\[\s]+/,

    mutable_specifier: $ => 'mut',

    // variable declaration rule
    variable_declaration: $ => seq(
      'let',
      optional($.mutable_specifier),
      $._pattern,
      optional(seq(
        ':',
        $.type_expression,
      )),
      optional(seq(
        '=',
        $._expression,
      )),
      ';',
    ),

    mut_pattern: $ => prec(-1, seq(
      $.mutable_specifier,
      $._pattern,
    )),

    type_expression: $ => choice(
      $.identifier
    )
  }
});
