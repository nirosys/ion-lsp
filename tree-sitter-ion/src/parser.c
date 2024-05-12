#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_COLON = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DOLLAR = 9,
  aux_sym_symbol_address_token1 = 10,
  anon_sym_COLON_COLON = 11,
  sym__identifier = 12,
  anon_sym_SQUOTE = 13,
  aux_sym__quoted_symbol_token1 = 14,
  sym_source_file = 15,
  sym__value = 16,
  sym_struct = 17,
  sym_field_value_pair = 18,
  sym_string = 19,
  sym_inline_symbol = 20,
  sym_symbol_address = 21,
  sym_annotations = 22,
  sym__symbol = 23,
  sym__quoted_symbol = 24,
  sym__field_name = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_struct_repeat1 = 27,
  anon_alias_sym_annotation = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_symbol_address_token1] = "symbol_address_token1",
  [anon_sym_COLON_COLON] = "::",
  [sym__identifier] = "_identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_symbol_token1] = "_quoted_symbol_token1",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_struct] = "struct",
  [sym_field_value_pair] = "field_value_pair",
  [sym_string] = "string",
  [sym_inline_symbol] = "inline_symbol",
  [sym_symbol_address] = "symbol_address",
  [sym_annotations] = "annotations",
  [sym__symbol] = "_symbol",
  [sym__quoted_symbol] = "_quoted_symbol",
  [sym__field_name] = "_field_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [anon_alias_sym_annotation] = "annotation",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_symbol_address_token1] = aux_sym_symbol_address_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__identifier] = sym__identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_symbol_token1] = aux_sym__quoted_symbol_token1,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_struct] = sym_struct,
  [sym_field_value_pair] = sym_field_value_pair,
  [sym_string] = sym_string,
  [sym_inline_symbol] = sym_inline_symbol,
  [sym_symbol_address] = sym_symbol_address,
  [sym_annotations] = sym_annotations,
  [sym__symbol] = sym__symbol,
  [sym__quoted_symbol] = sym__quoted_symbol,
  [sym__field_name] = sym__field_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [anon_alias_sym_annotation] = anon_alias_sym_annotation,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_address_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_address] = {
    .visible = true,
    .named = true,
  },
  [sym_annotations] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
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
  [anon_alias_sym_annotation] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_annotation,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__symbol, 2,
    sym__symbol,
    anon_alias_sym_annotation,
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '"', 12,
        '$', 15,
        '\'', 19,
        ',', 6,
        ':', 11,
        '[', 8,
        ']', 9,
        '{', 5,
        '}', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_symbol_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(21);
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_symbol_address_token1] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym__value] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_string] = STATE(2),
    [sym_inline_symbol] = STATE(10),
    [sym_symbol_address] = STATE(10),
    [sym_annotations] = STATE(9),
    [sym__symbol] = STATE(15),
    [sym__quoted_symbol] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym__identifier] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_string] = STATE(3),
    [sym_inline_symbol] = STATE(10),
    [sym_symbol_address] = STATE(10),
    [sym_annotations] = STATE(9),
    [sym__symbol] = STATE(15),
    [sym__quoted_symbol] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym__identifier] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
  },
  [3] = {
    [sym__value] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_string] = STATE(3),
    [sym_inline_symbol] = STATE(10),
    [sym_symbol_address] = STATE(10),
    [sym_annotations] = STATE(9),
    [sym__symbol] = STATE(15),
    [sym__quoted_symbol] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [sym__identifier] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_annotations,
    STATE(12), 1,
      sym__quoted_symbol,
    STATE(15), 1,
      sym__symbol,
    STATE(10), 2,
      sym_inline_symbol,
      sym_symbol_address,
    STATE(26), 3,
      sym__value,
      sym_struct,
      sym_string,
  [34] = 9,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym__quoted_symbol,
    STATE(22), 1,
      sym_field_value_pair,
    STATE(10), 2,
      sym_inline_symbol,
      sym_symbol_address,
    STATE(27), 3,
      sym_string,
      sym__symbol,
      sym__field_name,
  [65] = 9,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym__quoted_symbol,
    STATE(25), 1,
      sym_field_value_pair,
    STATE(10), 2,
      sym_inline_symbol,
      sym_symbol_address,
    STATE(27), 3,
      sym_string,
      sym__symbol,
      sym__field_name,
  [96] = 9,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym__quoted_symbol,
    STATE(25), 1,
      sym_field_value_pair,
    STATE(10), 2,
      sym_inline_symbol,
      sym_symbol_address,
    STATE(27), 3,
      sym_string,
      sym__symbol,
      sym__field_name,
  [127] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym__quoted_symbol,
    STATE(25), 1,
      sym_field_value_pair,
    STATE(10), 2,
      sym_inline_symbol,
      sym_symbol_address,
    STATE(27), 3,
      sym_string,
      sym__symbol,
      sym__field_name,
  [155] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym__quoted_symbol,
    STATE(10), 2,
      sym_inline_symbol,
      sym_symbol_address,
    STATE(16), 3,
      sym_struct,
      sym_string,
      sym__symbol,
  [183] = 2,
    ACTIONS(42), 1,
      anon_sym_COLON,
    ACTIONS(40), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COLON_COLON,
      sym__identifier,
      anon_sym_SQUOTE,
  [198] = 2,
    ACTIONS(46), 1,
      anon_sym_COLON,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COLON_COLON,
      sym__identifier,
      anon_sym_SQUOTE,
  [213] = 2,
    ACTIONS(50), 1,
      anon_sym_COLON,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COLON_COLON,
      sym__identifier,
      anon_sym_SQUOTE,
  [228] = 2,
    ACTIONS(54), 1,
      anon_sym_COLON,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_COLON_COLON,
      sym__identifier,
      anon_sym_SQUOTE,
  [243] = 1,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [255] = 2,
    ACTIONS(60), 1,
      anon_sym_COLON_COLON,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [269] = 1,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [280] = 1,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [291] = 1,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [302] = 1,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [313] = 1,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [324] = 1,
    ACTIONS(72), 5,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [332] = 3,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_struct_repeat1,
  [342] = 3,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_struct_repeat1,
  [352] = 3,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_struct_repeat1,
  [362] = 1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [367] = 1,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [372] = 1,
    ACTIONS(87), 1,
      anon_sym_COLON,
  [376] = 1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
  [380] = 1,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
  [384] = 1,
    ACTIONS(93), 1,
      aux_sym_string_token1,
  [388] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [392] = 1,
    ACTIONS(97), 1,
      aux_sym__quoted_symbol_token1,
  [396] = 1,
    ACTIONS(99), 1,
      aux_sym_symbol_address_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 255,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 332,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 352,
  [SMALL_STATE(25)] = 362,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 380,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 388,
  [SMALL_STATE(32)] = 392,
  [SMALL_STATE(33)] = 396,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_symbol, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_symbol, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_address, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_address, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotations, 2, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value_pair, 3, 0, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
