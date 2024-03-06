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
	precedences: $ => [
		'mul',
		'div',
		'plus',
		'sub',
		'concat',
		'lt' ,
		'gt' ,
		'lte',
		'gte',
		'eq',
		'neq',
		'as',
		'is',
		'and',
		'or',
		'coalesce',
	],
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
			$.primary_expression,
			$.unary_expression,
			$.metadata_expression,
			$.binary_expression,
			$.let_expression,
			$.if_expression,
			$.each_expression,
			$.error_expression,
			$.try_expression,
		),

		uniary_expression: $ => seq(
			choice("-", "+", "not"),
			$.expression,
		),

		metadata_expression: $ => seq(
			$.uniary_expression,
			"meta",
			$.uniary_expression
		),

		binary_expression: $ => {
			const operators = [
				['*', 'mul'],
				['/', 'div'],
				['+', 'plus'],
				['-', 'sub'],
				['&', 'concat'],
				['<', 'lt' ],
				['>', 'gt' ],
				['<=', 'lte'],
				['>=', 'gte'],
				['=', 'eq'],
				['<>', 'neq'],
				['as', 'as'],
				['is', 'is'],
				['and', 'and'],
				['or', 'or'],
				['??', 'coalesce'],
			];
			return choice(
				...operators.map(([op, opName]) => 
					prec.left(opName, seq(
						field('left', $.expression),
						field('operator', $.op),
						field('right', $.expression)
					))
				)
			)
		},

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

		each_expression: $ => seq(
			"each",
			$.expression,
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
				seq("catch", "(", optional($.identifier), ")", $.expression)
			))
		),
		
		primary_expression: $ => choice(
			$.literal_expression,
			$.list_expression,
			// TODO record expression
			$.identifier_expression,
			$.section_access_expression,
			$.parenthesized_expression,
			// TODO field access expression
			$.item_access_expression,
			$.invoke_expression,
			$.not_implemented_expression,
		),
		
		literal_expression: $ => choice(
			$.boolean,
			$.number,
			// TODO string
			$.null,
			// TODO verbatium
		),
		list_expression: $ => seq(
			"{",
			comma(choice(
				$.expression,
				seq($.expression, "..", $.expression)
			)),
			"}",
		),
		identifier_expression: $ => seq(
			optional("@"), $.identifier,
		),
		section_access_expression: $ => seq(
			$.identifier, "!", $.identifier,
		),
		parenthesized_expression: $ => seq(
			"(", $.expression, ")",
		),
		item_access_expression: $ => seq(
			$.primary_expression,
			"{",
			$.expression,
			"}",
			optional("?"),
		),
		invoke_expression: $ => seq(
			$.primary_expression,
			"(",
			comma($.expression),
			")",
		),
		not_implemented_expression: _ => "...",

		boolean: _ => choice("true", "false"),
		number: _ => {
			const hex = /0[xX][0-9a-fA-F]+/
			// Yes, gross, but since M Lang has a fairly
			// confined definition of a decimal literal
			// a regex felt okay. Don't @ me
			const decimal = /[0-9]+(\.[0-9]+)?([eE][\-+]?[0-9]+)?/
			return choice(hex, decimal)
		},
		null: _ => "null",
		identifier: $ => choice(
			$._regular_identifier,
			$._quoted_identifier,
		),

		_regular_identifier: _ => /[_a-zA-Z][_\-a-zA-Z0-9]/,
		_quoted_identifier: _ => seq(
			'#"',
			/.+/, // TODO this is the same as a string format
			'"',
		),
	},
})

function comma(rule) {
	return optional(comma1(rule)) 
}

function comma1(rule) {
	return seq(rule, repeat(seq(",", rule)))
}
