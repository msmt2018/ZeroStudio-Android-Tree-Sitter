(line_comment) @comment.line
(block_comment) @comment.block

(comma) @punctuation.delimiter
(l_bracket) @punctuation.bracket
(r_bracket) @punctuation.bracket
(bang) @operator

(directive_identifier) @keyword.directive
(directive_argument) @variables
(mnemonic) @function
(register) @variable
(recognised_register) @variable.builtin
(number) @numeric
(string) @string
(escape_sequence) @constant.character.escape
(label) @label

