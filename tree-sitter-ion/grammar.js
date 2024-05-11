module.exports = grammar({
   name: 'Ion',

   rules: {
      source_file: $ => repeat($._value),

      _value: $ => choice(
         $.struct,
         $.string,
         $._symbol,
      ),

      struct: $ => seq(
         '{',
         repeat($.field_value_pair),
         '}'
      ),

      field_value_pair: $ => seq(
         $._field_name,
         ':',
         $._value,
      ),

      _field_name: $ => choice($._symbol, $.string),

      string: $ => seq('"', /[^"]*/, '"'),
      _symbol: $ => choice($.inline_symbol, $.symbol_address),
      inline_symbol: $ => choice($._identifier, $._quoted_symbol),
      _identifier: $ => /[a-z][A-Z][a-zA-Z0-9]*/,
      _quoted_symbol: $ => seq("'", /[^']*/, "'"),
      symbol_address: $ => seq('$', /[0-9]+/),

   }
});
