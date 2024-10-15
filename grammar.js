/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'ql_dbscheme',

  extras: $ => [
    /[ \t\r\n]/,
    $.line_comment,
    $.block_comment,
  ],

  word: $ => $._lower_id,

  rules: {
    dbscheme: $ => choice(repeat($.entry)),

    entry: $ => choice(
      $.table,
      $.unionDecl,
      $.caseDecl,
      $.qldoc,
    ),

    table: $ => seq(
      repeat($.annotation),
      field('tableName', $.tableName),
      '(',
      sep1($.column, ','),
      ')',
      optional(';'),
    ),

    annotation: $ => choice(
      seq('#', field('simpleAnnotation', $.annotName)),
      field('argsAnnotation', $.argsAnnotation),
    ),

    argsAnnotation: $ => seq(
      seq('#', field('name', $.annotName)),
      '[',
      sep($.simpleId, ','),
      ']',
    ),

    tableName: $ => $.simpleId,

    column: $ => seq(
      field('qldoc', optional($.qldoc)),
      field('isUnique', optional($.unique)),
      field('reprType', $.reprType),
      field('colName', $.simpleId),
      ':',
      field('colType', $.colType),
      field('isRef', optional($.ref)),
    ),

    unionDecl: $ => seq(
      field('base', $.dbtype),
      '=',
      sep1($.dbtype, '|'),
      optional(';'),
    ),

    caseDecl: $ => seq(
      'case',
      field('base', $.dbtype),
      '.',
      field('discriminator', $.simpleId),
      'of',
      sep1($.branch, '|'),
      optional(';'),
    ),

    branch: $ => seq(
      field('qldoc', optional($.qldoc)),
      $.integer,
      '=',
      $.dbtype,
    ),

    colType: $ => choice(
      $.int,
      $.float,
      $.boolean,
      $.date,
      $.string,
      $.dbtype,
    ),

    reprType: $ => choice(
      $.int,
      $.float,
      $.boolean,
      $.date,
      seq($.varchar, '(', $.integer, ')'),
      $.string,
    ),

    key: _ => 'key',
    ref: _ => 'ref',
    int: _ => 'int',
    float: _ => 'float',
    boolean: _ => 'boolean',
    date: _ => 'date',
    varchar: _ => 'varchar',
    string: _ => 'string',
    unique: _ => 'unique',

    // The following nodes match the definitions in the `tree-sitter-ql` grammar
    annotName: $ => $._lower_id,
    simpleId: $ => choice($._lower_id, $._upper_id),
    _lower_id: _ => /[a-z][A-Za-z0-9_]*/,
    _upper_id: _ => /[A-Z][A-Za-z0-9_]*/,

    integer: _ => /[0-9]+/,
    dbtype: _ => /@[a-z][A-Za-z0-9_]*/,

    qldoc: _ => /\/\*\*[^*]*\*+([^/*][^*]*\*+)*\//,
    line_comment: _ => /\/\/[^\r\n]*/,
    block_comment: _ => /\/\*([^*]+\*+([^/*][^*]*\*+)*|\*)\//,
  },
});

/**
 *
 * @param {RuleOrLiteral} rule
 * @param {string} s
 */
function sep(rule, s) {
  return optional(sep1(rule, s));
}

/**
 *
 * @param {RuleOrLiteral} rule
 * @param {string} s
 */
function sep1(rule, s) {
  return seq(rule, repeat(seq(s, rule)));
}
