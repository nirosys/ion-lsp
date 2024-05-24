function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)), optional(','));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function joinedRepeat(rule, sep) {
  return seq(rule, repeat(seq(sep, rule)));
}

function quotedOrIdentifier(rule) {
  return choice(
    seq('\'', rule, '\''),
    rule,
  );
}

module.exports = grammar({
   name: 'Ion',

   rules: {
      source_file: $ => repeat(choice(
        $.version_marker,
        $.symbol_table,
        $._value,
      )),

      _value: $ => choice(
        $.struct,
        $.string,
        $.symbol,
        $.list,
        $.string,
      ),

     version_marker: $ => quotedOrIdentifier(seq(
       '$ion_', /[0-9]+/, '_', /[0-9]+/
     )),

     symbol_table: $ => seq(
       quotedOrIdentifier('$ion_symbol_table'),
       '::',
       field('symbols', $._symbol_table_struct),
     ),

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

     _symbol_table_struct: $ => seq(
       '{',
       $._symbol_table_symbols,
       '}',
     ),
     _symbol_table_symbols: $ => seq(
       'symbols', ':', $.list,
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
