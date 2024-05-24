#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_null = 1,
  anon_sym_null_DOTint = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_COLON_COLON = 11,
  anon_sym_COLON = 12,
  anon_sym_COMMA = 13,
  aux_sym_version_marker_token1 = 14,
  anon_sym_DOLLARion_ = 15,
  aux_sym_version_marker_token2 = 16,
  anon_sym__ = 17,
  anon_sym_SLASH_SLASH = 18,
  aux_sym_comment_token1 = 19,
  anon_sym_SLASH_STAR = 20,
  aux_sym_comment_token2 = 21,
  anon_sym_SLASH = 22,
  sym_integer = 23,
  aux_sym_symbol_table_token1 = 24,
  anon_sym_DOLLARion_symbol_table = 25,
  anon_sym_symbols = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_token1 = 28,
  anon_sym_DOLLAR = 29,
  sym__identifier = 30,
  anon_sym_SQUOTE = 31,
  aux_sym__quoted_symbol_token1 = 32,
  sym_source_file = 33,
  sym__value = 34,
  sym_keyword = 35,
  sym_version_marker = 36,
  sym_comment = 37,
  sym_symbol_table = 38,
  sym_struct = 39,
  sym_list = 40,
  sym_field_value_pair = 41,
  sym__symbol_table_struct = 42,
  sym__symbol_table_symbols = 43,
  sym_string = 44,
  sym_symbol = 45,
  sym__dollar_symbol = 46,
  sym__quoted_symbol = 47,
  sym__field_name = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_struct_repeat1 = 50,
  aux_sym_list_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_null] = "null",
  [anon_sym_null_DOTint] = "null.int",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [aux_sym_version_marker_token1] = "version_marker_token1",
  [anon_sym_DOLLARion_] = "$ion_",
  [aux_sym_version_marker_token2] = "version_marker_token2",
  [anon_sym__] = "_",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_integer] = "integer",
  [aux_sym_symbol_table_token1] = "symbol",
  [anon_sym_DOLLARion_symbol_table] = "symbol",
  [anon_sym_symbols] = "symbol",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR] = "$",
  [sym__identifier] = "_identifier",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_symbol_token1] = "_quoted_symbol_token1",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_keyword] = "keyword",
  [sym_version_marker] = "version_marker",
  [sym_comment] = "comment",
  [sym_symbol_table] = "symbol_table",
  [sym_struct] = "struct",
  [sym_list] = "list",
  [sym_field_value_pair] = "field_value_pair",
  [sym__symbol_table_struct] = "_symbol_table_struct",
  [sym__symbol_table_symbols] = "_symbol_table_symbols",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym__dollar_symbol] = "_dollar_symbol",
  [sym__quoted_symbol] = "_quoted_symbol",
  [sym__field_name] = "_field_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_null_DOTint] = anon_sym_null_DOTint,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_version_marker_token1] = aux_sym_version_marker_token1,
  [anon_sym_DOLLARion_] = anon_sym_DOLLARion_,
  [aux_sym_version_marker_token2] = aux_sym_version_marker_token2,
  [anon_sym__] = anon_sym__,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_integer] = sym_integer,
  [aux_sym_symbol_table_token1] = sym_symbol,
  [anon_sym_DOLLARion_symbol_table] = sym_symbol,
  [anon_sym_symbols] = sym_symbol,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__identifier] = sym__identifier,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_symbol_token1] = aux_sym__quoted_symbol_token1,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_keyword] = sym_keyword,
  [sym_version_marker] = sym_version_marker,
  [sym_comment] = sym_comment,
  [sym_symbol_table] = sym_symbol_table,
  [sym_struct] = sym_struct,
  [sym_list] = sym_list,
  [sym_field_value_pair] = sym_field_value_pair,
  [sym__symbol_table_struct] = sym__symbol_table_struct,
  [sym__symbol_table_symbols] = sym__symbol_table_symbols,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym__dollar_symbol] = sym__dollar_symbol,
  [sym__quoted_symbol] = sym__quoted_symbol,
  [sym__field_name] = sym__field_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null_DOTint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_marker_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLARion_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_marker_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_table_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLARion_symbol_table] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_symbols] = {
    .visible = true,
    .named = true,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_version_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_table] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__symbol_table_struct] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol_table_symbols] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__dollar_symbol] = {
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
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_symbols = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_symbols] = "symbols",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_symbols, 2, .inherited = true},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_symbols, 1, .inherited = true},
  [4] =
    {field_symbols, 2},
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '"', 97,
        '$', 102,
        '\'', 126,
        '(', 69,
        ')', 70,
        ',', 78,
        '/', 89,
        ':', 76,
        '[', 71,
        ']', 73,
        '_', 83,
        'f', 104,
        'n', 121,
        's', 122,
        't', 116,
        '{', 65,
        '}', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '$') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '}') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 98,
        '$', 102,
        '\'', 127,
        ',', 79,
        '/', 9,
        ':', 77,
        '[', 72,
        ']', 74,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 98,
        '$', 102,
        '\'', 127,
        ',', 79,
        '/', 9,
        '[', 72,
        ']', 74,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 98,
        '$', 102,
        '\'', 127,
        '/', 90,
        ':', 12,
        '[', 72,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 98,
        '$', 101,
        '\'', 128,
        '[', 72,
        ']', 74,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 98,
        '$', 101,
        '\'', 128,
        '[', 72,
        ']', 74,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != 'e') ADVANCE(91);
      END_STATE();
    case 57:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '"', 98,
        '$', 102,
        '\'', 127,
        ',', 79,
        '/', 9,
        ':', 77,
        '[', 72,
        ']', 74,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(55);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '"', 98,
        '$', 102,
        '\'', 127,
        ',', 79,
        '/', 9,
        '[', 72,
        ']', 74,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(55);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '"', 98,
        '$', 102,
        '\'', 127,
        '/', 90,
        ':', 12,
        '[', 72,
        'f', 103,
        'n', 120,
        't', 115,
        '{', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_null_DOTint);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_version_marker_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOLLARion_);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_version_marker_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(11);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_symbol_table_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOLLARion_symbol_table);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_symbols);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_symbols);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '$') ADVANCE(28);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '$') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(130);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 59},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 59},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 129},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 99},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 59},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 85},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_null_DOTint] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_version_marker_token1] = ACTIONS(1),
    [anon_sym_DOLLARion_] = ACTIONS(1),
    [aux_sym_version_marker_token2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_symbol_table_token1] = ACTIONS(1),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(1),
    [anon_sym_symbols] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__value] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_version_marker] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_symbol_table] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_list] = STATE(3),
    [sym_string] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym__dollar_symbol] = STATE(4),
    [sym__quoted_symbol] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_null] = ACTIONS(5),
    [anon_sym_null_DOTint] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym_version_marker_token1] = ACTIONS(13),
    [anon_sym_DOLLARion_] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [sym_integer] = ACTIONS(21),
    [aux_sym_symbol_table_token1] = ACTIONS(23),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
  },
  [2] = {
    [sym__value] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_version_marker] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_symbol_table] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_list] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__dollar_symbol] = STATE(4),
    [sym__quoted_symbol] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_null] = ACTIONS(35),
    [anon_sym_null_DOTint] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(44),
    [aux_sym_version_marker_token1] = ACTIONS(47),
    [anon_sym_DOLLARion_] = ACTIONS(50),
    [anon_sym_SLASH_SLASH] = ACTIONS(53),
    [anon_sym_SLASH_STAR] = ACTIONS(56),
    [sym_integer] = ACTIONS(59),
    [aux_sym_symbol_table_token1] = ACTIONS(62),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [sym__identifier] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(74),
  },
  [3] = {
    [sym__value] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_version_marker] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_symbol_table] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_list] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__dollar_symbol] = STATE(4),
    [sym__quoted_symbol] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(5),
    [anon_sym_null_DOTint] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym_version_marker_token1] = ACTIONS(13),
    [anon_sym_DOLLARion_] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [sym_integer] = ACTIONS(79),
    [aux_sym_symbol_table_token1] = ACTIONS(23),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(83), 15,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [27] = 2,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(87), 15,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [54] = 2,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(91), 15,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [81] = 2,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(95), 15,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [108] = 2,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(99), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [134] = 2,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(103), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [160] = 2,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(107), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [186] = 2,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(111), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [212] = 2,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(115), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [238] = 2,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(119), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [264] = 2,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(123), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [290] = 2,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(127), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [316] = 2,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(131), 14,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [342] = 12,
    ACTIONS(7), 1,
      anon_sym_null_DOTint,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(135), 1,
      sym_integer,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    ACTIONS(5), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 6,
      sym__value,
      sym_keyword,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [387] = 12,
    ACTIONS(7), 1,
      anon_sym_null_DOTint,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      sym_integer,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    ACTIONS(5), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 6,
      sym__value,
      sym_keyword,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [432] = 12,
    ACTIONS(7), 1,
      anon_sym_null_DOTint,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      sym_integer,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    ACTIONS(5), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 6,
      sym__value,
      sym_keyword,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [477] = 11,
    ACTIONS(7), 1,
      anon_sym_null_DOTint,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      sym_integer,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    ACTIONS(5), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 6,
      sym__value,
      sym_keyword,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [519] = 3,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(147), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [545] = 11,
    ACTIONS(7), 1,
      anon_sym_null_DOTint,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      sym_integer,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    ACTIONS(5), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__value,
      sym_keyword,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [587] = 2,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(155), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [610] = 2,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(159), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [633] = 2,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(163), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [656] = 2,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(147), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [679] = 2,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(167), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [702] = 2,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_null_DOTint,
      aux_sym_version_marker_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      aux_sym_symbol_table_token1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(171), 11,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DOLLARion_,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      sym__identifier,
      anon_sym_SQUOTE,
  [725] = 8,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_field_value_pair,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(50), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [753] = 8,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_field_value_pair,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(50), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [781] = 8,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_field_value_pair,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(50), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [809] = 7,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym_field_value_pair,
    STATE(4), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(50), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [834] = 3,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_struct_repeat1,
  [844] = 3,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_list_repeat1,
  [854] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_list_repeat1,
  [864] = 3,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_list_repeat1,
  [874] = 3,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_struct_repeat1,
  [884] = 3,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_struct_repeat1,
  [894] = 1,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [899] = 2,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_list,
  [906] = 2,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym__symbol_table_struct,
  [913] = 2,
    ACTIONS(215), 1,
      anon_sym_symbols,
    STATE(53), 1,
      sym__symbol_table_symbols,
  [920] = 1,
    ACTIONS(217), 2,
      aux_sym_version_marker_token2,
      sym__identifier,
  [925] = 1,
    ACTIONS(191), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [930] = 1,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [935] = 1,
    ACTIONS(219), 1,
      anon_sym__,
  [939] = 1,
    ACTIONS(221), 1,
      aux_sym__quoted_symbol_token1,
  [943] = 1,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
  [947] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [951] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [955] = 1,
    ACTIONS(229), 1,
      aux_sym_string_token1,
  [959] = 1,
    ACTIONS(231), 1,
      anon_sym_COLON,
  [963] = 1,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
  [967] = 1,
    ACTIONS(235), 1,
      anon_sym_COLON_COLON,
  [971] = 1,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
  [975] = 1,
    ACTIONS(239), 1,
      aux_sym_comment_token2,
  [979] = 1,
    ACTIONS(241), 1,
      aux_sym_comment_token1,
  [983] = 1,
    ACTIONS(243), 1,
      aux_sym_version_marker_token2,
  [987] = 1,
    ACTIONS(245), 1,
      aux_sym_version_marker_token2,
  [991] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 27,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 264,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 316,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 519,
  [SMALL_STATE(22)] = 545,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 633,
  [SMALL_STATE(26)] = 656,
  [SMALL_STATE(27)] = 679,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 725,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 781,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 834,
  [SMALL_STATE(34)] = 844,
  [SMALL_STATE(35)] = 854,
  [SMALL_STATE(36)] = 864,
  [SMALL_STATE(37)] = 874,
  [SMALL_STATE(38)] = 884,
  [SMALL_STATE(39)] = 894,
  [SMALL_STATE(40)] = 899,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 913,
  [SMALL_STATE(43)] = 920,
  [SMALL_STATE(44)] = 925,
  [SMALL_STATE(45)] = 930,
  [SMALL_STATE(46)] = 935,
  [SMALL_STATE(47)] = 939,
  [SMALL_STATE(48)] = 943,
  [SMALL_STATE(49)] = 947,
  [SMALL_STATE(50)] = 951,
  [SMALL_STATE(51)] = 955,
  [SMALL_STATE(52)] = 959,
  [SMALL_STATE(53)] = 963,
  [SMALL_STATE(54)] = 967,
  [SMALL_STATE(55)] = 971,
  [SMALL_STATE(56)] = 975,
  [SMALL_STATE(57)] = 979,
  [SMALL_STATE(58)] = 983,
  [SMALL_STATE(59)] = 987,
  [SMALL_STATE(60)] = 991,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dollar_symbol, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dollar_symbol, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_marker, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_marker, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_table, 3, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_table, 3, 0, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_marker, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_marker, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_table_struct, 3, 0, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol_table_struct, 3, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value_pair, 3, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_table_symbols, 3, 0, 4),
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
