/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CHAR = 258,
    BIT = 259,
    INT = 260,
    FLOAT = 261,
    DOUBLE = 262,
    UINT64_T = 263,
    CLASS = 264,
    IF = 265,
    ELSE = 266,
    DO = 267,
    WHILE = 268,
    FOR = 269,
    GOTO = 270,
    BREAK = 271,
    CONTINUE = 272,
    REPEAT = 273,
    MAP = 274,
    EXTENDS = 275,
    SWITCH = 276,
    CASE = 277,
    DEFAULT = 278,
    BAC = 279,
    PRAGMA = 280,
    PRAGMA_ARRAY = 281,
    PRAGMA_GET = 282,
    PRAGMA_NOGET = 283,
    PRAGMA_PUT = 284,
    PRAGMA_NOPUT = 285,
    PRAGMA_PUTXML = 286,
    PRAGMA_NOPUTXML = 287,
    PRAGMA_TRACE = 288,
    PRAGMA_NOTRACE = 289,
    PRAGMA_LINE = 290,
    PRAGMA_NOLINE = 291,
    PRAGMA_INCLUDES = 292,
    PRAGMA_NULLSTRINGS = 293,
    PRAGMA_NONULLSTRINGS = 294,
    PRAGMA_NOINCLUDES = 295,
    PRAGMA_BITSTREAM = 296,
    PRAGMA_PREFIX = 297,
    PRAGMA_ERROR_FUNC = 298,
    PRAGMA_TRACE_FUNC = 299,
    BAC_PREC = 300,
    BAC_OOC = 301,
    BAC_SOC = 302,
    BAC_TE = 303,
    BAC_RENORM = 304,
    BAC_BS = 305,
    BAC_INIT = 306,
    BAC_END = 307,
    BAC_RTABLE = 308,
    BAC_NEXTI = 309,
    BAC_TRANS = 310,
    BAC_EXCH = 311,
    INCLUDE = 312,
    IMPORT = 313,
    UNSIGNED = 314,
    SIGNED = 315,
    SHORT = 316,
    LONG = 317,
    CONST = 318,
    ALIGNED = 319,
    STATIC = 320,
    ABSTRACT = 321,
    LITTLE = 322,
    BIG = 323,
    INT_LITERAL = 324,
    DOUBLE_LITERAL = 325,
    BIT_LITERAL = 326,
    STRING_LITERAL = 327,
    VARIABLE = 328,
    CLASS_TYPE = 329,
    MAP_TYPE = 330,
    BAC_TYPE = 331,
    LABEL = 332,
    LS = 333,
    RS = 334,
    GE = 335,
    LE = 336,
    NE = 337,
    EQ = 338,
    OR = 339,
    AND = 340,
    INC = 341,
    DEC = 342,
    RANGE = 343,
    CLCL = 344,
    MUL_ASSIGN = 345,
    DIV_ASSIGN = 346,
    MOD_ASSIGN = 347,
    ADD_ASSIGN = 348,
    SUB_ASSIGN = 349,
    LS_ASSIGN = 350,
    RS_ASSIGN = 351,
    AND_ASSIGN = 352,
    XOR_ASSIGN = 353,
    OR_ASSIGN = 354,
    DBL_BRACE_L = 355,
    DBL_BRACE_R = 356,
    DECL = 357,
    EXPR = 358,
    VERBATIM = 359,
    VERBATIM_GET = 360,
    VERBATIM_PUT = 361,
    VERBATIM_BOTH = 362,
    VERBATIM_C = 363,
    VERBATIM_C_CPP = 364,
    VERBATIM_GET_C = 365,
    VERBATIM_PUT_C = 366,
    VERBATIM_BOTH_C = 367,
    VERBATIM_J = 368,
    VERBATIM_GET_J = 369,
    VERBATIM_PUT_J = 370,
    VERBATIM_BOTH_J = 371,
    LENGTHOF = 372,
    ISIDOF = 373,
    SKIPBITS = 374,
    NEXTBITS = 375,
    SNEXTBITS = 376,
    LITTLE_NEXTBITS = 377,
    LITTLE_SNEXTBITS = 378,
    NEXTCODE = 379,
    NUMBITS = 380,
    ESC_FTYPE = 381,
    ESC_MAP = 382,
    ARRAY = 383,
    LOWER_THAN_ELSE = 384
  };
#endif
/* Tokens.  */
#define CHAR 258
#define BIT 259
#define INT 260
#define FLOAT 261
#define DOUBLE 262
#define UINT64_T 263
#define CLASS 264
#define IF 265
#define ELSE 266
#define DO 267
#define WHILE 268
#define FOR 269
#define GOTO 270
#define BREAK 271
#define CONTINUE 272
#define REPEAT 273
#define MAP 274
#define EXTENDS 275
#define SWITCH 276
#define CASE 277
#define DEFAULT 278
#define BAC 279
#define PRAGMA 280
#define PRAGMA_ARRAY 281
#define PRAGMA_GET 282
#define PRAGMA_NOGET 283
#define PRAGMA_PUT 284
#define PRAGMA_NOPUT 285
#define PRAGMA_PUTXML 286
#define PRAGMA_NOPUTXML 287
#define PRAGMA_TRACE 288
#define PRAGMA_NOTRACE 289
#define PRAGMA_LINE 290
#define PRAGMA_NOLINE 291
#define PRAGMA_INCLUDES 292
#define PRAGMA_NULLSTRINGS 293
#define PRAGMA_NONULLSTRINGS 294
#define PRAGMA_NOINCLUDES 295
#define PRAGMA_BITSTREAM 296
#define PRAGMA_PREFIX 297
#define PRAGMA_ERROR_FUNC 298
#define PRAGMA_TRACE_FUNC 299
#define BAC_PREC 300
#define BAC_OOC 301
#define BAC_SOC 302
#define BAC_TE 303
#define BAC_RENORM 304
#define BAC_BS 305
#define BAC_INIT 306
#define BAC_END 307
#define BAC_RTABLE 308
#define BAC_NEXTI 309
#define BAC_TRANS 310
#define BAC_EXCH 311
#define INCLUDE 312
#define IMPORT 313
#define UNSIGNED 314
#define SIGNED 315
#define SHORT 316
#define LONG 317
#define CONST 318
#define ALIGNED 319
#define STATIC 320
#define ABSTRACT 321
#define LITTLE 322
#define BIG 323
#define INT_LITERAL 324
#define DOUBLE_LITERAL 325
#define BIT_LITERAL 326
#define STRING_LITERAL 327
#define VARIABLE 328
#define CLASS_TYPE 329
#define MAP_TYPE 330
#define BAC_TYPE 331
#define LABEL 332
#define LS 333
#define RS 334
#define GE 335
#define LE 336
#define NE 337
#define EQ 338
#define OR 339
#define AND 340
#define INC 341
#define DEC 342
#define RANGE 343
#define CLCL 344
#define MUL_ASSIGN 345
#define DIV_ASSIGN 346
#define MOD_ASSIGN 347
#define ADD_ASSIGN 348
#define SUB_ASSIGN 349
#define LS_ASSIGN 350
#define RS_ASSIGN 351
#define AND_ASSIGN 352
#define XOR_ASSIGN 353
#define OR_ASSIGN 354
#define DBL_BRACE_L 355
#define DBL_BRACE_R 356
#define DECL 357
#define EXPR 358
#define VERBATIM 359
#define VERBATIM_GET 360
#define VERBATIM_PUT 361
#define VERBATIM_BOTH 362
#define VERBATIM_C 363
#define VERBATIM_C_CPP 364
#define VERBATIM_GET_C 365
#define VERBATIM_PUT_C 366
#define VERBATIM_BOTH_C 367
#define VERBATIM_J 368
#define VERBATIM_GET_J 369
#define VERBATIM_PUT_J 370
#define VERBATIM_BOTH_J 371
#define LENGTHOF 372
#define ISIDOF 373
#define SKIPBITS 374
#define NEXTBITS 375
#define SNEXTBITS 376
#define LITTLE_NEXTBITS 377
#define LITTLE_SNEXTBITS 378
#define NEXTCODE 379
#define NUMBITS 380
#define ESC_FTYPE 381
#define ESC_MAP 382
#define ARRAY 383
#define LOWER_THAN_ELSE 384

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 56 "yacc/parser.y" /* yacc.c:1909  */

    char            *string;
    int             ival;
    double          dval;
    unsigned int    uival;
    bit_t           *bit;
    list_t          *lp;
    symbol_t        *sp;
    node_t          *np;
    verbatim_t	    *vp;

#line 324 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
