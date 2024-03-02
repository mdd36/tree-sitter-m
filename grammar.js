/**
 * @file M Language grammar for tree-sitter
 * @author Matthew Dickson <hi@mattdickson.io> 
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
// @ts-check

module.exports = grammar({
	name: 'powerquery-m', 
	externals: $ => [],
	extras: $ => [],
	supertypes: $ => [],
	inline: $ => [],
	precedences: $ => [],
	conflicts: $ => [],
	word: $ => $.identifier,
	rules: {
		document: $ => choice(repeat($.section), $.expression),
		section: $ => seq(
			optional($.literal_attributes),
			"section",
			$.identifier,
			";",
			repeat1($.section_member)
		),
		section_member: $ => seq(
			optional($.literal_attributes),
			optional("shared"),
			$.identifier,
			"=",
			$.expression
		),
		expression: $ => choice(
			$.let_expression,
			$.if_expression
		),

		let_expression: $ => seq(
			"let",
			comma1(seq($.identifier, "=", $.expression)),
			"in",
			$.expression
		),

		if_expression: $ => seq(
			"if",
			$.expression,
			"then",
			$.expression,
			"else",
			$.expression
		),

		error_expression: $ => seq(
			"error",
			$.expression
		),

		try_expression: $ => seq(
			"try",
			$.expression,
			optional(choice(
				seq("otherwise", $.expression),
				seq("catch", "(", optional($.identifier), ")", $.function_body)
			))
		),

		identifier: _ => /@?[a-zA-Z][a-zA-Z0-9]/
})

function comma(rule) {
	return optional(comma1(rule)) 
}

function comma1(rule) {
	return seq(rule, repeat(seq(",", rule)))
}
