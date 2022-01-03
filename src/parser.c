#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 17

enum {
  sym__lower_id = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_SEMI = 5,
  anon_sym_POUND = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_COLON = 9,
  anon_sym_EQ = 10,
  anon_sym_PIPE = 11,
  anon_sym_case = 12,
  anon_sym_DOT = 13,
  anon_sym_of = 14,
  sym_key = 15,
  sym_ref = 16,
  sym_int = 17,
  sym_float = 18,
  sym_boolean = 19,
  sym_date = 20,
  sym_varchar = 21,
  sym_string = 22,
  sym_unique = 23,
  sym__upper_id = 24,
  sym_integer = 25,
  sym_dbtype = 26,
  sym_qldoc = 27,
  sym_line_comment = 28,
  sym_block_comment = 29,
  sym_dbscheme = 30,
  sym_entry = 31,
  sym_table = 32,
  sym_annotation = 33,
  sym_argsAnnotation = 34,
  sym_tableName = 35,
  sym_column = 36,
  sym_unionDecl = 37,
  sym_caseDecl = 38,
  sym_branch = 39,
  sym_colType = 40,
  sym_reprType = 41,
  sym_annotName = 42,
  sym_simpleId = 43,
  aux_sym_dbscheme_repeat1 = 44,
  aux_sym_table_repeat1 = 45,
  aux_sym_table_repeat2 = 46,
  aux_sym_argsAnnotation_repeat1 = 47,
  aux_sym_unionDecl_repeat1 = 48,
  aux_sym_caseDecl_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__lower_id] = "_lower_id",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_case] = "case",
  [anon_sym_DOT] = ".",
  [anon_sym_of] = "of",
  [sym_key] = "key",
  [sym_ref] = "ref",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [sym_date] = "date",
  [sym_varchar] = "varchar",
  [sym_string] = "string",
  [sym_unique] = "unique",
  [sym__upper_id] = "_upper_id",
  [sym_integer] = "integer",
  [sym_dbtype] = "dbtype",
  [sym_qldoc] = "qldoc",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_dbscheme] = "dbscheme",
  [sym_entry] = "entry",
  [sym_table] = "table",
  [sym_annotation] = "annotation",
  [sym_argsAnnotation] = "argsAnnotation",
  [sym_tableName] = "tableName",
  [sym_column] = "column",
  [sym_unionDecl] = "unionDecl",
  [sym_caseDecl] = "caseDecl",
  [sym_branch] = "branch",
  [sym_colType] = "colType",
  [sym_reprType] = "reprType",
  [sym_annotName] = "annotName",
  [sym_simpleId] = "simpleId",
  [aux_sym_dbscheme_repeat1] = "dbscheme_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_table_repeat2] = "table_repeat2",
  [aux_sym_argsAnnotation_repeat1] = "argsAnnotation_repeat1",
  [aux_sym_unionDecl_repeat1] = "unionDecl_repeat1",
  [aux_sym_caseDecl_repeat1] = "caseDecl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__lower_id] = sym__lower_id,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_of] = anon_sym_of,
  [sym_key] = sym_key,
  [sym_ref] = sym_ref,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [sym_date] = sym_date,
  [sym_varchar] = sym_varchar,
  [sym_string] = sym_string,
  [sym_unique] = sym_unique,
  [sym__upper_id] = sym__upper_id,
  [sym_integer] = sym_integer,
  [sym_dbtype] = sym_dbtype,
  [sym_qldoc] = sym_qldoc,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_dbscheme] = sym_dbscheme,
  [sym_entry] = sym_entry,
  [sym_table] = sym_table,
  [sym_annotation] = sym_annotation,
  [sym_argsAnnotation] = sym_argsAnnotation,
  [sym_tableName] = sym_tableName,
  [sym_column] = sym_column,
  [sym_unionDecl] = sym_unionDecl,
  [sym_caseDecl] = sym_caseDecl,
  [sym_branch] = sym_branch,
  [sym_colType] = sym_colType,
  [sym_reprType] = sym_reprType,
  [sym_annotName] = sym_annotName,
  [sym_simpleId] = sym_simpleId,
  [aux_sym_dbscheme_repeat1] = aux_sym_dbscheme_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_table_repeat2] = aux_sym_table_repeat2,
  [aux_sym_argsAnnotation_repeat1] = aux_sym_argsAnnotation_repeat1,
  [aux_sym_unionDecl_repeat1] = aux_sym_unionDecl_repeat1,
  [aux_sym_caseDecl_repeat1] = aux_sym_caseDecl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__lower_id] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_varchar] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unique] = {
    .visible = true,
    .named = true,
  },
  [sym__upper_id] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_dbtype] = {
    .visible = true,
    .named = true,
  },
  [sym_qldoc] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_dbscheme] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_argsAnnotation] = {
    .visible = true,
    .named = true,
  },
  [sym_tableName] = {
    .visible = true,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym_unionDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_caseDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_colType] = {
    .visible = true,
    .named = true,
  },
  [sym_reprType] = {
    .visible = true,
    .named = true,
  },
  [sym_annotName] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleId] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dbscheme_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argsAnnotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unionDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caseDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argsAnnotation = 1,
  field_base = 2,
  field_colName = 3,
  field_colType = 4,
  field_discriminator = 5,
  field_isRef = 6,
  field_isUnique = 7,
  field_name = 8,
  field_qldoc = 9,
  field_reprType = 10,
  field_simpleAnnotation = 11,
  field_tableName = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argsAnnotation] = "argsAnnotation",
  [field_base] = "base",
  [field_colName] = "colName",
  [field_colType] = "colType",
  [field_discriminator] = "discriminator",
  [field_isRef] = "isRef",
  [field_isUnique] = "isUnique",
  [field_name] = "name",
  [field_qldoc] = "qldoc",
  [field_reprType] = "reprType",
  [field_simpleAnnotation] = "simpleAnnotation",
  [field_tableName] = "tableName",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 3},
  [9] = {.index = 11, .length = 4},
  [10] = {.index = 15, .length = 4},
  [11] = {.index = 19, .length = 4},
  [12] = {.index = 23, .length = 5},
  [13] = {.index = 28, .length = 5},
  [14] = {.index = 33, .length = 5},
  [15] = {.index = 38, .length = 1},
  [16] = {.index = 39, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argsAnnotation, 0},
  [1] =
    {field_simpleAnnotation, 1},
  [2] =
    {field_base, 0},
  [3] =
    {field_name, 1},
  [4] =
    {field_tableName, 0},
  [5] =
    {field_tableName, 1},
  [6] =
    {field_base, 1},
    {field_discriminator, 3},
  [8] =
    {field_colName, 1},
    {field_colType, 3},
    {field_reprType, 0},
  [11] =
    {field_colName, 2},
    {field_colType, 4},
    {field_isUnique, 0},
    {field_reprType, 1},
  [15] =
    {field_colName, 2},
    {field_colType, 4},
    {field_qldoc, 0},
    {field_reprType, 1},
  [19] =
    {field_colName, 1},
    {field_colType, 3},
    {field_isRef, 4},
    {field_reprType, 0},
  [23] =
    {field_colName, 2},
    {field_colType, 4},
    {field_isRef, 5},
    {field_isUnique, 0},
    {field_reprType, 1},
  [28] =
    {field_colName, 3},
    {field_colType, 5},
    {field_isUnique, 1},
    {field_qldoc, 0},
    {field_reprType, 2},
  [33] =
    {field_colName, 2},
    {field_colType, 4},
    {field_isRef, 5},
    {field_qldoc, 0},
    {field_reprType, 1},
  [38] =
    {field_qldoc, 0},
  [39] =
    {field_colName, 3},
    {field_colType, 5},
    {field_isRef, 6},
    {field_isUnique, 1},
    {field_qldoc, 0},
    {field_reprType, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 11:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__lower_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__upper_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_dbtype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_qldoc);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'k') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'v') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ref);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'q') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_unique);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_varchar);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__lower_id] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_ref] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_varchar] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_unique] = ACTIONS(1),
    [sym__upper_id] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_dbtype] = ACTIONS(1),
    [sym_qldoc] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_dbscheme] = STATE(92),
    [sym_entry] = STATE(3),
    [sym_table] = STATE(36),
    [sym_annotation] = STATE(18),
    [sym_argsAnnotation] = STATE(50),
    [sym_tableName] = STATE(89),
    [sym_unionDecl] = STATE(36),
    [sym_caseDecl] = STATE(36),
    [sym_simpleId] = STATE(78),
    [aux_sym_dbscheme_repeat1] = STATE(3),
    [aux_sym_table_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__lower_id] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(13),
    [sym__upper_id] = ACTIONS(15),
    [sym_dbtype] = ACTIONS(17),
    [sym_qldoc] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym__lower_id,
    ACTIONS(26), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_case,
    ACTIONS(32), 1,
      sym__upper_id,
    ACTIONS(35), 1,
      sym_dbtype,
    ACTIONS(38), 1,
      sym_qldoc,
    STATE(50), 1,
      sym_argsAnnotation,
    STATE(78), 1,
      sym_simpleId,
    STATE(89), 1,
      sym_tableName,
    STATE(2), 2,
      sym_entry,
      aux_sym_dbscheme_repeat1,
    STATE(18), 2,
      sym_annotation,
      aux_sym_table_repeat1,
    STATE(36), 3,
      sym_table,
      sym_unionDecl,
      sym_caseDecl,
  [50] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym__lower_id,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_case,
    ACTIONS(15), 1,
      sym__upper_id,
    ACTIONS(17), 1,
      sym_dbtype,
    ACTIONS(19), 1,
      sym_qldoc,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_argsAnnotation,
    STATE(78), 1,
      sym_simpleId,
    STATE(89), 1,
      sym_tableName,
    STATE(2), 2,
      sym_entry,
      aux_sym_dbscheme_repeat1,
    STATE(18), 2,
      sym_annotation,
      aux_sym_table_repeat1,
    STATE(36), 3,
      sym_table,
      sym_unionDecl,
      sym_caseDecl,
  [100] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      sym_varchar,
    ACTIONS(47), 1,
      sym_unique,
    ACTIONS(49), 1,
      sym_qldoc,
    STATE(64), 1,
      sym_reprType,
    STATE(76), 1,
      sym_column,
    ACTIONS(43), 5,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
  [129] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    STATE(7), 1,
      aux_sym_unionDecl_repeat1,
    ACTIONS(53), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [156] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_unionDecl_repeat1,
    ACTIONS(61), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [181] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_unionDecl_repeat1,
    ACTIONS(68), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [208] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    STATE(10), 1,
      aux_sym_caseDecl_repeat1,
    ACTIONS(74), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [235] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      sym_varchar,
    ACTIONS(47), 1,
      sym_unique,
    ACTIONS(49), 1,
      sym_qldoc,
    STATE(61), 1,
      sym_column,
    STATE(64), 1,
      sym_reprType,
    ACTIONS(43), 5,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
  [264] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(10), 1,
      aux_sym_caseDecl_repeat1,
    ACTIONS(82), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [289] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(45), 1,
      sym_varchar,
    ACTIONS(47), 1,
      sym_unique,
    ACTIONS(49), 1,
      sym_qldoc,
    STATE(46), 1,
      sym_column,
    STATE(64), 1,
      sym_reprType,
    ACTIONS(43), 5,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
  [318] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_caseDecl_repeat1,
    ACTIONS(89), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [345] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(61), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_PIPE,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [365] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(82), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_PIPE,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [385] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(95), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_PIPE,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [405] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(99), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_PIPE,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [425] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(103), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [446] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_argsAnnotation,
    STATE(78), 1,
      sym_simpleId,
    STATE(81), 1,
      sym_tableName,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
    STATE(38), 2,
      sym_annotation,
      aux_sym_table_repeat1,
  [471] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(109), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [492] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    ACTIONS(115), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [513] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(121), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [534] = 5,
    ACTIONS(45), 1,
      sym_varchar,
    ACTIONS(125), 1,
      sym_unique,
    STATE(51), 1,
      sym_reprType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 5,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
  [555] = 3,
    STATE(45), 1,
      sym_colType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 6,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
      sym_dbtype,
  [571] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(131), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [589] = 3,
    STATE(53), 1,
      sym_colType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 6,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
      sym_dbtype,
  [605] = 4,
    ACTIONS(45), 1,
      sym_varchar,
    STATE(52), 1,
      sym_reprType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 5,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
  [623] = 3,
    STATE(44), 1,
      sym_colType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 6,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
      sym_dbtype,
  [639] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [657] = 3,
    STATE(58), 1,
      sym_colType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 6,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
      sym_dbtype,
  [673] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(74), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [691] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(68), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [709] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(109), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [727] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [745] = 4,
    ACTIONS(45), 1,
      sym_varchar,
    STATE(55), 1,
      sym_reprType,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 5,
      sym_int,
      sym_float,
      sym_boolean,
      sym_date,
      sym_string,
  [763] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(139), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [781] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(143), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [799] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(147), 2,
      anon_sym_case,
      sym__lower_id,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym__upper_id,
      sym_dbtype,
      sym_qldoc,
  [817] = 5,
    ACTIONS(151), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_argsAnnotation,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      sym__lower_id,
      sym__upper_id,
    STATE(38), 2,
      sym_annotation,
      aux_sym_table_repeat1,
  [836] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_of,
  [848] = 4,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [863] = 3,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_POUND,
      sym__lower_id,
      sym__upper_id,
  [876] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym__lower_id,
      sym__upper_id,
  [887] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_argsAnnotation_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [901] = 3,
    ACTIONS(170), 1,
      sym_ref,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [913] = 3,
    ACTIONS(174), 1,
      sym_ref,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [925] = 4,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_table_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [939] = 3,
    STATE(71), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [951] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      anon_sym_POUND,
      sym__lower_id,
      sym__upper_id,
  [961] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      sym_integer,
    ACTIONS(184), 1,
      sym_qldoc,
    STATE(12), 1,
      sym_branch,
  [977] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 3,
      anon_sym_POUND,
      sym__lower_id,
      sym__upper_id,
  [987] = 3,
    STATE(77), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [999] = 3,
    STATE(84), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [1011] = 3,
    ACTIONS(190), 1,
      sym_ref,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1023] = 4,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_table_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1037] = 3,
    STATE(98), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [1049] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      sym_integer,
    ACTIONS(184), 1,
      sym_qldoc,
    STATE(14), 1,
      sym_branch,
  [1065] = 3,
    STATE(96), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [1077] = 3,
    ACTIONS(196), 1,
      sym_ref,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1089] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ref,
  [1099] = 4,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_table_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1113] = 4,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_table_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1127] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_argsAnnotation_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1141] = 4,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_table_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1155] = 3,
    STATE(95), 1,
      sym_simpleId,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 2,
      sym__lower_id,
      sym__upper_id,
  [1167] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 3,
      anon_sym_POUND,
      sym__lower_id,
      sym__upper_id,
  [1177] = 4,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_argsAnnotation_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1191] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(218), 3,
      anon_sym_POUND,
      sym__lower_id,
      sym__upper_id,
  [1201] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 2,
      sym__lower_id,
      sym__upper_id,
  [1210] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1219] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 2,
      sym__lower_id,
      sym__upper_id,
  [1228] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1237] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1246] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1255] = 3,
    ACTIONS(230), 1,
      sym__lower_id,
    STATE(41), 1,
      sym_annotName,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1266] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1275] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1284] = 2,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1292] = 2,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1300] = 2,
    ACTIONS(238), 1,
      sym_dbtype,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1308] = 2,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1316] = 2,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1324] = 2,
    ACTIONS(244), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1332] = 2,
    ACTIONS(246), 1,
      sym_dbtype,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1340] = 2,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1348] = 2,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1356] = 2,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1364] = 2,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1372] = 2,
    ACTIONS(256), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1380] = 2,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1388] = 2,
    ACTIONS(260), 1,
      sym_dbtype,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1396] = 2,
    ACTIONS(262), 1,
      sym_dbtype,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1404] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1412] = 2,
    ACTIONS(266), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1420] = 2,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1428] = 2,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1436] = 2,
    ACTIONS(272), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1444] = 2,
    ACTIONS(274), 1,
      sym_dbtype,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1452] = 2,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 365,
  [SMALL_STATE(15)] = 385,
  [SMALL_STATE(16)] = 405,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 471,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 513,
  [SMALL_STATE(22)] = 534,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 571,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 605,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 639,
  [SMALL_STATE(29)] = 657,
  [SMALL_STATE(30)] = 673,
  [SMALL_STATE(31)] = 691,
  [SMALL_STATE(32)] = 709,
  [SMALL_STATE(33)] = 727,
  [SMALL_STATE(34)] = 745,
  [SMALL_STATE(35)] = 763,
  [SMALL_STATE(36)] = 781,
  [SMALL_STATE(37)] = 799,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 836,
  [SMALL_STATE(40)] = 848,
  [SMALL_STATE(41)] = 863,
  [SMALL_STATE(42)] = 876,
  [SMALL_STATE(43)] = 887,
  [SMALL_STATE(44)] = 901,
  [SMALL_STATE(45)] = 913,
  [SMALL_STATE(46)] = 925,
  [SMALL_STATE(47)] = 939,
  [SMALL_STATE(48)] = 951,
  [SMALL_STATE(49)] = 961,
  [SMALL_STATE(50)] = 977,
  [SMALL_STATE(51)] = 987,
  [SMALL_STATE(52)] = 999,
  [SMALL_STATE(53)] = 1011,
  [SMALL_STATE(54)] = 1023,
  [SMALL_STATE(55)] = 1037,
  [SMALL_STATE(56)] = 1049,
  [SMALL_STATE(57)] = 1065,
  [SMALL_STATE(58)] = 1077,
  [SMALL_STATE(59)] = 1089,
  [SMALL_STATE(60)] = 1099,
  [SMALL_STATE(61)] = 1113,
  [SMALL_STATE(62)] = 1127,
  [SMALL_STATE(63)] = 1141,
  [SMALL_STATE(64)] = 1155,
  [SMALL_STATE(65)] = 1167,
  [SMALL_STATE(66)] = 1177,
  [SMALL_STATE(67)] = 1191,
  [SMALL_STATE(68)] = 1201,
  [SMALL_STATE(69)] = 1210,
  [SMALL_STATE(70)] = 1219,
  [SMALL_STATE(71)] = 1228,
  [SMALL_STATE(72)] = 1237,
  [SMALL_STATE(73)] = 1246,
  [SMALL_STATE(74)] = 1255,
  [SMALL_STATE(75)] = 1266,
  [SMALL_STATE(76)] = 1275,
  [SMALL_STATE(77)] = 1284,
  [SMALL_STATE(78)] = 1292,
  [SMALL_STATE(79)] = 1300,
  [SMALL_STATE(80)] = 1308,
  [SMALL_STATE(81)] = 1316,
  [SMALL_STATE(82)] = 1324,
  [SMALL_STATE(83)] = 1332,
  [SMALL_STATE(84)] = 1340,
  [SMALL_STATE(85)] = 1348,
  [SMALL_STATE(86)] = 1356,
  [SMALL_STATE(87)] = 1364,
  [SMALL_STATE(88)] = 1372,
  [SMALL_STATE(89)] = 1380,
  [SMALL_STATE(90)] = 1388,
  [SMALL_STATE(91)] = 1396,
  [SMALL_STATE(92)] = 1404,
  [SMALL_STATE(93)] = 1412,
  [SMALL_STATE(94)] = 1420,
  [SMALL_STATE(95)] = 1428,
  [SMALL_STATE(96)] = 1436,
  [SMALL_STATE(97)] = 1444,
  [SMALL_STATE(98)] = 1452,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbscheme, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dbscheme_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dbscheme_repeat1, 2), SHIFT_REPEAT(39),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbscheme_repeat1, 2), SHIFT_REPEAT(74),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dbscheme_repeat1, 2), SHIFT_REPEAT(97),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbscheme_repeat1, 2), SHIFT_REPEAT(39),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbscheme_repeat1, 2), SHIFT_REPEAT(93),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dbscheme_repeat1, 2), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dbscheme, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unionDecl, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unionDecl, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unionDecl_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unionDecl_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unionDecl_repeat1, 2), SHIFT_REPEAT(91),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unionDecl, 4, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unionDecl, 4, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseDecl, 7, .production_id = 7),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caseDecl, 7, .production_id = 7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_caseDecl_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caseDecl_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_caseDecl_repeat1, 2), SHIFT_REPEAT(56),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseDecl, 6, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caseDecl, 6, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, .production_id = 15),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, .production_id = 15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unionDecl, 5, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unionDecl, 5, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 6),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseDecl, 8, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caseDecl, 8, .production_id = 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(74),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleId, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotName, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 5, .production_id = 9),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 6, .production_id = 13),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argsAnnotation, 5, .production_id = 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 1, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 5, .production_id = 10),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 4, .production_id = 8),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colType, 1),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat2, 2), SHIFT_REPEAT(4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat2, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argsAnnotation, 6, .production_id = 4),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argsAnnotation_repeat1, 2), SHIFT_REPEAT(47),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argsAnnotation_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argsAnnotation, 4, .production_id = 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reprType, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 7, .production_id = 16),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reprType, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 6, .production_id = 14),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 6, .production_id = 12),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 5, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tableName, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbscheme(void) {
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
    .keyword_capture_token = sym__lower_id,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
