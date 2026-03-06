#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_line_comment = 2,
  sym_block_comment = 3,
  sym_comma = 4,
  sym_l_bracket = 5,
  sym_r_bracket = 6,
  sym_bang = 7,
  sym_directive_identifier = 8,
  sym__identifier = 9,
  anon_sym_COLON = 10,
  aux_sym_label_identifier_token1 = 11,
  anon_sym_sp = 12,
  anon_sym_SP = 13,
  anon_sym_fp = 14,
  anon_sym_FP = 15,
  anon_sym_pc = 16,
  anon_sym_PC = 17,
  anon_sym_POUND = 18,
  anon_sym_0x = 19,
  anon_sym_DASH = 20,
  anon_sym_DQUOTE = 21,
  sym__dq_ordinary_string_character = 22,
  anon_sym_SQUOTE = 23,
  sym__sq_ordinary_string_character = 24,
  anon_sym_BSLASH = 25,
  aux_sym_escape_sequence_token1 = 26,
  sym_source_file = 27,
  sym__line = 28,
  sym_directive = 29,
  sym__directive_arguments = 30,
  sym_directive_argument = 31,
  sym_instruction = 32,
  sym_label = 33,
  sym_label_identifier = 34,
  sym__instruction_segment = 35,
  sym_mnemonic = 36,
  sym__instruction_arguments = 37,
  sym__instruction_argument = 38,
  sym_register = 39,
  sym_recognised_register = 40,
  sym_number = 41,
  sym_indexed_register = 42,
  sym_string = 43,
  sym__dq_string = 44,
  sym__dq_string_character = 45,
  sym__sq_string = 46,
  sym__sq_string_character = 47,
  sym_escape_sequence = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_source_file_repeat2 = 50,
  aux_sym__directive_arguments_repeat1 = 51,
  aux_sym__instruction_arguments_repeat1 = 52,
  aux_sym_indexed_register_repeat1 = 53,
  aux_sym__dq_string_repeat1 = 54,
  aux_sym__sq_string_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_comma] = "comma",
  [sym_l_bracket] = "l_bracket",
  [sym_r_bracket] = "r_bracket",
  [sym_bang] = "bang",
  [sym_directive_identifier] = "directive_identifier",
  [sym__identifier] = "_identifier",
  [anon_sym_COLON] = ":",
  [aux_sym_label_identifier_token1] = "label_identifier_token1",
  [anon_sym_sp] = "sp",
  [anon_sym_SP] = "SP",
  [anon_sym_fp] = "fp",
  [anon_sym_FP] = "FP",
  [anon_sym_pc] = "pc",
  [anon_sym_PC] = "PC",
  [anon_sym_POUND] = "#",
  [anon_sym_0x] = "0x",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [sym__dq_ordinary_string_character] = "_dq_ordinary_string_character",
  [anon_sym_SQUOTE] = "'",
  [sym__sq_ordinary_string_character] = "_sq_ordinary_string_character",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_directive] = "directive",
  [sym__directive_arguments] = "_directive_arguments",
  [sym_directive_argument] = "directive_argument",
  [sym_instruction] = "instruction",
  [sym_label] = "label",
  [sym_label_identifier] = "label_identifier",
  [sym__instruction_segment] = "_instruction_segment",
  [sym_mnemonic] = "mnemonic",
  [sym__instruction_arguments] = "_instruction_arguments",
  [sym__instruction_argument] = "_instruction_argument",
  [sym_register] = "register",
  [sym_recognised_register] = "recognised_register",
  [sym_number] = "number",
  [sym_indexed_register] = "indexed_register",
  [sym_string] = "string",
  [sym__dq_string] = "_dq_string",
  [sym__dq_string_character] = "_dq_string_character",
  [sym__sq_string] = "_sq_string",
  [sym__sq_string_character] = "_sq_string_character",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__directive_arguments_repeat1] = "_directive_arguments_repeat1",
  [aux_sym__instruction_arguments_repeat1] = "_instruction_arguments_repeat1",
  [aux_sym_indexed_register_repeat1] = "indexed_register_repeat1",
  [aux_sym__dq_string_repeat1] = "_dq_string_repeat1",
  [aux_sym__sq_string_repeat1] = "_sq_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_comma] = sym_comma,
  [sym_l_bracket] = sym_l_bracket,
  [sym_r_bracket] = sym_r_bracket,
  [sym_bang] = sym_bang,
  [sym_directive_identifier] = sym_directive_identifier,
  [sym__identifier] = sym__identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_label_identifier_token1] = aux_sym_label_identifier_token1,
  [anon_sym_sp] = anon_sym_sp,
  [anon_sym_SP] = anon_sym_SP,
  [anon_sym_fp] = anon_sym_fp,
  [anon_sym_FP] = anon_sym_FP,
  [anon_sym_pc] = anon_sym_pc,
  [anon_sym_PC] = anon_sym_PC,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__dq_ordinary_string_character] = sym__dq_ordinary_string_character,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__sq_ordinary_string_character] = sym__sq_ordinary_string_character,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_directive] = sym_directive,
  [sym__directive_arguments] = sym__directive_arguments,
  [sym_directive_argument] = sym_directive_argument,
  [sym_instruction] = sym_instruction,
  [sym_label] = sym_label,
  [sym_label_identifier] = sym_label_identifier,
  [sym__instruction_segment] = sym__instruction_segment,
  [sym_mnemonic] = sym_mnemonic,
  [sym__instruction_arguments] = sym__instruction_arguments,
  [sym__instruction_argument] = sym__instruction_argument,
  [sym_register] = sym_register,
  [sym_recognised_register] = sym_recognised_register,
  [sym_number] = sym_number,
  [sym_indexed_register] = sym_indexed_register,
  [sym_string] = sym_string,
  [sym__dq_string] = sym__dq_string,
  [sym__dq_string_character] = sym__dq_string_character,
  [sym__sq_string] = sym__sq_string,
  [sym__sq_string_character] = sym__sq_string_character,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__directive_arguments_repeat1] = aux_sym__directive_arguments_repeat1,
  [aux_sym__instruction_arguments_repeat1] = aux_sym__instruction_arguments_repeat1,
  [aux_sym_indexed_register_repeat1] = aux_sym_indexed_register_repeat1,
  [aux_sym__dq_string_repeat1] = aux_sym__dq_string_repeat1,
  [aux_sym__sq_string_repeat1] = aux_sym__sq_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_l_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_r_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_sp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__dq_ordinary_string_character] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__sq_ordinary_string_character] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction_segment] = {
    .visible = false,
    .named = true,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_recognised_register] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_indexed_register] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__dq_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dq_string_character] = {
    .visible = false,
    .named = true,
  },
  [sym__sq_string] = {
    .visible = false,
    .named = true,
  },
  [sym__sq_string_character] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__directive_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__instruction_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indexed_register_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__dq_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sq_string_repeat1] = {
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
  [40] = 38,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '!', 32,
        '"', 48,
        '#', 45,
        '\'', 51,
        ',', 29,
        '-', 47,
        '/', 50,
        ':', 36,
        '[', 30,
      );
      if (lookahead == '\\') SKIP(21);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('$' <= lookahead && lookahead <= '~')) ADVANCE(49);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 26,
        '!', 32,
        ',', 29,
        '-', 47,
        '.', 19,
        '/', 10,
        '0', 37,
        ':', 36,
        '\\', 4,
        ']', 31,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 26,
        '"', 48,
        '#', 45,
        '\'', 51,
        '-', 47,
        '/', 10,
        '0', 37,
        '\\', 6,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 26,
        '#', 45,
        '-', 47,
        '/', 10,
        '0', 37,
        ':', 36,
        'F', 14,
        'P', 13,
        'S', 15,
        '[', 30,
        '\\', 5,
        'f', 17,
        'p', 16,
        's', 18,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(7);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(42);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(40);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '!', 32,
        ',', 29,
        '-', 47,
        '.', 19,
        '/', 10,
        '0', 37,
        ':', 36,
        '\\', 4,
        ']', 31,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '"', 48,
        '#', 45,
        '\'', 51,
        '-', 47,
        '/', 10,
        '0', 37,
        '\\', 6,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '#', 45,
        '-', 47,
        '/', 10,
        '0', 37,
        ':', 36,
        'F', 14,
        'P', 13,
        'S', 15,
        '[', 30,
        '\\', 5,
        'f', 17,
        'p', 16,
        's', 18,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_l_bracket);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_r_bracket);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_directive_identifier);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_directive_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_label_identifier_token1);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_label_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_sp);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_fp);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_FP);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_pc);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PC);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__dq_ordinary_string_character);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__dq_ordinary_string_character);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__sq_ordinary_string_character);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__sq_ordinary_string_character);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(55);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(1),
    [sym_l_bracket] = ACTIONS(1),
    [sym_r_bracket] = ACTIONS(1),
    [sym_bang] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_label_identifier_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__dq_ordinary_string_character] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__sq_ordinary_string_character] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym__line] = STATE(36),
    [sym_directive] = STATE(36),
    [sym_instruction] = STATE(36),
    [sym_label] = STATE(20),
    [sym_label_identifier] = STATE(66),
    [sym__instruction_segment] = STATE(59),
    [sym_mnemonic] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_directive_identifier] = ACTIONS(7),
    [sym__identifier] = ACTIONS(9),
    [aux_sym_label_identifier_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      sym_l_bracket,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_recognised_register,
    STATE(55), 1,
      sym__instruction_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(30), 4,
      sym__instruction_argument,
      sym_register,
      sym_number,
      sym_indexed_register,
    ACTIONS(21), 6,
      anon_sym_sp,
      anon_sym_SP,
      anon_sym_fp,
      anon_sym_FP,
      anon_sym_pc,
      anon_sym_PC,
  [47] = 10,
    ACTIONS(15), 1,
      sym_l_bracket,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_recognised_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(46), 4,
      sym__instruction_argument,
      sym_register,
      sym_number,
      sym_indexed_register,
    ACTIONS(21), 6,
      anon_sym_sp,
      anon_sym_SP,
      anon_sym_fp,
      anon_sym_FP,
      anon_sym_pc,
      anon_sym_PC,
  [87] = 13,
    ACTIONS(19), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_directive_argument,
    STATE(57), 1,
      sym__directive_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(50), 2,
      sym_number,
      sym_string,
    STATE(52), 2,
      sym__dq_string,
      sym__sq_string,
  [131] = 4,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_l_bracket,
      anon_sym_POUND,
      anon_sym_0x,
      anon_sym_DASH,
    ACTIONS(39), 8,
      sym__identifier,
      aux_sym_label_identifier_token1,
      anon_sym_sp,
      anon_sym_SP,
      anon_sym_fp,
      anon_sym_FP,
      anon_sym_pc,
      anon_sym_PC,
  [157] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_l_bracket,
      anon_sym_POUND,
      anon_sym_0x,
      anon_sym_DASH,
    ACTIONS(39), 8,
      sym__identifier,
      aux_sym_label_identifier_token1,
      anon_sym_sp,
      anon_sym_SP,
      anon_sym_fp,
      anon_sym_FP,
      anon_sym_pc,
      anon_sym_PC,
  [180] = 9,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_recognised_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
      sym_register,
      sym_number,
    ACTIONS(21), 6,
      anon_sym_sp,
      anon_sym_SP,
      anon_sym_fp,
      anon_sym_FP,
      anon_sym_pc,
      anon_sym_PC,
  [215] = 12,
    ACTIONS(7), 1,
      sym_directive_identifier,
    ACTIONS(9), 1,
      sym__identifier,
    ACTIONS(11), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym_mnemonic,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 1,
      sym_label,
    STATE(59), 1,
      sym__instruction_segment,
    STATE(66), 1,
      sym_label_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(62), 3,
      sym__line,
      sym_directive,
      sym_instruction,
  [255] = 12,
    ACTIONS(7), 1,
      sym_directive_identifier,
    ACTIONS(9), 1,
      sym__identifier,
    ACTIONS(11), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_mnemonic,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 1,
      sym_label,
    STATE(59), 1,
      sym__instruction_segment,
    STATE(66), 1,
      sym_label_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(62), 3,
      sym__line,
      sym_directive,
      sym_instruction,
  [295] = 11,
    ACTIONS(7), 1,
      sym_directive_identifier,
    ACTIONS(9), 1,
      sym__identifier,
    ACTIONS(11), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym_mnemonic,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 1,
      sym_label,
    STATE(59), 1,
      sym__instruction_segment,
    STATE(66), 1,
      sym_label_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(62), 3,
      sym__line,
      sym_directive,
      sym_instruction,
  [332] = 11,
    ACTIONS(19), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_0x,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_directive_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(50), 2,
      sym_number,
      sym_string,
    STATE(52), 2,
      sym__dq_string,
      sym__sq_string,
  [369] = 5,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(27), 1,
      sym_recognised_register,
    STATE(45), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(21), 6,
      anon_sym_sp,
      anon_sym_SP,
      anon_sym_fp,
      anon_sym_FP,
      anon_sym_pc,
      anon_sym_PC,
  [391] = 5,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      sym__sq_ordinary_string_character,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 3,
      sym__sq_string_character,
      sym_escape_sequence,
      aux_sym__sq_string_repeat1,
  [410] = 5,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym__dq_ordinary_string_character,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym__dq_string_character,
      sym_escape_sequence,
      aux_sym__dq_string_repeat1,
  [429] = 5,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym__sq_ordinary_string_character,
    ACTIONS(68), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 3,
      sym__sq_string_character,
      sym_escape_sequence,
      aux_sym__sq_string_repeat1,
  [448] = 5,
    ACTIONS(61), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__dq_ordinary_string_character,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(14), 3,
      sym__dq_string_character,
      sym_escape_sequence,
      aux_sym__dq_string_repeat1,
  [467] = 5,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      sym__sq_ordinary_string_character,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(13), 3,
      sym__sq_string_character,
      sym_escape_sequence,
      aux_sym__sq_string_repeat1,
  [486] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym__dq_ordinary_string_character,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(18), 3,
      sym__dq_string_character,
      sym_escape_sequence,
      aux_sym__dq_string_repeat1,
  [505] = 5,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym_label_identifier_token1,
    ACTIONS(92), 2,
      sym_directive_identifier,
      sym__identifier,
  [524] = 5,
    ACTIONS(96), 1,
      sym__identifier,
    STATE(2), 1,
      sym_mnemonic,
    STATE(58), 1,
      sym__instruction_segment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [542] = 3,
    ACTIONS(100), 1,
      sym_bang,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [555] = 5,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [572] = 3,
    ACTIONS(106), 1,
      sym_bang,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [585] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
      sym_r_bracket,
  [596] = 4,
    ACTIONS(112), 1,
      sym_comma,
    STATE(35), 1,
      aux_sym__instruction_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [611] = 4,
    ACTIONS(116), 1,
      sym_comma,
    STATE(34), 1,
      aux_sym__directive_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [626] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
      sym_r_bracket,
  [637] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
      sym_r_bracket,
  [648] = 4,
    ACTIONS(124), 1,
      sym_comma,
    STATE(29), 1,
      aux_sym__directive_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [663] = 4,
    ACTIONS(112), 1,
      sym_comma,
    STATE(25), 1,
      aux_sym__instruction_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [678] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
      sym_r_bracket,
  [689] = 5,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [706] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
      sym_r_bracket,
  [717] = 4,
    ACTIONS(116), 1,
      sym_comma,
    STATE(29), 1,
      aux_sym__directive_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [732] = 4,
    ACTIONS(142), 1,
      sym_comma,
    STATE(35), 1,
      aux_sym__instruction_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [747] = 5,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [764] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
      sym_r_bracket,
  [775] = 3,
    ACTIONS(153), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_DQUOTE,
      sym__dq_ordinary_string_character,
  [787] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [797] = 3,
    ACTIONS(153), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 2,
      anon_sym_SQUOTE,
      sym__sq_ordinary_string_character,
  [809] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [819] = 4,
    ACTIONS(157), 1,
      sym_comma,
    ACTIONS(160), 1,
      sym_r_bracket,
    STATE(42), 1,
      aux_sym_indexed_register_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [833] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [843] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [853] = 4,
    ACTIONS(164), 1,
      sym_comma,
    ACTIONS(166), 1,
      sym_r_bracket,
    STATE(49), 1,
      aux_sym_indexed_register_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [867] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [877] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [887] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym__identifier,
  [897] = 4,
    ACTIONS(164), 1,
      sym_comma,
    ACTIONS(172), 1,
      sym_r_bracket,
    STATE(42), 1,
      aux_sym_indexed_register_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [911] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [921] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [931] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [941] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comma,
  [951] = 4,
    ACTIONS(182), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(184), 1,
      anon_sym_0x,
    ACTIONS(186), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [965] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [974] = 3,
    ACTIONS(186), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [985] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [994] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1003] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1012] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 2,
      sym_comma,
      sym_r_bracket,
  [1021] = 3,
    ACTIONS(196), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(198), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1032] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1041] = 2,
    ACTIONS(190), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1049] = 2,
    ACTIONS(200), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
  [1057] = 2,
    ACTIONS(202), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1065] = 2,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1073] = 2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1081] = 2,
    ACTIONS(196), 1,
      aux_sym_label_identifier_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1089] = 2,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1097] = 2,
    ACTIONS(208), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(49), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 448,
  [SMALL_STATE(17)] = 467,
  [SMALL_STATE(18)] = 486,
  [SMALL_STATE(19)] = 505,
  [SMALL_STATE(20)] = 524,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 585,
  [SMALL_STATE(25)] = 596,
  [SMALL_STATE(26)] = 611,
  [SMALL_STATE(27)] = 626,
  [SMALL_STATE(28)] = 637,
  [SMALL_STATE(29)] = 648,
  [SMALL_STATE(30)] = 663,
  [SMALL_STATE(31)] = 678,
  [SMALL_STATE(32)] = 689,
  [SMALL_STATE(33)] = 706,
  [SMALL_STATE(34)] = 717,
  [SMALL_STATE(35)] = 732,
  [SMALL_STATE(36)] = 747,
  [SMALL_STATE(37)] = 764,
  [SMALL_STATE(38)] = 775,
  [SMALL_STATE(39)] = 787,
  [SMALL_STATE(40)] = 797,
  [SMALL_STATE(41)] = 809,
  [SMALL_STATE(42)] = 819,
  [SMALL_STATE(43)] = 833,
  [SMALL_STATE(44)] = 843,
  [SMALL_STATE(45)] = 853,
  [SMALL_STATE(46)] = 867,
  [SMALL_STATE(47)] = 877,
  [SMALL_STATE(48)] = 887,
  [SMALL_STATE(49)] = 897,
  [SMALL_STATE(50)] = 911,
  [SMALL_STATE(51)] = 921,
  [SMALL_STATE(52)] = 931,
  [SMALL_STATE(53)] = 941,
  [SMALL_STATE(54)] = 951,
  [SMALL_STATE(55)] = 965,
  [SMALL_STATE(56)] = 974,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 994,
  [SMALL_STATE(59)] = 1003,
  [SMALL_STATE(60)] = 1012,
  [SMALL_STATE(61)] = 1021,
  [SMALL_STATE(62)] = 1032,
  [SMALL_STATE(63)] = 1041,
  [SMALL_STATE(64)] = 1049,
  [SMALL_STATE(65)] = 1057,
  [SMALL_STATE(66)] = 1065,
  [SMALL_STATE(67)] = 1073,
  [SMALL_STATE(68)] = 1081,
  [SMALL_STATE(69)] = 1089,
  [SMALL_STATE(70)] = 1097,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_segment, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_identifier, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sq_string_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sq_string_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sq_string_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__dq_string_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__dq_string_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__dq_string_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_register, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_register, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_arguments, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arguments, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recognised_register, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directive_arguments_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directive_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_arguments, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_arguments, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__instruction_arguments_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__instruction_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_register, 5, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexed_register_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexed_register_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dq_string, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sq_string, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dq_string, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sq_string, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_segment, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
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

TS_PUBLIC const TSLanguage *tree_sitter_arm64(void) {
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
