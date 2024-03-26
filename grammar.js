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
	name: 'm', 
	externals: $ => [],
	extras: $ => [],
	supertypes: $ => [],
	inline: $ => [],
	precedences: $ => [
		[
			'unary',
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
			'meta'
		],
		[
			'let-in',
			'if',
		],
	],
	conflicts: $ => [],
	word: $ => $._regular_identifier,
	rules: {
		document: $ => choice(repeat1($.section), $.expression),
		section: $ => seq(
			optional($.record_expression),
			"section",
			$.identifier,
			";",
			repeat1($.section_member)
		),
		section_member: $ => seq(
			// Omitting literal attributes for now;
			// they'll be colored like any other record.
			optional("shared"),
			$.identifier,
			"=",
			$.expression,
			";",
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

		unary_expression: $ => prec.left('unary', seq(
			choice("-", "+", "not"),
			$.expression,
		)),

		metadata_expression: $ => prec.left('meta', seq(
			$.expression,
			"meta",
			$.record_expression,
		)),

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
						field('operator', op),
						field('right', $.expression)
					))
				)
			)
		},

		let_expression: $ => prec.left('let-in', seq(
			"let",
			comma1(seq($.identifier, "=", $.expression)),
			"in",
			$.expression
		)),

		if_expression: $ => prec.left('if', seq(
			"if",
			$.expression,
			"then",
			$.expression,
			"else",
			$.expression
		)),

		each_expression: $ => prec.right(seq(
			"each",
			$.expression,
		)),

		error_expression: $ => prec.right(seq(
			"error",
			$.expression
		)),

		try_expression: $ => prec.right(seq(
			"try",
			$.expression,
			optional(choice(
				seq("otherwise", $.expression),
				seq("catch", "(", optional($.identifier), ")", $.expression)
			))
		)),
		
		primary_expression: $ => choice(
			$.literal_expression,
			$.list_expression,
			$.record_expression,
			$.identifier_expression,
			$.section_access_expression,
			$.parenthesized_expression,
			$.field_access_expression,
			$.item_access_expression,
			$.invoke_expression,
			$.not_implemented_expression,
		),
		
		literal_expression: $ => choice(
			$.boolean,
			$.number,
			$.string,
			$.null,
			$.verbatium,
		),
		list_expression: $ => seq(
			"{",
			comma(choice(
				$.expression,
				seq($.expression, "..", $.expression)
			)),
			"}",
		),
		record_expression: $ => seq(
			"[",
			comma(seq(
				$.identifier,
				"=",
				$.expression,
			)),
			"]",
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
		field_access_expression: $ => seq(
			"TODO implement this"
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
		string: $ => seq(
			'"',
			repeat(choice(
				$._string_fragment,
				$._escape_sequence,
				$._quote_escape,
			)),
			'"',
		),
		verbatium: $ => seq(
			'!#"',
			repeat(choice(
				$._string_fragment,
				$._escape_sequence,
				$._quote_escape,
			)),
			'"'
		),
		null: _ => "null",
		identifier: $ => choice(
			$._regular_identifier,
			$._quoted_identifier,
		),

		_regular_identifier: _ => token.immediate(/[_a-zA-Z][_\-a-zA-Z0-9]/),
		_quoted_identifier: $ => seq(
			'#"',
			choice(
				$._quote_escape,
				$._escape_sequence,
				$._string_fragment,
			),
			'"',
		),

		_string_fragment: _ => token.immediate(prec(1, /[^"\n\r]+/)),
		_quote_escape: _ => '""',
		_escape_sequence: _ => token.immediate(seq(
			"#(",
			comma(/[0-9a-fA-F]{4}|[0-9a-fA-F]{8}|cr|lf|tab|#/),
			")"
		)),
	},
})

function comma(rule) {
	return optional(comma1(rule)) 
}

function comma1(rule) {
	return seq(rule, repeat(seq(",", rule)))
}
