module.exports = {
	'env': {
		'commonjs': true,
		'es2021': true,
	},
	'overrides': [],
	'parserOptions': {
		'ecmaVersion': 'latest',
		'sourceType': 'module',
	},
	'rules': {
		'indent': ['error', 'tab'],
		'max-len': [
			'error',
			{'code': 120, 'ignoreComments': true, 'ignoreUrls': true, 'ignoreStrings': true},
		],
	},
};
