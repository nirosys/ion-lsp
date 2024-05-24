#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_SQUOTE = 1,
  anon_sym_DOLLARion_ = 2,
  aux_sym_version_marker_token1 = 3,
  anon_sym__ = 4,
  anon_sym_DOLLARion_symbol_table = 5,
  anon_sym_COLON_COLON = 6,
  anon_sym_LBRACE = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACE = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_COLON = 12,
  anon_sym_symbols = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  anon_sym_DOLLAR = 16,
  sym__identifier = 17,
  aux_sym__quoted_symbol_token1 = 18,
  sym_source_file = 19,
  sym__value = 20,
  sym_version_marker = 21,
  sym_symbol_table = 22,
  sym_struct = 23,
  sym_list = 24,
  sym_field_value_pair = 25,
  sym__symbol_table_struct = 26,
  sym__symbol_table_symbols = 27,
  sym_string = 28,
  sym_symbol = 29,
  sym__dollar_symbol = 30,
  sym__quoted_symbol = 31,
  sym__field_name = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_struct_repeat1 = 34,
  aux_sym_list_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOLLARion_] = "$ion_",
  [aux_sym_version_marker_token1] = "version_marker_token1",
  [anon_sym__] = "_",
  [anon_sym_DOLLARion_symbol_table] = "$ion_symbol_table",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_symbols] = "symbols",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DOLLAR] = "$",
  [sym__identifier] = "_identifier",
  [aux_sym__quoted_symbol_token1] = "_quoted_symbol_token1",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym_version_marker] = "version_marker",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOLLARion_] = anon_sym_DOLLARion_,
  [aux_sym_version_marker_token1] = aux_sym_version_marker_token1,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOLLARion_symbol_table] = anon_sym_DOLLARion_symbol_table,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_symbols] = anon_sym_symbols,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym__identifier] = sym__identifier,
  [aux_sym__quoted_symbol_token1] = aux_sym__quoted_symbol_token1,
  [sym_source_file] = sym_source_file,
  [sym__value] = sym__value,
  [sym_version_marker] = sym_version_marker,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARion_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_marker_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARion_symbol_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_symbols] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
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
  [sym_version_marker] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_symbols, 2},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_symbols, 4},
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 43,
        '$', 47,
        '\'', 26,
        ',', 35,
        ':', 40,
        '[', 37,
        ']', 38,
        '_', 30,
        's', 53,
        '{', 34,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 43,
        '$', 46,
        '\'', 26,
        ':', 2,
        '[', 37,
        ']', 38,
        '{', 34,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 43,
        '$', 47,
        '\'', 26,
        ',', 35,
        ':', 39,
        '[', 37,
        ']', 38,
        '{', 34,
        '}', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOLLARion_);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLARion_);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_version_marker_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLARion_symbol_table);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLARion_symbol_table);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_symbols);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_symbols);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == '$') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__quoted_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 71},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLARion_] = ACTIONS(1),
    [aux_sym_version_marker_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_symbols] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__value] = STATE(3),
    [sym_version_marker] = STATE(3),
    [sym_symbol_table] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_list] = STATE(3),
    [sym_string] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym__dollar_symbol] = STATE(11),
    [sym__quoted_symbol] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DOLLARion_] = ACTIONS(7),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
  },
  [2] = {
    [sym__value] = STATE(2),
    [sym_version_marker] = STATE(2),
    [sym_symbol_table] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_list] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__dollar_symbol] = STATE(11),
    [sym__quoted_symbol] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DOLLARion_] = ACTIONS(26),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(41),
    [sym__identifier] = ACTIONS(44),
  },
  [3] = {
    [sym__value] = STATE(2),
    [sym_version_marker] = STATE(2),
    [sym_symbol_table] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_list] = STATE(2),
    [sym_string] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym__dollar_symbol] = STATE(11),
    [sym__quoted_symbol] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_DOLLARion_] = ACTIONS(7),
    [anon_sym_DOLLARion_symbol_table] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(39), 5,
      sym__value,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [33] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(36), 5,
      sym__value,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [66] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(39), 5,
      sym__value,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [99] = 2,
    ACTIONS(61), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
  [117] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(39), 5,
      sym__value,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [147] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(40), 5,
      sym__value,
      sym_struct,
      sym_list,
      sym_string,
      sym_symbol,
  [177] = 2,
    ACTIONS(65), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
  [195] = 2,
    ACTIONS(69), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
  [213] = 2,
    ACTIONS(73), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__identifier,
  [231] = 2,
    ACTIONS(77), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(75), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [248] = 2,
    ACTIONS(81), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [265] = 2,
    ACTIONS(85), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [282] = 2,
    ACTIONS(89), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [299] = 2,
    ACTIONS(93), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [316] = 2,
    ACTIONS(97), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(95), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [333] = 2,
    ACTIONS(101), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [350] = 2,
    ACTIONS(105), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [367] = 8,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_field_value_pair,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(49), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [395] = 8,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym_field_value_pair,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(49), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [423] = 8,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_field_value_pair,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(49), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [451] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_field_value_pair,
    STATE(11), 2,
      sym__dollar_symbol,
      sym__quoted_symbol,
    STATE(49), 3,
      sym_string,
      sym_symbol,
      sym__field_name,
  [476] = 2,
    ACTIONS(115), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [490] = 2,
    ACTIONS(119), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [504] = 2,
    ACTIONS(123), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [518] = 2,
    ACTIONS(127), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [532] = 2,
    ACTIONS(131), 2,
      anon_sym_DOLLARion_,
      anon_sym_DOLLAR,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DOLLARion_symbol_table,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__identifier,
  [546] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_struct_repeat1,
  [556] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_struct_repeat1,
  [566] = 3,
    ACTIONS(142), 1,
      anon_sym_DOLLARion_,
    ACTIONS(144), 1,
      anon_sym_DOLLARion_symbol_table,
    ACTIONS(146), 1,
      aux_sym__quoted_symbol_token1,
  [576] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_struct_repeat1,
  [586] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_list_repeat1,
  [596] = 3,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_list_repeat1,
  [606] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_list_repeat1,
  [616] = 1,
    ACTIONS(161), 2,
      aux_sym_version_marker_token1,
      sym__identifier,
  [621] = 2,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_list,
  [628] = 1,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [633] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [638] = 2,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym__symbol_table_struct,
  [645] = 2,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym__symbol_table_struct,
  [652] = 2,
    ACTIONS(167), 1,
      anon_sym_symbols,
    STATE(47), 1,
      sym__symbol_table_symbols,
  [659] = 1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [664] = 1,
    ACTIONS(169), 1,
      aux_sym__quoted_symbol_token1,
  [668] = 1,
    ACTIONS(171), 1,
      aux_sym_version_marker_token1,
  [672] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [676] = 1,
    ACTIONS(175), 1,
      anon_sym_COLON,
  [680] = 1,
    ACTIONS(177), 1,
      anon_sym_COLON,
  [684] = 1,
    ACTIONS(179), 1,
      anon_sym__,
  [688] = 1,
    ACTIONS(181), 1,
      aux_sym_version_marker_token1,
  [692] = 1,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
  [696] = 1,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
  [700] = 1,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
  [704] = 1,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
  [708] = 1,
    ACTIONS(191), 1,
      anon_sym__,
  [712] = 1,
    ACTIONS(193), 1,
      aux_sym_version_marker_token1,
  [716] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [720] = 1,
    ACTIONS(197), 1,
      anon_sym_COLON_COLON,
  [724] = 1,
    ACTIONS(199), 1,
      aux_sym_string_token1,
  [728] = 1,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
  [732] = 1,
    ACTIONS(203), 1,
      aux_sym_version_marker_token1,
  [736] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 282,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 316,
  [SMALL_STATE(19)] = 333,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 367,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 451,
  [SMALL_STATE(25)] = 476,
  [SMALL_STATE(26)] = 490,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 518,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 546,
  [SMALL_STATE(31)] = 556,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 576,
  [SMALL_STATE(34)] = 586,
  [SMALL_STATE(35)] = 596,
  [SMALL_STATE(36)] = 606,
  [SMALL_STATE(37)] = 616,
  [SMALL_STATE(38)] = 621,
  [SMALL_STATE(39)] = 628,
  [SMALL_STATE(40)] = 633,
  [SMALL_STATE(41)] = 638,
  [SMALL_STATE(42)] = 645,
  [SMALL_STATE(43)] = 652,
  [SMALL_STATE(44)] = 659,
  [SMALL_STATE(45)] = 664,
  [SMALL_STATE(46)] = 668,
  [SMALL_STATE(47)] = 672,
  [SMALL_STATE(48)] = 676,
  [SMALL_STATE(49)] = 680,
  [SMALL_STATE(50)] = 684,
  [SMALL_STATE(51)] = 688,
  [SMALL_STATE(52)] = 692,
  [SMALL_STATE(53)] = 696,
  [SMALL_STATE(54)] = 700,
  [SMALL_STATE(55)] = 704,
  [SMALL_STATE(56)] = 708,
  [SMALL_STATE(57)] = 712,
  [SMALL_STATE(58)] = 716,
  [SMALL_STATE(59)] = 720,
  [SMALL_STATE(60)] = 724,
  [SMALL_STATE(61)] = 728,
  [SMALL_STATE(62)] = 732,
  [SMALL_STATE(63)] = 736,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_symbol, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dollar_symbol, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dollar_symbol, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_marker, 6, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_marker, 6, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_marker, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_marker, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_table, 5, 0, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_table, 5, 0, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_table, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_table, 3, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_table_struct, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol_table_struct, 3, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value_pair, 3, 0, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_table_symbols, 3, 0, 0),
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
