#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_BANG = 6,
  aux_sym_directive_token1 = 7,
  anon_sym_COLON = 8,
  sym_comment = 9,
  sym_identifier = 10,
  anon_sym_POUND = 11,
  aux_sym_int_token1 = 12,
  aux_sym_int_token2 = 13,
  sym_float = 14,
  sym_string = 15,
  sym_program = 16,
  sym_instruction = 17,
  sym__expr = 18,
  sym_regs = 19,
  sym_directive = 20,
  sym_label = 21,
  sym_int = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym_instruction_repeat1 = 24,
  aux_sym_regs_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BANG] = "!",
  [aux_sym_directive_token1] = "directive_token1",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_program] = "program",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_regs] = "regs",
  [sym_directive] = "directive",
  [sym_label] = "label",
  [sym_int] = "int",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_regs_repeat1] = "regs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_program] = sym_program,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_regs] = sym_regs,
  [sym_directive] = sym_directive,
  [sym_label] = sym_label,
  [sym_int] = sym_int,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_regs_repeat1] = aux_sym_regs_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_regs] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regs_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_mnemonic = 1,
  field_operands = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_mnemonic] = "mnemonic",
  [field_operands] = "operands",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mnemonic, 0},
    {field_operands, 1},
  [2] =
    {field_mnemonic, 0},
    {field_operands, 1},
    {field_operands, 2},
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
  [31] = 11,
  [32] = 12,
  [33] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '!', 21,
        '"', 2,
        '#', 26,
        '$', 11,
        ',', 16,
        '-', 5,
        '.', 13,
        '0', 27,
        ':', 23,
        ';', 24,
        '[', 19,
        ']', 20,
        '{', 17,
        '}', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 26,
        '$', 12,
        '-', 7,
        '0', 31,
        ':', 23,
        ';', 24,
        '[', 19,
        '{', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ';') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ';') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '0') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(34);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '!', 21,
        '"', 2,
        '#', 26,
        '$', 12,
        ',', 16,
        '-', 6,
        '.', 13,
        '0', 33,
        ':', 23,
        ';', 24,
        '[', 19,
        ']', 20,
        '{', 17,
        '}', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_int_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(27),
    [sym_instruction] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_label] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_directive_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      aux_sym_int_token2,
    ACTIONS(25), 2,
      sym_float,
      sym_string,
    STATE(7), 3,
      sym__expr,
      sym_regs,
      sym_int,
  [31] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      aux_sym_int_token2,
    ACTIONS(27), 2,
      sym_float,
      sym_string,
    STATE(14), 3,
      sym__expr,
      sym_regs,
      sym_int,
  [59] = 5,
    ACTIONS(7), 1,
      aux_sym_directive_token1,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_comment,
    STATE(5), 4,
      sym_instruction,
      sym_directive,
      sym_label,
      aux_sym_program_repeat1,
  [78] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_directive_token1,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(5), 4,
      sym_instruction,
      sym_directive,
      sym_label,
      aux_sym_program_repeat1,
  [97] = 2,
    ACTIONS(46), 1,
      anon_sym_BANG,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [108] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [121] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [134] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [147] = 1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [155] = 1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [163] = 1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [171] = 1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [179] = 1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [187] = 1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [195] = 1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [203] = 1,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_regs_repeat1,
  [223] = 1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      aux_sym_directive_token1,
      sym_comment,
      sym_identifier,
  [230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_regs_repeat1,
  [243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      aux_sym_int_token2,
    STATE(29), 1,
      sym_int,
  [256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_regs_repeat1,
  [269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      anon_sym_COMMA,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_identifier,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_int_token1,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
  [336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_int_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 269,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 315,
  [SMALL_STATE(30)] = 322,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 343,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regs, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regs, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regs, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regs, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regs, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regs_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regs_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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

TS_PUBLIC const TSLanguage *tree_sitter_arm(void) {
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
