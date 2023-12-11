const integer_type = choice('u8', 'i8', 'u16', 'i16', 'u32', 'i32', 'u64', 'i64', 'isize', 'usize')

// define the grammar
module.exports = grammar ({
  name: 'rust',

  rules: {
    source_file: $ => seq(
      optional($.shebang),
      repeat($._statement_list),
    ),

    _statement_list: $ => prec.left(sepTrailing(
      choice('\n', ';'), $._statement_list, $._statement
    )),

    // simple statement rule (variable declaration)
    _statement: $ => choice(
      $.let_declaration,
      $.empty_statement
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
    let_declaration: $ => seq(
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

    function_declaration: $ => seq(
      'fn',
      $.identifier,
      $.parameters,
      optional(seq(
        '->',
        $.type_expression),
      ),
      '!',
      $.block
    ),

    mut_pattern: $ => prec(-1, seq(
      $.mutable_specifier,
      $._pattern,
    )),

    type_expression: $ => choice(
      integer_type,
      $.identifier
    ),

    parameters: $ => seq(
      '(',
      commaSep(seq($.identifier, ':', $.type_expression)),
      ')'
    ),

    block: $ => seq(
      '{',
      choice(
        optional($._statement_list),
        optional($._expression)
      ),
      '}'
    ),

    empty_statement: $ => ';'
  }
});

// from Rust grammar
function sepTrailing (separator, recurSymbol, rule) {
  return choice(rule, seq(rule, separator, optional(recurSymbol)))
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep (rule) {
  return optional(commaSep1(rule));
}
