const integer_type = choice('u8', 'i8', 'u16', 'i16', 'u32', 'i32', 'u64', 'i64', 'isize', 'usize')

// define the grammar
module.exports = grammar ({
  name: "rustfyp",

  rules: {
    source_file: $ => seq(
      optional($.shebang),
      repeat($._statement),
    ),

    // simple statement rule (variable declaration)
    _statement: $ => choice(
      $.let_declaration,
      $.empty_statement,
      $.function_declaration,
      $.expression_statement,
      $.block
    ),

    // simple expression rule
    _expression: $ => choice(
      $.identifier,
      $.literal,
      $.assignment_expression,
      $.method_call,
      $.macro_invocation,
      $.reference_expression,
      $.dereference_expression,
      $.unary_expression,
      $.binary_expression
    ),

    assignment_expression: $ => prec.right(1, seq(
      $._expression,
      '=',
      $._expression
    )),

   // expression_statement: $ => choice(
   //   seq($._expression, ';'),
   //   prec(-1, $._expression)
   // ),

    expression_statement: $ => seq(
      $._expression,
      ';'
    ),

    standalone_expression: $ => $._expression,

    binary_expression: $ => prec.left(2, seq(
      $._expression,
      choice('+', '-', '*', '/'),
      $._expression
    )),

    _pattern: $ => choice(
      $.identifier,
      $.mut_pattern,
    ),

    // identifier rule
    identifier: $ => /[a-zA-Z_]\w*/,

    _integer_literal: $ => token(seq(
      choice(
        // decimal
        /[0-9][0-9_]*/,
        // hex
        /0x[0-9a-fA-F_]+/,
        // oct
        /0o[0-7_]+/,
        // binary
        /0b[01_]+/,
      ),
      optional(integer_type),
    )),

    // literal rule (only integers for now)
    literal: $ => choice(
      $._integer_literal, // integer literals
      /"[^"]*"/, // string literals
    ),

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
        $.type_expression
      )),
      $.block
    ),

    method_call: $ => seq(
      field('object', $._expression), // object of method call
      '.',
      field('method', $.identifier), // method name
      '(',
      optional($.expression_list), // method args 
      ')'
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
      commaSep($.parameter),
      ')'
    ),

    parameter: $ => seq(
      $.identifier,
      ':',
      choice(
        $.reference_type,
        $.type_expression
      )
    ),

    reference_type: $ => seq(
      '&',
      optional($.mutable_specifier),
      $.type_expression
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      optional($.standalone_expression),
      //optional(seq($._statement, ';')),
      '}'
    ),

    empty_statement: $ => ';',

    method_call: $ => seq(
      $.identifier,
      '.',
      $.identifier,
      '(',
      optional($.expression_list),
      ')'
    ),

    macro_invocation: $ => seq(
      $.identifier,
      '!',
      $.macro_arguments
    ),

    macro_arguments: $ => seq(
      '(',
      optional($._macro_argument_elements),
      ')'
    ),

    _macro_argument_elements: $ => prec(1, choice(
      $.literal,
      $._expression
    )),

    expression_list: $ => commaSep1($._expression),

    reference_expression: $ => prec(3, seq(
      '&',
      optional($.mutable_specifier),
      $._expression
    )),

    unary_expression: $ => prec(4, choice(
      $.dereference_expression
    )),

    dereference_expression: $ => prec(4, seq(
      '*',
      $._expression
    )),
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
