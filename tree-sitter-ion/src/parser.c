#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  sym__identifier = 6,
  anon_sym_SQUOTE = 7,
  aux_sym__quoted_symbol_token1 = 8,
  anon_sym_DOLLAR = 9,
  aux_sym_symbol_address_token1 = 10,
  sym_source_file = 11,
  sym__value = 12,
  sym_struct = 13,
  sym_field_value_pair = 14,
  sym__field_name = 15,
  sym_string = 16,
  sym__symbol = 17,
  sym_inline_symbol = 18,
  sym__quoted_symbol = 19,
  sym_symbol_address = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_struct_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym__identifier] = "_identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_symbol_token1] = "_quoted_symbol_token1",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_symbol_address_token1] = "symbol_address_token1",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_struct] = "struct",
  [sym_field_value_pair] = "field_value_pair",
  [sym__field_name] = "_field_name",
  [sym_string] = "string",
  [sym__symbol] = "_symbol",
  [sym_inline_symbol] = "inline_symbol",
  [sym__quoted_symbol] = "_quoted_symbol",
  [sym_symbol_address] = "symbol_address",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__identifier] = sym__identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_symbol_token1] = aux_sym__quoted_symbol_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_symbol_address_token1] = aux_sym_symbol_address_token1,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_struct] = sym_struct,
  [sym_field_value_pair] = sym_field_value_pair,
  [sym__field_name] = sym__field_name,
  [sym_string] = sym_string,
  [sym__symbol] = sym__symbol,
  [sym_inline_symbol] = sym_inline_symbol,
  [sym__quoted_symbol] = sym__quoted_symbol,
  [sym_symbol_address] = sym_symbol_address,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_address_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_field_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(9);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_symbol_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_symbol_address_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__value] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_string] = STATE(2),
    [sym__symbol] = STATE(2),
    [sym_inline_symbol] = STATE(2),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_string] = STATE(3),
    [sym__symbol] = STATE(3),
    [sym_inline_symbol] = STATE(3),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
  },
  [3] = {
    [sym__value] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_string] = STATE(3),
    [sym__symbol] = STATE(3),
    [sym_inline_symbol] = STATE(3),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DOLLAR] = ACTIONS(31),
  },
  [4] = {
    [sym_field_value_pair] = STATE(6),
    [sym__field_name] = STATE(19),
    [sym_string] = STATE(19),
    [sym__symbol] = STATE(19),
    [sym_inline_symbol] = STATE(19),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(19),
    [aux_sym_struct_repeat1] = STATE(6),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
  },
  [5] = {
    [sym_field_value_pair] = STATE(5),
    [sym__field_name] = STATE(19),
    [sym_string] = STATE(19),
    [sym__symbol] = STATE(19),
    [sym_inline_symbol] = STATE(19),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(19),
    [aux_sym_struct_repeat1] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym__identifier] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DOLLAR] = ACTIONS(47),
  },
  [6] = {
    [sym_field_value_pair] = STATE(5),
    [sym__field_name] = STATE(19),
    [sym_string] = STATE(19),
    [sym__symbol] = STATE(19),
    [sym_inline_symbol] = STATE(19),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(19),
    [aux_sym_struct_repeat1] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
  },
  [7] = {
    [sym__value] = STATE(14),
    [sym_struct] = STATE(14),
    [sym_string] = STATE(14),
    [sym__symbol] = STATE(14),
    [sym_inline_symbol] = STATE(14),
    [sym__quoted_symbol] = STATE(8),
    [sym_symbol_address] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(52), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [11] = 1,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [22] = 1,
    ACTIONS(56), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [33] = 1,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [44] = 1,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [54] = 1,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [64] = 1,
    ACTIONS(64), 5,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
  [72] = 1,
    ACTIONS(66), 1,
      aux_sym__quoted_symbol_token1,
  [76] = 1,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
  [80] = 1,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
  [84] = 1,
    ACTIONS(72), 1,
      aux_sym_string_token1,
  [88] = 1,
    ACTIONS(74), 1,
      anon_sym_COLON,
  [92] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [96] = 1,
    ACTIONS(78), 1,
      aux_sym_symbol_address_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 11,
  [SMALL_STATE(10)] = 22,
  [SMALL_STATE(11)] = 33,
  [SMALL_STATE(12)] = 44,
  [SMALL_STATE(13)] = 54,
  [SMALL_STATE(14)] = 64,
  [SMALL_STATE(15)] = 72,
  [SMALL_STATE(16)] = 76,
  [SMALL_STATE(17)] = 80,
  [SMALL_STATE(18)] = 84,
  [SMALL_STATE(19)] = 88,
  [SMALL_STATE(20)] = 92,
  [SMALL_STATE(21)] = 96,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_symbol, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_address, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value_pair, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_Ion(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
