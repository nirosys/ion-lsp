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
      keyword: $ => token(/true|false|null.null|null.bool|null.string|null.decimal|null.float|null.int|null.timestamp/),


      _value: $ => seq(optional($.annotations), choice(
         $.struct,
         $.list,
         $.string,
         $.symbol,
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
      // Annotations are broken.. need to resolve ambiguity with annotating a symbol.
      annotations: $ => prec(1, seq(
        $.symbol,
        repeat(seq('::', $.symbol)),
        '::',
      )),

      symbol: $ => choice($._dollar_symbol, $._identifier, $._quoted_symbol),
      _dollar_symbol: $ => seq('$', choice(/[0-9]+/, $._identifier)),
      _identifier: $ => /[a-zA-Z][a-zA-Z0-9_$]*/,
      _quoted_symbol: $ => seq("'", /[^']*/, "'"),
      _field_name: $ => choice($.symbol, $.string),
   }
});
