/**
 * @file A parser for gas's assembler for use with arm64
 * @author Will Schroeder <will.j.schroeder@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "arm64",

  extras: $ => [/ |\t|\r/, "\\\n", $.line_comment, $.block_comment],

  rules: {
    source_file: $ => sep(repeat1('\n'), $._line),
    _line: $ => choice($.directive, $.instruction),
    line_comment: $ => /\/\/.*/,
    block_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    )),
    comma: $ => ',',
    l_bracket: $ => '[',
    r_bracket: $ => ']',
    bang: $ => '!',

    directive: $ => seq(
      $.directive_identifier,
      optional($._directive_arguments),
    ),
    directive_identifier: $ => /\.[a-zA-Z][a-zA-Z0-9\-_]*/,
    _directive_arguments: $ => seq(
      $.directive_argument,
      sep_s($.comma, $.directive_argument)
    ),
    directive_argument: $ => choice($._identifier, $.number, $.string),

    _identifier: $ => /\\?[a-zA-Z_\.][a-zA-Z_0-9\.]*/,

    instruction: $ => choice($.label, $._instruction_segment, seq($.label, $._instruction_segment)),
    label: $ => seq($.label_identifier, ':'),
    label_identifier: $ => choice($._identifier, /[0-9]+/),
    _instruction_segment: $ => seq($.mnemonic, optional($._instruction_arguments)),
    mnemonic: $ => $._identifier,
    _instruction_arguments: $ => seq($._instruction_argument, sep_s($.comma, $._instruction_argument)),
    _instruction_argument: $ => choice($.register, $.number, $.indexed_register),

    register: $ => choice($.recognised_register, $._identifier),
    recognised_register: $ => choice(
      cased("sp"),
      cased("fp"),
      cased("pc"),
    ),
    number: $ => seq(optional('#'), optional("0x"), optional('-'), /[0-9]+/),
    indexed_register: $ => seq(
      $.l_bracket,
      $.register,
      sep_s($.comma, choice($.number, $.register)),
      $.r_bracket,
      optional($.bang)
    ),
    

    string: $ => choice($._dq_string, $._sq_string),
    _dq_string: $ => seq('"', repeat($._dq_string_character), '"'),
    _dq_string_character: $ => choice($._dq_ordinary_string_character, $.escape_sequence),
    _dq_ordinary_string_character: $ => /[a-zA-Z0-9~`!@#$%\^&*()_\-=+{}\[\]\|;:',.<>\/?]/,
    _sq_string: $ => seq('\'', repeat($._sq_string_character), '\''),
    _sq_string_character: $ => choice($._sq_ordinary_string_character, $.escape_sequence),
    _sq_ordinary_string_character: $ => /[a-zA-Z0-9~`!@#$%\^&*()_\-=+{}\[\]\|;:",.<>\/?]/,
    escape_sequence: $ => seq('\\', /[ -\~]/),
  }
});

function sep(separator, rule) {
  return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
function sep_s(separator, rule) {
  return repeat(seq(separator, rule))
}
function cased(string) {
  return choice(string, string.toUpperCase())
}
