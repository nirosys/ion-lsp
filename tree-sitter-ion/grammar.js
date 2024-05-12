function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(','));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function joinedRepeat(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

module.exports = grammar({
   name: 'Ion',

   rules: {
      source_file: $ => repeat($._value),


      _value: $ => seq(optional($.annotations), choice(
         $.struct,
         $.string,
         $._symbol,
      )),

      struct: $ => seq(
         '{',
         commaSep($.field_value_pair),
         '}'
      ),

     list: $ => seq(
       '[',
       commaSep($._value),
       ']'
     ),

      field_value_pair: $ => seq(
         field('name', $._field_name),
         ':',
         field('value', $._value),
      ),


      string: $ => seq('"', /[^"]*/, '"'),
      inline_symbol: $ => choice($._identifier, $._quoted_symbol),
      symbol_address: $ => seq('$', /[0-9]+/),
      annotations: $ => seq(alias($._symbol, 'annotation'), '::', repeat(seq($._symbol, '::'))),

      _symbol: $ => choice($.inline_symbol, $.symbol_address),
      _identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,
      _quoted_symbol: $ => seq("'", /[^']*/, "'"),
      _field_name: $ => choice($._symbol, $.string),
   }
});
