module.exports = grammar({
    name: 'dbscheme',

    extras: $ => [
        /[ \t\r\n]/,
        $.line_comment,
        $.block_comment,
    ],

    word: $ => $._lower_id,

    rules: {
        dbscheme: $ => choice(repeat($.entry)),


        // DBscheme stuff below this line

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
            optional(';')
        ),

        annotation: $ => choice(
            seq("#", field('simpleAnnotation', $.annotName)),
            field('argsAnnotation', $.argsAnnotation),
        ),

        argsAnnotation: $ => seq(
            seq("#", field('name', $.annotName)),
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
            $.case,
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
            $.dbtype
        ),

        reprType: $ => choice(
            $.int,
            $.float,
            $.boolean,
            $.date,
            seq($.varchar, '(', $.integer, ')'),
            $.string,
        ),

        type: $ => 'type',
        subtype: $ => 'subtype',
        case: $ => 'case',
        of: $ => 'of',
        order: $ => 'order',
        key: $ => 'key',
        ref: $ => 'ref',
        int: $ => 'int',
        float: $ => 'float',
        boolean: $ => 'boolean',
        date: $ => 'date',
        varchar: $ => 'varchar',
        string: $ => 'string',
        unique: $ => 'unique',

        // The following nodes match the definitions in the `tree-sitter-ql` grammar
        annotName: $ => $._lower_id,
        simpleId: $ => choice($._lower_id, $._upper_id),
        _lower_id: $ => /[a-z][A-Za-z0-9_]*/,
        _upper_id: $ => /[A-Z][A-Za-z0-9_]*/,

        integer: $ => /[0-9]+/,
        dbtype: $ => /@[a-z][A-Za-z0-9_]*/,

        qldoc: $ => /\/\*\*[^*]*\*+([^/*][^*]*\*+)*\//,
        line_comment: $ => /\/\/[^\r\n]*/,
        block_comment: $ => /\/\*([^*]+\*+([^/*][^*]*\*+)*|\*)\//,
    }
});

function sep(rule, s) {
    return optional(sep1(rule, s))
}

function sep1(rule, s) {
    return seq(rule, repeat(seq(s, rule)))
}
