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
      $._declaration_statement,
      $._expression_statement,
      $.empty_statement
    ),

    _declaration_statement: $ => choice(
      $._item,
      $.let_declaration
    ),

    _item: $ => choice(
      $.function_declaration
    ),

    // simple expression rule
    _expression: $ => choice(
      $.return_expression,
      $.literal,
      $.identifier,
      seq('(', $._expression, ')')
    ),

    return_expression: $ => prec.left(seq(
      'return', optional($._expression))
    ),

    call_expression: $ => seq(
      $._expression,
      $.arguments
    ),

    arguments: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    _pattern: $ => choice(
      $.identifier,
      $.mut_pattern,
    ),

    // identifier rule
    identifier: $ => (/[\a_$][\a\d_$]*/),

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

    //function_declaration: $ => seq(
    //  'fn',
    //  $.identifier,
    //  $.parameters,
    //  optional(seq(
    //    '->',
    //    $.type_expression),
    //  ),
    //  '!',
    //  $.block
    //),

    function_declaration: $ => seq(
      'fn',
      $.identifier,
      $.parameters,
      optional(seq('->', $.type_expression)),
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

    _expression_statement: $ => seq(
      $._expression,
      ';'
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
