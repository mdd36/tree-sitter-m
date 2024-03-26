#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  sym__regular_identifier = 1,
  anon_sym_section = 2,
  anon_sym_SEMI = 3,
  anon_sym_shared = 4,
  anon_sym_EQ = 5,
  anon_sym_DASH = 6,
  anon_sym_PLUS = 7,
  anon_sym_not = 8,
  anon_sym_meta = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_AMP = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_GT = 17,
  anon_sym_as = 18,
  anon_sym_is = 19,
  anon_sym_and = 20,
  anon_sym_or = 21,
  anon_sym_QMARK_QMARK = 22,
  anon_sym_let = 23,
  anon_sym_COMMA = 24,
  anon_sym_in = 25,
  anon_sym_if = 26,
  anon_sym_then = 27,
  anon_sym_else = 28,
  anon_sym_each = 29,
  anon_sym_error = 30,
  anon_sym_try = 31,
  anon_sym_otherwise = 32,
  anon_sym_catch = 33,
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  anon_sym_LBRACE = 36,
  anon_sym_DOT_DOT = 37,
  anon_sym_RBRACE = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_AT = 41,
  anon_sym_BANG = 42,
  anon_sym_TODOimplementthis = 43,
  anon_sym_QMARK = 44,
  sym_not_implemented_expression = 45,
  anon_sym_true = 46,
  anon_sym_false = 47,
  aux_sym_number_token1 = 48,
  aux_sym_number_token2 = 49,
  anon_sym_DQUOTE = 50,
  anon_sym_BANG_POUND_DQUOTE = 51,
  sym_null = 52,
  anon_sym_POUND_DQUOTE = 53,
  sym__string_fragment = 54,
  sym__quote_escape = 55,
  sym__escape_sequence = 56,
  sym_document = 57,
  sym_section = 58,
  sym_section_member = 59,
  sym_expression = 60,
  sym_unary_expression = 61,
  sym_metadata_expression = 62,
  sym_binary_expression = 63,
  sym_let_expression = 64,
  sym_if_expression = 65,
  sym_each_expression = 66,
  sym_error_expression = 67,
  sym_try_expression = 68,
  sym_primary_expression = 69,
  sym_literal_expression = 70,
  sym_list_expression = 71,
  sym_record_expression = 72,
  sym_identifier_expression = 73,
  sym_section_access_expression = 74,
  sym_parenthesized_expression = 75,
  sym_field_access_expression = 76,
  sym_item_access_expression = 77,
  sym_invoke_expression = 78,
  sym_boolean = 79,
  sym_number = 80,
  sym_string = 81,
  sym_verbatium = 82,
  sym_identifier = 83,
  sym__quoted_identifier = 84,
  aux_sym_document_repeat1 = 85,
  aux_sym_section_repeat1 = 86,
  aux_sym_let_expression_repeat1 = 87,
  aux_sym_list_expression_repeat1 = 88,
  aux_sym_invoke_expression_repeat1 = 89,
  aux_sym_string_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__regular_identifier] = "_regular_identifier",
  [anon_sym_section] = "section",
  [anon_sym_SEMI] = ";",
  [anon_sym_shared] = "shared",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_not] = "not",
  [anon_sym_meta] = "meta",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_as] = "as",
  [anon_sym_is] = "is",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_let] = "let",
  [anon_sym_COMMA] = ",",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_each] = "each",
  [anon_sym_error] = "error",
  [anon_sym_try] = "try",
  [anon_sym_otherwise] = "otherwise",
  [anon_sym_catch] = "catch",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_BANG] = "!",
  [anon_sym_TODOimplementthis] = "TODO implement this",
  [anon_sym_QMARK] = "\?",
  [sym_not_implemented_expression] = "not_implemented_expression",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BANG_POUND_DQUOTE] = "!#\"",
  [sym_null] = "null",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [sym__string_fragment] = "_string_fragment",
  [sym__quote_escape] = "_quote_escape",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_section_member] = "section_member",
  [sym_expression] = "expression",
  [sym_unary_expression] = "unary_expression",
  [sym_metadata_expression] = "metadata_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_let_expression] = "let_expression",
  [sym_if_expression] = "if_expression",
  [sym_each_expression] = "each_expression",
  [sym_error_expression] = "error_expression",
  [sym_try_expression] = "try_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_literal_expression] = "literal_expression",
  [sym_list_expression] = "list_expression",
  [sym_record_expression] = "record_expression",
  [sym_identifier_expression] = "identifier_expression",
  [sym_section_access_expression] = "section_access_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_field_access_expression] = "field_access_expression",
  [sym_item_access_expression] = "item_access_expression",
  [sym_invoke_expression] = "invoke_expression",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_verbatium] = "verbatium",
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_let_expression_repeat1] = "let_expression_repeat1",
  [aux_sym_list_expression_repeat1] = "list_expression_repeat1",
  [aux_sym_invoke_expression_repeat1] = "invoke_expression_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__regular_identifier] = sym__regular_identifier,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_otherwise] = anon_sym_otherwise,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TODOimplementthis] = anon_sym_TODOimplementthis,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_not_implemented_expression] = sym_not_implemented_expression,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BANG_POUND_DQUOTE] = anon_sym_BANG_POUND_DQUOTE,
  [sym_null] = sym_null,
  [anon_sym_POUND_DQUOTE] = anon_sym_POUND_DQUOTE,
  [sym__string_fragment] = sym__string_fragment,
  [sym__quote_escape] = sym__quote_escape,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_section_member] = sym_section_member,
  [sym_expression] = sym_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_metadata_expression] = sym_metadata_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_if_expression] = sym_if_expression,
  [sym_each_expression] = sym_each_expression,
  [sym_error_expression] = sym_error_expression,
  [sym_try_expression] = sym_try_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_literal_expression] = sym_literal_expression,
  [sym_list_expression] = sym_list_expression,
  [sym_record_expression] = sym_record_expression,
  [sym_identifier_expression] = sym_identifier_expression,
  [sym_section_access_expression] = sym_section_access_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_field_access_expression] = sym_field_access_expression,
  [sym_item_access_expression] = sym_item_access_expression,
  [sym_invoke_expression] = sym_invoke_expression,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_verbatium] = sym_verbatium,
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_let_expression_repeat1] = aux_sym_let_expression_repeat1,
  [aux_sym_list_expression_repeat1] = aux_sym_list_expression_repeat1,
  [aux_sym_invoke_expression_repeat1] = aux_sym_invoke_expression_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__regular_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_otherwise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODOimplementthis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_not_implemented_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_escape] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_member] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_each_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_error_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_try_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_list_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_record_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_section_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_item_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_invoke_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatium] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_invoke_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(229);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '&') ADVANCE(229);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == ';') ADVANCE(229);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '[') ADVANCE(229);
      if (lookahead == ']') ADVANCE(229);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '}') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(149);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == ']') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == 's') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 't') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 75:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '?') ADVANCE(119);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 77:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '[') ADVANCE(114);
      if (lookahead == 's') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '{') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == '}') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_otherwise);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_TODOimplementthis);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '?') ADVANCE(99);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_not_implemented_expression);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(230);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BANG_POUND_DQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__regular_identifier);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__regular_identifier);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == ',') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == ')') ADVANCE(229);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '?') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'd') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__string_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__quote_escape);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 78},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 79},
  [101] = {.lex_state = 80},
  [102] = {.lex_state = 80},
  [103] = {.lex_state = 80},
  [104] = {.lex_state = 80},
  [105] = {.lex_state = 80},
  [106] = {.lex_state = 80},
  [107] = {.lex_state = 80},
  [108] = {.lex_state = 80},
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 80},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 80},
  [115] = {.lex_state = 80},
  [116] = {.lex_state = 80},
  [117] = {.lex_state = 77},
  [118] = {.lex_state = 77},
  [119] = {.lex_state = 77},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 77},
  [123] = {.lex_state = 75},
  [124] = {.lex_state = 75},
  [125] = {.lex_state = 77},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 75},
  [142] = {.lex_state = 75},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 75},
  [145] = {.lex_state = 75},
  [146] = {.lex_state = 75},
  [147] = {.lex_state = 75},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 75},
  [150] = {.lex_state = 75},
  [151] = {.lex_state = 75},
  [152] = {.lex_state = 75},
  [153] = {.lex_state = 75},
  [154] = {.lex_state = 75},
  [155] = {.lex_state = 75},
  [156] = {.lex_state = 75},
  [157] = {.lex_state = 75},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 75},
  [160] = {.lex_state = 75},
  [161] = {.lex_state = 75},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__regular_identifier] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_otherwise] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TODOimplementthis] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [sym__string_fragment] = ACTIONS(1),
    [sym__quote_escape] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(158),
    [sym_section] = STATE(123),
    [sym_expression] = STATE(114),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(100),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [aux_sym_document_repeat1] = STATE(123),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [2] = {
    [sym_expression] = STATE(101),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [3] = {
    [sym_expression] = STATE(104),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [4] = {
    [sym_expression] = STATE(102),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [5] = {
    [sym_expression] = STATE(115),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [6] = {
    [sym_expression] = STATE(113),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [7] = {
    [sym_expression] = STATE(81),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [8] = {
    [sym_expression] = STATE(80),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [9] = {
    [sym_expression] = STATE(78),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [10] = {
    [sym_expression] = STATE(87),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [11] = {
    [sym_expression] = STATE(77),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [12] = {
    [sym_expression] = STATE(83),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [13] = {
    [sym_expression] = STATE(116),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [14] = {
    [sym_expression] = STATE(89),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [15] = {
    [sym_expression] = STATE(109),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [16] = {
    [sym_expression] = STATE(75),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [17] = {
    [sym_expression] = STATE(74),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [18] = {
    [sym_expression] = STATE(76),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [19] = {
    [sym_expression] = STATE(112),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [20] = {
    [sym_expression] = STATE(85),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [21] = {
    [sym_expression] = STATE(107),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [22] = {
    [sym_expression] = STATE(108),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [23] = {
    [sym_expression] = STATE(90),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [24] = {
    [sym_expression] = STATE(105),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [25] = {
    [sym_expression] = STATE(103),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [26] = {
    [sym_expression] = STATE(86),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [27] = {
    [sym_expression] = STATE(111),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [28] = {
    [sym_expression] = STATE(106),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [29] = {
    [sym_expression] = STATE(99),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [30] = {
    [sym_expression] = STATE(82),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [31] = {
    [sym_expression] = STATE(93),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [32] = {
    [sym_expression] = STATE(94),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [33] = {
    [sym_expression] = STATE(95),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [34] = {
    [sym_expression] = STATE(96),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [35] = {
    [sym_expression] = STATE(97),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [36] = {
    [sym_expression] = STATE(98),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [37] = {
    [sym_expression] = STATE(73),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [38] = {
    [sym_expression] = STATE(92),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [39] = {
    [sym_expression] = STATE(72),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [40] = {
    [sym_expression] = STATE(91),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [41] = {
    [sym_expression] = STATE(79),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
  [42] = {
    [sym_expression] = STATE(110),
    [sym_unary_expression] = STATE(84),
    [sym_metadata_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_let_expression] = STATE(84),
    [sym_if_expression] = STATE(84),
    [sym_each_expression] = STATE(84),
    [sym_error_expression] = STATE(84),
    [sym_try_expression] = STATE(84),
    [sym_primary_expression] = STATE(57),
    [sym_literal_expression] = STATE(70),
    [sym_list_expression] = STATE(70),
    [sym_record_expression] = STATE(70),
    [sym_identifier_expression] = STATE(70),
    [sym_section_access_expression] = STATE(70),
    [sym_parenthesized_expression] = STATE(70),
    [sym_field_access_expression] = STATE(70),
    [sym_item_access_expression] = STATE(70),
    [sym_invoke_expression] = STATE(70),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_string] = STATE(51),
    [sym_verbatium] = STATE(51),
    [sym_identifier] = STATE(49),
    [sym__quoted_identifier] = STATE(47),
    [sym__regular_identifier] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_TODOimplementthis] = ACTIONS(27),
    [sym_not_implemented_expression] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [aux_sym_number_token1] = ACTIONS(33),
    [aux_sym_number_token2] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BANG_POUND_DQUOTE] = ACTIONS(39),
    [sym_null] = ACTIONS(41),
    [anon_sym_POUND_DQUOTE] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 30,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [37] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 30,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [74] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [111] = 3,
    ACTIONS(65), 1,
      anon_sym_QMARK,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [150] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 30,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [187] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 30,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [224] = 3,
    ACTIONS(79), 1,
      anon_sym_BANG,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [263] = 2,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [299] = 2,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [335] = 2,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [371] = 2,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [407] = 2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [443] = 2,
    ACTIONS(103), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [479] = 2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [515] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [555] = 2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [591] = 2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [627] = 2,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [663] = 2,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [699] = 2,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [735] = 2,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [771] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [807] = 2,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [843] = 2,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [879] = 2,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [915] = 2,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [951] = 2,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [987] = 2,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1023] = 2,
    ACTIONS(171), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 29,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1059] = 3,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1095] = 14,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_meta,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1153] = 2,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1187] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(207), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1253] = 2,
    ACTIONS(219), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1287] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(221), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1353] = 20,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_otherwise,
    ACTIONS(227), 1,
      anon_sym_catch,
    ACTIONS(223), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1423] = 2,
    ACTIONS(231), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1457] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(233), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1523] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(235), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1589] = 7,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_meta,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1633] = 2,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1667] = 2,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1701] = 10,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(173), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_meta,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1751] = 5,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 24,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_meta,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1791] = 4,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 25,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1829] = 2,
    ACTIONS(243), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(241), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1863] = 2,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 27,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1897] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(245), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [1963] = 16,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(173), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_meta,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2025] = 15,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(173), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_meta,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2085] = 8,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(177), 1,
      anon_sym_GT,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(173), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_meta,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2131] = 8,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(173), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_meta,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2177] = 9,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(173), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_meta,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2225] = 11,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(173), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_meta,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2277] = 12,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(173), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_meta,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2331] = 13,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(173), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_meta,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2387] = 6,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_meta,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_otherwise,
      anon_sym_catch,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2429] = 3,
    ACTIONS(247), 1,
      anon_sym_section,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 18,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_meta,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_as,
      anon_sym_is,
      anon_sym_and,
      anon_sym_or,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [2457] = 21,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_DOT_DOT,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_list_expression_repeat1,
  [2521] = 20,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_let_expression_repeat1,
  [2582] = 20,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym_list_expression_repeat1,
  [2643] = 20,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_invoke_expression_repeat1,
  [2704] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(265), 3,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_RBRACK,
  [2761] = 20,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_in,
    STATE(148), 1,
      aux_sym_let_expression_repeat1,
  [2822] = 19,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(271), 1,
      anon_sym_DOT_DOT,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2881] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2937] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2993] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
  [3048] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(279), 1,
      anon_sym_else,
  [3103] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [3158] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(283), 1,
      anon_sym_then,
  [3213] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [3268] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [3323] = 18,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_AMP,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LT_EQ,
    ACTIONS(195), 1,
      anon_sym_GT_EQ,
    ACTIONS(197), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_as,
    ACTIONS(201), 1,
      anon_sym_is,
    ACTIONS(209), 1,
      anon_sym_meta,
    ACTIONS(211), 1,
      anon_sym_and,
    ACTIONS(213), 1,
      anon_sym_or,
    ACTIONS(215), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(289), 1,
      anon_sym_SEMI,
  [3378] = 7,
    ACTIONS(293), 1,
      sym__regular_identifier,
    ACTIONS(296), 1,
      anon_sym_shared,
    ACTIONS(299), 1,
      anon_sym_POUND_DQUOTE,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(154), 1,
      sym_identifier,
    STATE(117), 2,
      sym_section_member,
      aux_sym_section_repeat1,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_LBRACK,
  [3403] = 7,
    ACTIONS(3), 1,
      sym__regular_identifier,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_shared,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(154), 1,
      sym_identifier,
    STATE(117), 2,
      sym_section_member,
      aux_sym_section_repeat1,
    ACTIONS(302), 3,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_LBRACK,
  [3428] = 7,
    ACTIONS(3), 1,
      sym__regular_identifier,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_shared,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(154), 1,
      sym_identifier,
    STATE(117), 2,
      sym_section_member,
      aux_sym_section_repeat1,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_LBRACK,
  [3453] = 6,
    ACTIONS(3), 1,
      sym__regular_identifier,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_shared,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(154), 1,
      sym_identifier,
    STATE(118), 2,
      sym_section_member,
      aux_sym_section_repeat1,
  [3473] = 6,
    ACTIONS(3), 1,
      sym__regular_identifier,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_shared,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(154), 1,
      sym_identifier,
    STATE(119), 2,
      sym_section_member,
      aux_sym_section_repeat1,
  [3493] = 2,
    ACTIONS(310), 1,
      sym__regular_identifier,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_shared,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
  [3504] = 5,
    ACTIONS(5), 1,
      anon_sym_section,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_record_expression,
    STATE(124), 2,
      sym_section,
      aux_sym_document_repeat1,
  [3521] = 5,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_section,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(153), 1,
      sym_record_expression,
    STATE(124), 2,
      sym_section,
      aux_sym_document_repeat1,
  [3538] = 2,
    ACTIONS(322), 1,
      sym__regular_identifier,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      anon_sym_section,
      anon_sym_shared,
      anon_sym_LBRACK,
      anon_sym_POUND_DQUOTE,
  [3549] = 4,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      sym__escape_sequence,
    STATE(126), 1,
      aux_sym_string_repeat1,
    ACTIONS(326), 2,
      sym__string_fragment,
      sym__quote_escape,
  [3563] = 5,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(152), 1,
      sym_identifier,
  [3579] = 4,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      sym__escape_sequence,
    STATE(126), 1,
      aux_sym_string_repeat1,
    ACTIONS(338), 2,
      sym__string_fragment,
      sym__quote_escape,
  [3593] = 4,
    ACTIONS(340), 1,
      sym__escape_sequence,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym_string_repeat1,
    ACTIONS(338), 2,
      sym__string_fragment,
      sym__quote_escape,
  [3607] = 4,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      sym__escape_sequence,
    STATE(129), 1,
      aux_sym_string_repeat1,
    ACTIONS(346), 2,
      sym__string_fragment,
      sym__quote_escape,
  [3621] = 4,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      sym__escape_sequence,
    STATE(128), 1,
      aux_sym_string_repeat1,
    ACTIONS(352), 2,
      sym__string_fragment,
      sym__quote_escape,
  [3635] = 5,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(156), 1,
      sym_identifier,
  [3651] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(160), 1,
      sym_identifier,
  [3664] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(159), 1,
      sym_identifier,
  [3677] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(52), 1,
      sym_identifier,
  [3690] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym_identifier,
  [3703] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(157), 1,
      sym_identifier,
  [3716] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_let_expression_repeat1,
    ACTIONS(361), 2,
      anon_sym_in,
      anon_sym_RBRACK,
  [3727] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(161), 1,
      sym_identifier,
  [3740] = 4,
    ACTIONS(43), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(332), 1,
      sym__regular_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(64), 1,
      sym_identifier,
  [3753] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_list_expression_repeat1,
  [3763] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_list_expression_repeat1,
  [3773] = 2,
    ACTIONS(369), 1,
      sym__escape_sequence,
    ACTIONS(367), 2,
      sym__string_fragment,
      sym__quote_escape,
  [3781] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_let_expression_repeat1,
  [3791] = 3,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_invoke_expression_repeat1,
  [3801] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_invoke_expression_repeat1,
  [3811] = 3,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_list_expression_repeat1,
  [3821] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_in,
    STATE(138), 1,
      aux_sym_let_expression_repeat1,
  [3831] = 2,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_record_expression,
  [3838] = 1,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
  [3842] = 1,
    ACTIONS(385), 1,
      anon_sym_EQ,
  [3846] = 1,
    ACTIONS(387), 1,
      anon_sym_EQ,
  [3850] = 1,
    ACTIONS(247), 1,
      anon_sym_section,
  [3854] = 1,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [3858] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [3862] = 1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [3866] = 1,
    ACTIONS(395), 1,
      anon_sym_EQ,
  [3870] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [3874] = 1,
    ACTIONS(399), 1,
      anon_sym_EQ,
  [3878] = 1,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [3882] = 1,
    ACTIONS(403), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 37,
  [SMALL_STATE(45)] = 74,
  [SMALL_STATE(46)] = 111,
  [SMALL_STATE(47)] = 150,
  [SMALL_STATE(48)] = 187,
  [SMALL_STATE(49)] = 224,
  [SMALL_STATE(50)] = 263,
  [SMALL_STATE(51)] = 299,
  [SMALL_STATE(52)] = 335,
  [SMALL_STATE(53)] = 371,
  [SMALL_STATE(54)] = 407,
  [SMALL_STATE(55)] = 443,
  [SMALL_STATE(56)] = 479,
  [SMALL_STATE(57)] = 515,
  [SMALL_STATE(58)] = 555,
  [SMALL_STATE(59)] = 591,
  [SMALL_STATE(60)] = 627,
  [SMALL_STATE(61)] = 663,
  [SMALL_STATE(62)] = 699,
  [SMALL_STATE(63)] = 735,
  [SMALL_STATE(64)] = 771,
  [SMALL_STATE(65)] = 807,
  [SMALL_STATE(66)] = 843,
  [SMALL_STATE(67)] = 879,
  [SMALL_STATE(68)] = 915,
  [SMALL_STATE(69)] = 951,
  [SMALL_STATE(70)] = 987,
  [SMALL_STATE(71)] = 1023,
  [SMALL_STATE(72)] = 1059,
  [SMALL_STATE(73)] = 1095,
  [SMALL_STATE(74)] = 1153,
  [SMALL_STATE(75)] = 1187,
  [SMALL_STATE(76)] = 1253,
  [SMALL_STATE(77)] = 1287,
  [SMALL_STATE(78)] = 1353,
  [SMALL_STATE(79)] = 1423,
  [SMALL_STATE(80)] = 1457,
  [SMALL_STATE(81)] = 1523,
  [SMALL_STATE(82)] = 1589,
  [SMALL_STATE(83)] = 1633,
  [SMALL_STATE(84)] = 1667,
  [SMALL_STATE(85)] = 1701,
  [SMALL_STATE(86)] = 1751,
  [SMALL_STATE(87)] = 1791,
  [SMALL_STATE(88)] = 1829,
  [SMALL_STATE(89)] = 1863,
  [SMALL_STATE(90)] = 1897,
  [SMALL_STATE(91)] = 1963,
  [SMALL_STATE(92)] = 2025,
  [SMALL_STATE(93)] = 2085,
  [SMALL_STATE(94)] = 2131,
  [SMALL_STATE(95)] = 2177,
  [SMALL_STATE(96)] = 2225,
  [SMALL_STATE(97)] = 2277,
  [SMALL_STATE(98)] = 2331,
  [SMALL_STATE(99)] = 2387,
  [SMALL_STATE(100)] = 2429,
  [SMALL_STATE(101)] = 2457,
  [SMALL_STATE(102)] = 2521,
  [SMALL_STATE(103)] = 2582,
  [SMALL_STATE(104)] = 2643,
  [SMALL_STATE(105)] = 2704,
  [SMALL_STATE(106)] = 2761,
  [SMALL_STATE(107)] = 2822,
  [SMALL_STATE(108)] = 2881,
  [SMALL_STATE(109)] = 2937,
  [SMALL_STATE(110)] = 2993,
  [SMALL_STATE(111)] = 3048,
  [SMALL_STATE(112)] = 3103,
  [SMALL_STATE(113)] = 3158,
  [SMALL_STATE(114)] = 3213,
  [SMALL_STATE(115)] = 3268,
  [SMALL_STATE(116)] = 3323,
  [SMALL_STATE(117)] = 3378,
  [SMALL_STATE(118)] = 3403,
  [SMALL_STATE(119)] = 3428,
  [SMALL_STATE(120)] = 3453,
  [SMALL_STATE(121)] = 3473,
  [SMALL_STATE(122)] = 3493,
  [SMALL_STATE(123)] = 3504,
  [SMALL_STATE(124)] = 3521,
  [SMALL_STATE(125)] = 3538,
  [SMALL_STATE(126)] = 3549,
  [SMALL_STATE(127)] = 3563,
  [SMALL_STATE(128)] = 3579,
  [SMALL_STATE(129)] = 3593,
  [SMALL_STATE(130)] = 3607,
  [SMALL_STATE(131)] = 3621,
  [SMALL_STATE(132)] = 3635,
  [SMALL_STATE(133)] = 3651,
  [SMALL_STATE(134)] = 3664,
  [SMALL_STATE(135)] = 3677,
  [SMALL_STATE(136)] = 3690,
  [SMALL_STATE(137)] = 3703,
  [SMALL_STATE(138)] = 3716,
  [SMALL_STATE(139)] = 3727,
  [SMALL_STATE(140)] = 3740,
  [SMALL_STATE(141)] = 3753,
  [SMALL_STATE(142)] = 3763,
  [SMALL_STATE(143)] = 3773,
  [SMALL_STATE(144)] = 3781,
  [SMALL_STATE(145)] = 3791,
  [SMALL_STATE(146)] = 3801,
  [SMALL_STATE(147)] = 3811,
  [SMALL_STATE(148)] = 3821,
  [SMALL_STATE(149)] = 3831,
  [SMALL_STATE(150)] = 3838,
  [SMALL_STATE(151)] = 3842,
  [SMALL_STATE(152)] = 3846,
  [SMALL_STATE(153)] = 3850,
  [SMALL_STATE(154)] = 3854,
  [SMALL_STATE(155)] = 3858,
  [SMALL_STATE(156)] = 3862,
  [SMALL_STATE(157)] = 3866,
  [SMALL_STATE(158)] = 3870,
  [SMALL_STATE(159)] = 3874,
  [SMALL_STATE(160)] = 3878,
  [SMALL_STATE(161)] = 3882,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_expression, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_expression, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_expression, 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_expression, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_access_expression, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_access_expression, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_expression, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_expression, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_expression, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_expression, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_access_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_access_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoke_expression, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invoke_expression, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatium, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatium, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoke_expression, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invoke_expression, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_expression, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_expression, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatium, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatium, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoke_expression, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invoke_expression, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_access_expression, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_access_expression, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_expression, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 6),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_expression, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_expression, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_expression, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_each_expression, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_expression, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_expression, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_expression, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invoke_expression_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(47),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(137),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(143),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_member, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_member, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_member, 4),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_member, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2), SHIFT_REPEAT(136),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_let_expression_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invoke_expression_repeat1, 2), SHIFT_REPEAT(22),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2), SHIFT_REPEAT(21),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_m(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__regular_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
