/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc/parser.y" /* yacc.c:339  */


/*
 * Copyright (c) 1997-2005 Alexandros Eleftheriadis, Danny Hong and 
 * Yuntai Kyong.
 *
 * This file is part of Flavor, developed at Columbia University
 * (http://flavor.sourceforge.net).
 *
 * Flavor is free software; you can redistribute it and/or modify
 * it under the terms of the Flavor Artistic License as described in
 * the file COPYING.txt. 
 *
 */

/*
 * Authors:
 * Alexandros Eleftheriadis <eleft@ee.columbia.edu>
 * Danny Hong <danny@ee.columbia.edu>
 * Yuntai Kyong <yuntaikyong@ieee.org>
 *
 */

/*
 *  Yacc parser for Flavor translator
 */

#include <stdio.h>
#include <string.h>

#include "port.h"
#include "error.h"
#include "globals.h"
#include "symbol.h"
#include "ptree.h"
#include "check.h"
#include "util.h"
#include "eval.h"
#include "compile.h"
#include "carray.h"

/* defined in the lexical analyzer */
void yyerror(char *fmt, ...);
int yywrap();
int include(char *file, int import);

/* Disable 'unreferenced label' warning from Microsoft Visual C++.
 * MKS Yacc generates various labels that are not used.
 */
#if defined(_WIN32_) || defined(WIN32)
#pragma warning(disable : 4102)
#endif


#line 121 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 56 "yacc/parser.y" /* yacc.c:355  */

    char            *string;
    int             ival;
    double          dval;
    unsigned int    uival;
    bit_t           *bit;
    list_t          *lp;
    symbol_t        *sp;
    node_t          *np;
    verbatim_t	    *vp;

#line 431 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 448 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  97
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2158

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  548

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,     2,     2,     2,    95,    93,     2,
      82,    83,    88,    86,    79,    87,    98,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    78,
      90,   113,    91,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    92,    85,    99,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   207,   208,   209,   210,   215,   220,   221,
     224,   231,   232,   236,   246,   247,   248,   252,   253,   254,
     255,   256,   260,   264,   268,   269,   270,   271,   275,   276,
     280,   281,   282,   283,   284,   285,   289,   290,   291,   292,
     296,   297,   298,   302,   303,   304,   305,   306,   307,   311,
     312,   313,   314,   315,   316,   317,   321,   322,   326,   327,
     331,   332,   336,   337,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   355,   356,   360,   361,   369,
     373,   401,   419,   420,   424,   425,   429,   435,   436,   437,
     438,   439,   440,   441,   445,   449,   453,   457,   460,   463,
     466,   469,   475,   476,   480,   481,   482,   483,   484,   485,
     486,   490,   491,   492,   496,   497,   501,   502,   503,   504,
     505,   506,   510,   518,   519,   524,   529,   530,   534,   539,
     547,   548,   557,   558,   562,   563,   570,   579,   587,   597,
     598,   599,   600,   601,   602,   603,   607,   613,   619,   623,
     624,   628,   629,   633,   634,   635,   636,   637,   638,   642,
     643,   647,   648,   649,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   671,   672,   673,   677,   682,   686,
     687,   688,   689,   690,   691,   692,   693,   701,   716,   749,
     757,   764,   774,   775,   800,   808,   817,   827,   835,   846,
     858,   869,   884,   889,   894,   900,   905,   910,   920,   925,
     930,   936,   941,   946,   957,   958,   959,   960,   964,   965,
     969,   985,   986,   990,   994,   998,   999,  1003,  1007,  1011,
    1015,  1016,  1020,  1024,  1035,  1036,  1040,  1041,  1045,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,  1066,  1067,  1076,  1088,  1103,
    1110,  1117,  1123,  1132,  1136,  1137,  1145,  1150,  1159,  1160,
    1164,  1167,  1186,  1187,  1191,  1192,  1193,  1202,  1211,  1223,
    1231,  1240,  1244,  1245,  1249,  1253,  1257,  1258,  1259,  1263,
    1264,  1265,  1266,  1270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "BIT", "INT", "FLOAT", "DOUBLE",
  "UINT64_T", "CLASS", "IF", "ELSE", "DO", "WHILE", "FOR", "GOTO", "BREAK",
  "CONTINUE", "REPEAT", "MAP", "EXTENDS", "SWITCH", "CASE", "DEFAULT",
  "BAC", "PRAGMA", "PRAGMA_ARRAY", "PRAGMA_GET", "PRAGMA_NOGET",
  "PRAGMA_PUT", "PRAGMA_NOPUT", "PRAGMA_PUTXML", "PRAGMA_NOPUTXML",
  "PRAGMA_TRACE", "PRAGMA_NOTRACE", "PRAGMA_LINE", "PRAGMA_NOLINE",
  "PRAGMA_INCLUDES", "PRAGMA_NULLSTRINGS", "PRAGMA_NONULLSTRINGS",
  "PRAGMA_NOINCLUDES", "PRAGMA_BITSTREAM", "PRAGMA_PREFIX",
  "PRAGMA_ERROR_FUNC", "PRAGMA_TRACE_FUNC", "BAC_PREC", "BAC_OOC",
  "BAC_SOC", "BAC_TE", "BAC_RENORM", "BAC_BS", "BAC_INIT", "BAC_END",
  "BAC_RTABLE", "BAC_NEXTI", "BAC_TRANS", "BAC_EXCH", "INCLUDE", "IMPORT",
  "UNSIGNED", "SIGNED", "SHORT", "LONG", "CONST", "ALIGNED", "STATIC",
  "ABSTRACT", "LITTLE", "BIG", "INT_LITERAL", "DOUBLE_LITERAL",
  "BIT_LITERAL", "STRING_LITERAL", "VARIABLE", "CLASS_TYPE", "MAP_TYPE",
  "BAC_TYPE", "LABEL", "';'", "','", "'?'", "':'", "'('", "')'", "'{'",
  "'}'", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'|'", "'&'", "'^'",
  "'%'", "'['", "']'", "'.'", "'~'", "'!'", "LS", "RS", "GE", "LE", "NE",
  "EQ", "OR", "AND", "INC", "DEC", "RANGE", "CLCL", "'='", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LS_ASSIGN",
  "RS_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "DBL_BRACE_L",
  "DBL_BRACE_R", "DECL", "EXPR", "VERBATIM", "VERBATIM_GET",
  "VERBATIM_PUT", "VERBATIM_BOTH", "VERBATIM_C", "VERBATIM_C_CPP",
  "VERBATIM_GET_C", "VERBATIM_PUT_C", "VERBATIM_BOTH_C", "VERBATIM_J",
  "VERBATIM_GET_J", "VERBATIM_PUT_J", "VERBATIM_BOTH_J", "LENGTHOF",
  "ISIDOF", "SKIPBITS", "NEXTBITS", "SNEXTBITS", "LITTLE_NEXTBITS",
  "LITTLE_SNEXTBITS", "NEXTCODE", "NUMBITS", "ESC_FTYPE", "ESC_MAP",
  "ARRAY", "LOWER_THAN_ELSE", "$accept", "primary_expr", "identifier",
  "postfix_expr", "rescoped_expr", "unary_expr", "builtin_function",
  "nextbits_function", "modifier_list", "unary_operator",
  "multiplicative_expr", "additive_expr", "shift_expr", "relational_expr",
  "logical_and_expr", "logical_or_expr", "conditional_expr",
  "assignment_expr", "assignment_operator", "assignment_expr_list",
  "argument_expr_list", "declaration", "declaration_list", "type_info",
  "plain_type_info", "parsable_type_info", "declaration_modifiers",
  "modifier", "alignment_modifier", "type_specifier",
  "builtin_type_specifier", "user_type_specifier", "init_declarator",
  "array", "array_expr_list", "array_expr", "declarator",
  "declarator_with_params", "declarator_with_range", "statement",
  "labeled_statement", "compound_statement",
  "statement_or_declaration_list", "statement_or_declaration",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "program", "external_definition", "class_definition",
  "complex_class_declarator", "derived_class_declarator",
  "param_class_declarator", "aligned_class_declarator", "class_declarator",
  "id_declarator", "id_range_declarator", "class_body", "parameter_list",
  "parameter_declaration", "verbatim", "pragma", "pragma_list",
  "pragma_item", "import_file", "include_file", "map_definition",
  "map_declarator", "map_body", "map_entry_list", "map_entry", "map_code",
  "map_entry_item_list", "map_entry_item_escape",
  "map_entry_item_escape_list", "map_entry_item", "bac_definition",
  "bac_declarator", "bac_body", "bac_entry_list", "bac_entry",
  "bac_keyword", "bac_entry_item", "bac_entry_item_list", "bac_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    59,    44,
      63,    58,    40,    41,   123,   125,    43,    45,    42,    47,
      60,    62,   124,    38,    94,    37,    91,    93,    46,   126,
      33,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    61,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384
};
# endif

#define YYPACT_NINF -412

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-412)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     130,   -60,   -60,  2114,   -47,   -43,   -51,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,    11,   -60,  1331,   674,  -412,  -412,   -61,   -29,    37,
     -13,  -412,  -412,  -412,  -412,  -412,    44,  -412,    59,  -412,
       5,  -412,    35,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,    58,    73,    78,
      87,    30,  -412,  -412,  -412,  1990,  -412,   -60,  -412,  -412,
     -66,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,    52,
    -412,  -412,  -412,  -412,  -412,   170,  -412,  -412,  -412,  -412,
    -412,   270,  -412,  -412,   120,   121,  -412,  -412,  -412,  -412,
     765,  -412,   142,    94,   386,   136,  -412,   144,  -412,   386,
     139,   145,   146,   149,   150,  2114,  -412,  -412,  -412,  1990,
    -412,  -412,  -412,  -412,  -412,  -412,   141,   143,   148,   151,
     158,   159,  -412,  -412,    31,   -60,  -412,  -412,  -412,  1990,
     -69,    98,    64,    33,   118,   -62,   161,  -412,  1990,  1426,
    1279,  -412,  -412,   116,  1445,  -412,  -412,   160,  -412,  1343,
     156,   163,  1169,   164,   165,   155,   171,   172,   166,  1990,
     174,   175,  -412,   866,   194,   198,   400,  -412,   204,  -412,
     386,  -412,  -412,  -412,   967,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,   700,  -412,  -412,  -412,  -412,
     -60,   386,  -412,   -25,  -412,  -412,    21,  -412,   205,  -412,
      25,  -412,   207,   540,   206,  -412,  -412,  -412,  -412,  -412,
    -412,   210,    62,   153,  1990,   -27,     4,   211,  1990,  -412,
    -412,  -412,  -412,  -412,  1990,  1990,  1990,  1990,  1990,  1990,
    1990,  1990,  1990,  1990,  1990,  1990,  1990,  1990,  1990,  1990,
    1990,  1990,  1990,  -412,   216,   213,  1990,   193,  -412,  1279,
     187,  -412,  -412,  -412,  -412,   220,   222,  1491,   223,   224,
     225,   226,  1990,   240,  1990,  1537,   221,  -412,  -412,  1990,
     229,  1169,   242,  -412,  1068,  -412,  1169,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  1990,  -412,
     234,  -412,  1701,   231,   219,   386,  -412,   136,  -412,   586,
     144,  -412,  1362,  -412,   233,  -412,  -412,   -33,   239,   237,
     243,   241,  -412,   247,   245,   255,  -412,   244,  -412,  -412,
    -412,   -69,   -69,    98,    98,    98,    98,    98,    64,    64,
      64,    64,    64,    64,    33,   258,   118,  1990,  -412,   249,
    -412,  -412,  -412,    34,  -412,  1990,   252,   254,   266,   267,
     263,  -412,   269,   271,   -68,   273,   -45,  1583,  -412,   117,
    -412,   277,  1169,  -412,   278,  -412,  -412,  -412,  -412,  1602,
     280,  1648,  -412,  -412,  -412,   684,  -412,   700,   281,  -412,
    -412,  -412,  -412,  1667,  -412,  -412,  -412,  -412,  1990,  -412,
    1260,  -412,  1260,  -412,   294,  -412,  1990,  -412,   272,  1279,
    -412,  -412,  -412,  -412,   284,   286,  -412,  -412,  -412,  1169,
    1990,  1169,  1731,   -56,  1750,  1990,  1169,  -412,   290,   292,
     295,  1796,   296,   299,  -412,    66,  -412,    68,   301,  1990,
    -412,  -412,    96,   302,   312,  -412,   305,   313,   314,  -412,
    -412,  -412,  -412,  -412,   388,   -22,  -412,  1169,   -12,  1842,
    1888,   -54,  -412,  -412,  -412,   -60,   -60,   317,   318,   -60,
     -60,  1990,  -412,   700,  -412,  1990,   319,  1907,  -412,  -412,
    -412,  1260,  -412,  -412,  1169,   325,  -412,  1169,  1169,    67,
    1169,    97,  1971,   293,   297,   -60,   -60,   303,   308,  -412,
    -412,   324,  -412,  -412,  -412,   326,  -412,  -412,  -412,  -412,
    1169,  -412,  1169,  1169,    99,  1990,  1990,   309,   310,  1990,
    1990,  -412,  -412,  -412,  -412,  -412,  1169,   304,   321,  1990,
    1990,   323,   328,  -412,  1990,  1990,   329,   330,  1990,  1990,
    -412,  -412,  1990,  1990,  -412,  -412,  -412,  -412
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     111,     0,     0,   234,     0,     0,   112,   221,   222,   223,
     224,   225,   229,   226,   227,   228,   230,   231,   232,   233,
     179,     0,     0,     0,   111,   177,   180,     0,   189,   192,
     195,   182,   183,   185,   184,   181,     0,   186,     0,     7,
       0,   280,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   251,   249,   250,   252,     0,     0,     0,
       0,   235,   236,   258,   257,     0,    79,     0,   134,    80,
     123,   126,   127,   117,   116,   118,   119,   120,   121,     0,
     104,   105,   106,   107,   108,     0,   109,   110,   122,    82,
      83,    85,   102,    84,   114,   115,   197,     1,   178,   188,
     111,   187,   111,     0,     0,     0,   259,     0,   279,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     0,
      32,    33,    34,    35,    30,    31,     0,     0,     0,     0,
       0,     0,     8,     2,    15,     0,    36,    14,    20,     0,
      40,    43,    49,    56,    58,    60,     0,    81,     0,     0,
       0,   200,   198,     0,     0,   103,    86,   114,   115,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,   111,   216,     2,    36,    62,     0,   154,
       0,   153,   139,   140,   111,   151,   141,   142,   143,   144,
     155,   156,   158,   157,   145,     0,   190,   191,   193,   194,
       0,    85,   114,     0,   218,   267,     0,   264,     0,   285,
       0,   282,     0,     0,     0,   238,   253,   254,   255,   256,
     237,     0,     0,     0,     0,   111,   111,     0,     0,    13,
      11,    12,    10,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,    77,     0,     0,     0,   129,     0,
      62,   124,   125,   201,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   175,     0,
       0,   111,     0,   149,   111,   217,   111,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,   160,
     214,   152,     0,     0,   220,     0,   196,     0,   263,     0,
       0,   281,     0,   261,     0,   260,     6,     0,     0,     0,
       0,     0,    28,     0,     0,     0,    23,     0,    37,    38,
      39,    41,    42,    48,    46,    47,    44,    45,    50,    51,
      53,    52,    55,    54,    57,     0,    59,     0,   137,     0,
     135,   132,   133,     0,   130,     0,    94,    93,     0,     0,
      88,   101,    87,    89,     0,     0,     0,     0,    75,     0,
     174,     0,   111,   148,     0,   150,   146,    63,   215,     0,
       0,     0,   219,   265,   278,     0,   274,     0,     0,   276,
     266,   283,   287,     0,   286,   284,   262,    17,     0,    19,
       0,    24,     0,    21,     0,     9,     0,    78,     0,     0,
     128,   138,    96,    95,    98,    97,    91,    90,    92,   111,
       0,   111,     0,     0,     0,     0,   111,   147,     0,     0,
       0,     0,     0,     0,   268,     0,   272,     0,     0,     0,
     290,   289,     0,     0,     0,    29,     0,     0,     0,    61,
     136,   131,   100,    99,   161,     0,   164,   111,     0,     0,
       0,     0,    76,   163,   293,     0,     0,     0,     0,     0,
       0,     0,   275,     0,   277,     0,     0,     0,   288,    18,
      25,     0,    26,    22,   111,     0,   166,   111,   111,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,   269,
     273,     0,   270,   292,   291,     0,   162,   165,   167,   168,
     111,   170,   111,   111,     0,     0,     0,     0,     0,     0,
       0,   271,    27,   169,   171,   172,   111,   207,   204,     0,
       0,   205,   202,   173,     0,     0,   206,   203,     0,     0,
     213,   210,     0,     0,   211,   208,   212,   209
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -412,  -412,    -1,   190,  -412,   152,  -412,  -412,    12,  -412,
     -40,    -4,   -34,   178,   177,  -260,   -58,   -55,  -412,  -411,
      77,    56,  -412,  -412,  -100,  -412,   -18,   -83,     3,   -81,
     -21,   -17,   363,   285,  -412,    42,   259,  -412,  -412,  -412,
    -412,  -412,   282,    72,  -412,  -412,  -412,  -412,  -412,   418,
    -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
     138,    74,    79,  -412,   348,    84,    88,  -412,  -412,  -412,
    -412,   167,  -412,  -412,  -376,  -412,  -412,  -412,  -412,  -412,
    -412,   157,  -412,  -412,  -412,  -412
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   132,   133,   134,   135,   136,   137,   138,   320,   139,
     140,   141,   142,   143,   144,   145,   177,   178,   298,   369,
     255,   179,    21,    22,    89,    90,   387,    92,   180,    93,
     202,   158,    69,   352,   353,   354,    70,    71,    72,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    24,    25,
      26,    27,    28,    29,    30,    96,   196,   197,   101,   203,
     204,   190,   191,    61,    62,   192,   193,    35,    36,   106,
     206,   207,   208,   435,   389,   437,   390,    37,    38,   108,
     210,   211,   212,   395,   442,   194
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      40,    41,    94,    23,   200,    91,    95,   146,   155,   436,
     156,   458,   364,    39,   366,   419,   148,    99,   251,   234,
     235,    68,   459,   100,   492,    63,   236,    23,   214,    64,
     149,    65,    80,    81,    82,    83,    84,     6,   421,   252,
      86,    87,   116,   117,   118,   252,    39,   150,   489,   491,
     397,   252,   102,   252,   305,   119,    20,   103,   306,   120,
     121,   485,   252,   228,   221,   229,    68,   425,     6,   104,
     157,   487,   122,   123,    31,   324,   230,   231,   152,    32,
      20,   514,   124,   125,    33,   252,   201,   109,    34,    66,
      67,   213,   260,   254,   257,   261,   266,   500,    31,   175,
     307,   270,   199,    32,   310,   195,   308,   423,    33,   115,
     311,   280,    34,   409,   126,   127,   128,   129,   155,   410,
     156,   130,   131,   244,   245,    39,   151,   228,   105,   229,
     155,   116,   117,   118,   232,    39,   246,   247,   248,   249,
     230,   231,   322,   107,   119,   471,   425,   473,   110,     1,
     510,   472,   264,   474,     2,     3,   239,   240,   241,    94,
     455,   175,    91,    95,   461,   242,   243,    39,   198,   319,
     321,   111,   175,   327,   303,   477,   425,   302,   425,   153,
     512,   478,   526,   175,   237,   238,   112,     4,     5,    39,
     263,   113,   314,   345,     6,   424,   425,   331,   332,    68,
     114,   349,   159,   160,   351,   200,     6,   205,   215,   359,
     338,   339,   340,   341,   342,   343,   209,   216,   217,   155,
     368,   218,   219,   222,   371,   223,   250,   318,   323,   325,
     224,   271,   276,   225,   273,   333,   334,   335,   336,   337,
     226,   227,   267,   377,   253,   272,   274,   275,   279,   277,
     278,   386,   176,   365,   394,   281,   301,   282,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   176,   285,    73,    74,    75,    76,    77,    78,   286,
     175,   380,   299,   175,   309,   175,   312,   201,   388,   315,
     350,   233,   254,   316,   326,   347,   348,   411,   355,   370,
     176,   176,   176,   356,   155,   357,   360,   361,   362,   363,
     372,   374,   378,   381,   176,   149,   396,   445,   398,   322,
     399,   430,   400,   433,   401,   176,   402,   434,   403,    80,
      81,    82,    83,    84,   404,   441,   176,    86,    87,   406,
     412,   405,   413,   443,    88,   444,   408,   447,   449,   414,
     415,   416,   154,   373,   351,   420,   301,   417,   376,   418,
     426,   428,   431,   439,   388,   448,   438,   368,   464,   450,
     462,   175,   452,   468,   453,   465,   176,   176,   466,   469,
     176,   476,   470,   475,   481,   479,   328,   329,   330,    73,
      74,    75,    76,    77,    78,   480,   482,   483,   445,   484,
     495,   496,   502,   507,   368,   368,   515,   521,   176,   522,
     516,   176,   317,   499,   446,   534,   519,   501,   175,   504,
     175,   520,   529,   530,   407,   175,   505,   176,   344,   346,
     147,   176,   535,   176,   538,   262,   176,   368,   176,   539,
     542,   543,    98,   382,   427,    80,    81,    82,    83,    84,
     176,   451,   388,    86,    87,   284,   175,   527,   528,   304,
      88,   531,   532,   220,   493,   494,     0,   391,   497,   498,
       0,   536,   537,     0,   383,     0,   540,   541,     0,     0,
     544,   545,     0,   175,   546,   547,   175,   175,     0,   175,
       0,   454,     0,   456,   517,   518,     0,     0,   463,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,   175,   175,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   176,   175,     0,     0,     0,   486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,     0,
     176,     0,   176,     0,   176,     0,   506,     0,     0,   508,
     509,   176,   511,     0,     0,     0,     0,     0,     0,     0,
       0,   176,     0,   176,   176,     0,     0,   176,   176,     0,
       0,     0,   523,     0,   524,   525,     0,     0,     0,    73,
      74,    75,    76,    77,    78,     0,     0,     0,   533,    80,
      81,    82,    83,    84,     0,     0,     0,    86,    87,   176,
       0,   176,   176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   313,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,   176,     0,     0,   176,
     176,     0,   176,     0,   176,    80,    81,    82,    83,    84,
       0,     0,     0,    86,    87,   116,   117,   118,   384,    39,
       0,     0,   176,     0,   176,   176,     0,     0,   119,     0,
     385,     0,   120,   121,    97,     0,     0,     0,   176,     0,
       0,     0,     0,     0,     0,   122,   123,    73,    74,    75,
      76,    77,    78,     1,     0,   124,   125,     0,     2,     3,
       0,     0,     0,    73,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,     4,     5,     0,   130,   131,     0,     0,     6,     0,
       0,     0,     0,    80,    81,    82,    83,    84,     0,     0,
       0,    86,    87,   116,   117,   118,     0,    39,     0,    80,
      81,    82,    83,    84,     0,     0,   119,    86,    87,     0,
     120,   121,     0,     0,     0,   161,     0,   162,   163,   164,
     165,   166,   167,   122,   123,     0,   168,   169,   170,     0,
       3,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     0,   126,   127,   128,   129,     6,
       0,     0,   130,   131,   116,   117,   118,     0,    39,     0,
       0,   171,     0,   172,     0,     0,     0,   119,     0,   173,
     174,   120,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   161,     0,   162,   163,
     164,   165,   166,   167,     0,     0,     0,   168,   169,   170,
       0,     3,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   126,   127,   128,   129,
       0,     0,     0,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,   116,   117,   118,     0,    39,
       0,     0,   171,     0,   172,     0,     0,     0,   119,     0,
     173,   283,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   161,     0,   162,
     163,   164,   165,   166,   167,     0,     0,     0,   168,   169,
     170,     0,     3,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   126,   127,   128,
     129,     0,     0,     0,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,   116,   117,   118,     0,
      39,     0,     0,   171,     0,   172,     0,     0,     0,   119,
       0,   173,   300,   120,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   161,     0,
     162,   163,   164,   165,   166,   167,     0,     0,     0,   168,
     169,   170,     0,     3,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   126,   127,
     128,   129,     0,     0,     0,   130,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,   116,   117,   118,
       0,    39,     0,     0,   171,     0,   172,     0,     0,     0,
     119,     0,   173,   375,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   125,   161,
       0,   162,   163,   164,   165,   166,   167,     0,     0,     0,
     168,   169,   170,     0,     3,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   126,
     127,   128,   129,     0,     0,     0,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,   116,   117,
     118,     0,    39,     0,     0,   171,     0,   172,     0,     0,
       0,   119,     0,   173,     0,   120,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     126,   127,   128,   129,     0,     0,     0,   130,   131,    80,
      81,    82,    83,    84,     0,     0,     0,    86,    87,   116,
     117,   118,     0,    39,    73,    74,    75,    76,    77,    78,
      79,     0,   119,     0,     0,     0,   120,   121,   116,   117,
     118,   258,    39,     0,     0,     0,     0,     0,     0,   122,
     123,   119,     0,   259,     0,   120,   121,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
      80,    81,    82,    83,    84,     0,     0,    85,    86,    87,
       0,   126,   127,   128,   129,    88,     0,     0,   130,   131,
       0,     0,   116,   117,   118,     0,    39,     0,   268,   269,
     126,   127,   128,   129,     0,   119,     0,   130,   131,   120,
     121,   116,   117,   118,   392,    39,     0,     0,     0,     0,
       0,     0,   122,   123,   119,     0,   393,     0,   120,   121,
       0,     0,   124,   125,     0,     0,     0,     0,     0,     0,
       0,   122,   123,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,     0,     0,
       0,   130,   131,     0,     0,   116,   117,   118,     0,    39,
       0,     0,     0,   126,   127,   128,   129,     0,   119,     0,
     130,   131,   120,   121,   116,   117,   118,     0,    39,     0,
     265,     0,   256,     0,     0,   122,   123,   119,     0,     0,
       0,   120,   121,     0,     0,   124,   125,     0,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,     0,     0,     0,     0,
     116,   117,   118,     0,    39,     0,   358,   126,   127,   128,
     129,     0,     0,   119,   130,   131,     0,   120,   121,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
     122,   123,     0,   130,   131,     0,     0,     0,     0,     0,
     124,   125,     0,     0,     0,     0,   116,   117,   118,     0,
      39,     0,     0,     0,     0,   367,     0,     0,     0,   119,
       0,     0,     0,   120,   121,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,   122,   123,     0,   130,
     131,     0,     0,     0,     0,     0,   124,   125,     0,     0,
       0,     0,   116,   117,   118,     0,    39,     0,     0,     0,
       0,   422,     0,     0,     0,   119,     0,     0,     0,   120,
     121,   116,   117,   118,     0,    39,     0,   429,   126,   127,
     128,   129,   122,   123,   119,   130,   131,     0,   120,   121,
       0,     0,   124,   125,     0,     0,     0,     0,     0,     0,
       0,   122,   123,     0,    73,    74,    75,    76,    77,    78,
       0,   124,   125,     0,     0,     0,     0,   116,   117,   118,
       0,    39,     0,   432,   126,   127,   128,   129,     0,     0,
     119,   130,   131,     0,   120,   121,   116,   117,   118,   440,
      39,     0,     0,   126,   127,   128,   129,   122,   123,   119,
     130,   131,     0,   120,   121,     0,     0,   124,   125,     0,
      80,    81,    82,    83,    84,     0,   122,   123,    86,    87,
       0,     0,     0,     0,     0,     0,   124,   125,     0,     0,
       0,     0,     0,   379,     0,     0,     0,     0,     0,   126,
     127,   128,   129,     0,     0,     0,   130,   131,     0,     0,
     116,   117,   118,     0,    39,     0,     0,     0,   126,   127,
     128,   129,     0,   119,   457,   130,   131,   120,   121,   116,
     117,   118,     0,    39,     0,     0,     0,     0,   460,     0,
     122,   123,   119,     0,     0,     0,   120,   121,     0,     0,
     124,   125,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,     0,   116,   117,   118,     0,    39,
       0,   467,   126,   127,   128,   129,     0,     0,   119,   130,
     131,     0,   120,   121,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,   122,   123,     0,   130,   131,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
       0,   116,   117,   118,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   488,     0,     0,   120,   121,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,   122,   123,     0,   130,   131,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,     0,   116,   117,   118,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   490,     0,     0,   120,   121,   116,   117,   118,   503,
      39,     0,     0,   126,   127,   128,   129,   122,   123,   119,
     130,   131,     0,   120,   121,     0,     0,   124,   125,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,   128,   129,     0,     0,     0,   130,   131,     0,     0,
     116,   117,   118,     0,    39,     0,     0,     0,   126,   127,
     128,   129,     0,   119,   513,   130,   131,   120,   121,   116,
     117,   118,     0,    39,     0,     0,     0,     0,     0,     0,
     122,   123,   119,     0,     0,     0,   120,   121,     0,     0,
     124,   125,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,     0,     0,     0,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,     0,     0,     0,   130,   131,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60
};

static const yytype_int16 yycheck[] =
{
       1,     2,    23,     0,   104,    23,    23,    65,    91,   385,
      91,   422,   272,    73,   274,    83,    82,    78,    80,    88,
      89,    22,    78,    84,    78,    72,    95,    24,   109,    72,
      96,    82,    59,    60,    61,    62,    63,    64,    83,   107,
      67,    68,    69,    70,    71,   107,    73,   113,   459,   460,
      83,   107,    81,   107,    79,    82,     0,    20,    83,    86,
      87,    83,   107,    96,   119,    98,    67,    79,    64,    82,
      91,    83,    99,   100,     0,    71,   109,   110,    79,     0,
      24,   492,   109,   110,     0,   107,   104,    82,     0,    78,
      79,   109,   150,   148,   149,   150,   154,   473,    24,   100,
      79,   159,   103,    24,    79,   102,    85,   367,    24,    79,
      85,   169,    24,    79,   141,   142,   143,   144,   201,    85,
     201,   148,   149,    90,    91,    73,    74,    96,    84,    98,
     213,    69,    70,    71,   135,    73,   103,   104,   105,   106,
     109,   110,   225,    84,    82,    79,    79,    79,   113,    19,
      83,    85,   153,    85,    24,    25,    92,    93,    94,   180,
     420,   162,   180,   180,   424,   101,   102,    73,    74,   224,
     225,   113,   173,   228,   195,    79,    79,   195,    79,     9,
      83,    85,    83,   184,    86,    87,   113,    57,    58,    73,
      74,   113,   213,   251,    64,    78,    79,   237,   238,   200,
     113,   256,    82,    82,   259,   305,    64,    71,    69,   267,
     244,   245,   246,   247,   248,   249,    72,    72,    72,   302,
     275,    72,    72,    82,   279,    82,   108,    74,   225,   226,
      82,    75,    77,    82,   162,   239,   240,   241,   242,   243,
      82,    82,    82,   298,    83,    82,    82,    82,    82,    78,
      78,   309,   100,    13,   312,    81,   184,    82,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   119,    78,     3,     4,     5,     6,     7,     8,    81,
     281,   302,    78,   284,    79,   286,    79,   305,   309,    83,
      97,   139,   347,    83,    83,    79,    83,   355,   111,    78,
     148,   149,   150,    83,   387,    83,    83,    83,    83,    83,
      81,    69,    78,    82,   162,    96,    83,   400,    79,   402,
      83,   379,    79,   381,    83,   173,    79,   385,    83,    59,
      60,    61,    62,    63,    79,   393,   184,    67,    68,    81,
      88,    97,    88,   398,    74,   400,    97,   402,   406,    83,
      83,    88,    82,   281,   409,    82,   284,    88,   286,    88,
      83,    83,    82,    82,   385,    71,   387,   422,    78,    97,
     425,   372,    88,   431,    88,    83,   224,   225,    83,    83,
     228,   439,    83,    82,    79,    83,   234,   235,   236,     3,
       4,     5,     6,     7,     8,    83,    83,    83,   481,    11,
      83,    83,    83,    78,   459,   460,   113,    83,   256,    83,
     113,   259,   222,   471,   402,   111,   113,   475,   419,   477,
     421,   113,   113,   113,   347,   426,   481,   275,   250,   252,
      67,   279,   111,   281,   111,   150,   284,   492,   286,   111,
     111,   111,    24,   305,   372,    59,    60,    61,    62,    63,
     298,   409,   473,    67,    68,   173,   457,   515,   516,   200,
      74,   519,   520,   115,   465,   466,    -1,   310,   469,   470,
      -1,   529,   530,    -1,   307,    -1,   534,   535,    -1,    -1,
     538,   539,    -1,   484,   542,   543,   487,   488,    -1,   490,
      -1,   419,    -1,   421,   495,   496,    -1,    -1,   426,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,
      -1,   512,   513,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   372,   526,    -1,    -1,    -1,   457,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
     398,    -1,   400,    -1,   402,    -1,   484,    -1,    -1,   487,
     488,   409,   490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,   421,   422,    -1,    -1,   425,   426,    -1,
      -1,    -1,   510,    -1,   512,   513,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,   526,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,   457,
      -1,   459,   460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   481,    -1,    -1,   484,    -1,    -1,   487,
     488,    -1,   490,    -1,   492,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      -1,    -1,   510,    -1,   512,   513,    -1,    -1,    82,    -1,
      84,    -1,    86,    87,     0,    -1,    -1,    -1,   526,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,     3,     4,     5,
       6,     7,     8,    19,    -1,   109,   110,    -1,    24,    25,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    57,    58,    -1,   148,   149,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    -1,    73,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    82,    67,    68,    -1,
      86,    87,    -1,    -1,    -1,    10,    -1,    12,    13,    14,
      15,    16,    17,    99,   100,    -1,    21,    22,    23,    -1,
      25,    -1,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,   141,   142,   143,   144,    64,
      -1,    -1,   148,   149,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    10,    -1,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    -1,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,
      82,    -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    23,    -1,    25,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,
      -1,    82,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,    -1,    -1,   148,   149,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    -1,    73,     3,     4,     5,     6,     7,     8,
       9,    -1,    82,    -1,    -1,    -1,    86,    87,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    82,    -1,    84,    -1,    86,    87,    -1,    -1,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
      59,    60,    61,    62,    63,    -1,    -1,    66,    67,    68,
      -1,   141,   142,   143,   144,    74,    -1,    -1,   148,   149,
      -1,    -1,    69,    70,    71,    -1,    73,    -1,    75,    76,
     141,   142,   143,   144,    -1,    82,    -1,   148,   149,    86,
      87,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    99,   100,    82,    -1,    84,    -1,    86,    87,
      -1,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,   149,    -1,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    82,    -1,
     148,   149,    86,    87,    69,    70,    71,    -1,    73,    -1,
      75,    -1,    96,    -1,    -1,    99,   100,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,    73,    -1,    75,   141,   142,   143,
     144,    -1,    -1,    82,   148,   149,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      99,   100,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
     109,   110,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    99,   100,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,    -1,
      -1,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    69,    70,    71,    -1,    73,    -1,    75,   141,   142,
     143,   144,    99,   100,    82,   148,   149,    -1,    86,    87,
      -1,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,     3,     4,     5,     6,     7,     8,
      -1,   109,   110,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    73,    -1,    75,   141,   142,   143,   144,    -1,    -1,
      82,   148,   149,    -1,    86,    87,    69,    70,    71,    72,
      73,    -1,    -1,   141,   142,   143,   144,    99,   100,    82,
     148,   149,    -1,    86,    87,    -1,    -1,   109,   110,    -1,
      59,    60,    61,    62,    63,    -1,    99,   100,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    82,    83,   148,   149,    86,    87,    69,
      70,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      99,   100,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,
     109,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,
      -1,    75,   141,   142,   143,   144,    -1,    -1,    82,   148,
     149,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    99,   100,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,   109,   110,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    99,   100,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,   109,   110,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    86,    87,    69,    70,    71,    72,
      73,    -1,    -1,   141,   142,   143,   144,    99,   100,    82,
     148,   149,    -1,    86,    87,    -1,    -1,   109,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    82,    83,   148,   149,    86,    87,    69,
      70,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      99,   100,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,
     109,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,   149,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    24,    25,    57,    58,    64,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     175,   176,   177,   182,   202,   203,   204,   205,   206,   207,
     208,   215,   216,   219,   220,   221,   222,   231,   232,    73,
     156,   156,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   217,   218,    72,    72,    82,    78,    79,   156,   186,
     190,   191,   192,     3,     4,     5,     6,     7,     8,     9,
      59,    60,    61,    62,    63,    66,    67,    68,    74,   178,
     179,   180,   181,   183,   184,   185,   209,     0,   203,    78,
      84,   212,    81,    20,    82,    84,   223,    84,   233,    82,
     113,   113,   113,   113,   113,    79,    69,    70,    71,    82,
      86,    87,    99,   100,   109,   110,   141,   142,   143,   144,
     148,   149,   155,   156,   157,   158,   159,   160,   161,   163,
     164,   165,   166,   167,   168,   169,   170,   186,    82,    96,
     113,    74,   156,     9,    82,   181,   183,   184,   185,    82,
      82,    10,    12,    13,    14,    15,    16,    17,    21,    22,
      23,    76,    78,    84,    85,   156,   159,   170,   171,   175,
     182,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     215,   216,   219,   220,   239,   182,   210,   211,    74,   156,
     178,   180,   184,   213,   214,    71,   224,   225,   226,    72,
     234,   235,   236,   180,   183,    69,    72,    72,    72,    72,
     218,   171,    82,    82,    82,    82,    82,    82,    96,    98,
     109,   110,   156,   159,    88,    89,    95,    86,    87,    92,
      93,    94,   101,   102,    90,    91,   103,   104,   105,   106,
     108,    80,   107,    83,   171,   174,    96,   171,    72,    84,
     170,   171,   187,    74,   156,    75,   170,    82,    75,    76,
     170,    75,    82,   197,    82,    82,    77,    78,    78,    82,
     170,    81,    82,    85,   196,    78,    81,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   172,    78,
      85,   197,   180,   184,   190,    79,    83,    79,    85,    79,
      79,    85,    79,    83,   184,    83,    83,   157,    74,   171,
     162,   171,   181,   182,    71,   182,    83,   171,   159,   159,
     159,   164,   164,   165,   165,   165,   165,   165,   166,   166,
     166,   166,   166,   166,   167,   170,   168,    79,    83,   171,
      97,   171,   187,   188,   189,   111,    83,    83,    75,   170,
      83,    83,    83,    83,   169,    13,   169,    78,   171,   173,
      78,   171,    81,   197,    69,    85,   197,   171,    78,    82,
     184,    82,   214,   225,    72,    84,   170,   180,   184,   228,
     230,   235,    72,    84,   170,   237,    83,    83,    79,    83,
      79,    83,    79,    83,    79,    97,    81,   174,    97,    79,
      85,   170,    88,    88,    83,    83,    88,    88,    88,    83,
      82,    83,    78,   169,    78,    79,    83,   197,    83,    75,
     170,    82,    75,   170,   170,   227,   228,   229,   184,    82,
      72,   170,   238,   171,   171,   181,   162,   171,    71,   170,
      97,   189,    88,    88,   197,   169,   197,    83,   173,    78,
      78,   169,   171,   197,    78,    83,    83,    75,   170,    83,
      83,    79,    85,    79,    85,    82,   170,    79,    85,    83,
      83,    79,    83,    83,    11,    83,   197,    83,    83,   173,
      83,   173,    78,   156,   156,    83,    83,   156,   156,   170,
     228,   170,    83,    72,   170,   171,   197,    78,   197,   197,
      83,   197,    83,    83,   173,   113,   113,   156,   156,   113,
     113,    83,    83,   197,   197,   197,    83,   170,   170,   113,
     113,   170,   170,   197,   111,   111,   170,   170,   111,   111,
     170,   170,   111,   111,   170,   170,   170,   170
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   154,   155,   155,   155,   155,   155,   156,   157,   157,
     157,   157,   157,   158,   159,   159,   159,   160,   160,   160,
     160,   160,   160,   160,   161,   161,   161,   161,   162,   162,
     163,   163,   163,   163,   163,   163,   164,   164,   164,   164,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   174,   174,   175,
     176,   176,   177,   177,   178,   178,   178,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   180,   180,   181,   181,   181,   181,   181,   181,
     181,   182,   182,   182,   183,   183,   184,   184,   184,   184,
     184,   184,   185,   186,   186,   186,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   190,   191,   192,   193,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   195,
     195,   196,   196,   197,   197,   197,   197,   197,   197,   198,
     198,   199,   199,   199,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   201,   201,   202,   202,   203,
     203,   203,   203,   203,   203,   203,   203,   204,   204,   205,
     205,   205,   206,   206,   206,   207,   207,   208,   209,   209,
     209,   209,   210,   210,   210,   210,   210,   210,   211,   211,
     211,   211,   211,   211,   212,   212,   212,   212,   213,   213,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   216,   216,   217,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   220,   221,
     222,   222,   222,   223,   224,   224,   225,   226,   227,   227,
     228,   228,   229,   229,   230,   230,   230,   230,   230,   231,
     232,   233,   234,   234,   235,   236,   237,   237,   237,   238,
     238,   238,   238,   239
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     1,     4,
       2,     2,     2,     2,     1,     1,     2,     4,     6,     4,
       1,     4,     6,     3,     4,     6,     6,     8,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     3,     2,     2,     1,     1,     2,     4,     4,     4,
       5,     5,     5,     4,     4,     5,     5,     5,     5,     6,
       6,     4,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     3,     1,
       1,     3,     1,     1,     1,     4,     6,     4,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     7,     8,
       7,     8,     8,     9,     3,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       3,     3,     1,     3,     3,     1,     4,     2,     2,     3,
       2,     3,     8,     9,     8,     8,     9,     8,    10,    11,
      10,    10,    11,    10,     3,     4,     2,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     2,     2,     2,
       5,     5,     6,     3,     1,     3,     3,     1,     1,     3,
       4,     5,     1,     3,     1,     3,     1,     3,     1,     2,
       2,     3,     1,     3,     3,     1,     1,     1,     3,     1,
       1,     3,     3,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 206 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_ident((yyvsp[0].sp)); }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 207 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = leafi(INT_LITERAL, (yyvsp[0].ival)); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 208 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = leafd(DOUBLE_LITERAL, (yyvsp[0].dval)); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 209 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = leafi(INT_LITERAL, (yyvsp[0].bit)->val); free((yyvsp[0].bit)); }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 210 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = (yyvsp[-1].np); (yyval.np)->paren = 1; }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 221 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_subarray((yyvsp[-3].np), (yyvsp[-1].np)); }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 224 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.np) = eval_scoped((yyvsp[-1].np), (yyvsp[0].sp));

        /* remove two temporary contexts */
        s_remcontext();
        s_remcontext();
    }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 231 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_incdec((yyvsp[0].ival), (yyvsp[-1].np)); }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 232 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_incdec((yyvsp[0].ival), (yyvsp[-1].np)); }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 236 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* activate the context of the class; if not available, eval_scoped above will catch it */
        if ((yyvsp[-1].np)->ptype!=NULL && (yyvsp[-1].np)->ptype->cxt!=NULL) s_inscontext((yyvsp[-1].np)->ptype->cxt);
        /* add another context to protect the class members */
        s_newcontext(0);
        (yyval.np) = (yyvsp[-1].np);
    }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 247 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_array((yyvsp[0].np)); }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 248 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_unary((yyvsp[-1].ival), (yyvsp[0].np)); }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 252 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_lengthof(eval_array((yyvsp[-1].np))); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 253 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_isidof((yyvsp[-3].sp), (yyvsp[-1].np)); }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 254 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_skipbits((yyvsp[-1].np)); }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 256 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.np) = node(NEXTCODE, leafb(BIT_LITERAL, (yyvsp[-1].bit)), NULL);
        (yyval.np)->type=INT; (yyval.np)->ptype = s_lookup("int"); 
    }
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 260 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.np)=node(NEXTCODE, leafb(BIT_LITERAL, (yyvsp[-1].bit)), (yyvsp[-3].np));
        (yyval.np)->type = INT; (yyval.np)->ptype = s_lookup("int"); 
    }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 264 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = leaf(NUMBITS); (yyval.np)->type = INT; (yyval.np)->ptype = s_lookup("int"); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 268 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_nextbits((yyvsp[-1].np), 0, NULL); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 269 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_nextbits((yyvsp[-1].np), (yyvsp[-3].ival), NULL); }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 270 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_nextbits((yyvsp[-1].np), 0, (yyvsp[-3].np)); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 271 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_nextbits((yyvsp[-1].np), (yyvsp[-3].ival), (yyvsp[-5].np)); }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 275 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = s_tok2mod((yyvsp[0].ival)); }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 276 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = check_mod((yyvsp[-2].ival), s_tok2mod((yyvsp[0].ival))); }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 290 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_mult((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 291 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_mult((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 292 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_mult((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 297 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_add((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 298 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_add((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 303 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_shift((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 304 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_shift((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 305 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_shift((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 306 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_shift((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 307 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_shift((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 312 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_rel((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 313 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_rel((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 314 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_rel((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 315 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_rel((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 316 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_rel((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 317 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_rel((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 322 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_logic((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 326 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = check_unassigned((yyvsp[0].np), (yyvsp[0].np)); }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 327 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_logic((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 332 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = eval_cond((yyvsp[-3].ival), (yyvsp[-4].np), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 337 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = check_assign((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 356 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = node((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 361 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = node((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); }
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 373 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = (yyvsp[0].lp);

        /* copy parse, align, and usenext */
        (yyval.lp)->e2 = check_parse((yyvsp[-1].lp)->sp, (yyvsp[-1].lp)->type, (yyvsp[-1].lp)->e1);
        
        /* also check for lookahead parsing of escaped maps */
        if ((yyvsp[-1].lp)->usenext && (yyvsp[-1].lp)->e1->op == MAP_TYPE && (yyvsp[-1].lp)->e1->left.sp->escape)
            yyerror("Map with escape (%s) cannot be used in lookahead parsing", (yyvsp[-1].lp)->e1->left.sp->name);

        /* check that for a bac, the declarator must be accompanied with param types */
        if ((yyvsp[-1].lp)->e1 && (yyvsp[-1].lp)->e1->op == BAC_TYPE) 
            if ((yyvsp[0].lp) == NULL || (yyvsp[0].lp)->e3 == NULL)
                yyerror("BAC (%s) must be accompanied with corresponding parameters", (yyvsp[-1].lp)->e1->left.sp->name);
        
        (yyval.lp)->align = (yyvsp[-1].lp)->align;
        (yyval.lp)->usenext = (yyvsp[-1].lp)->usenext;
        
        /* if BIT type, treat as unsigned */
        if ((yyvsp[-1].lp)->sp->ident == BIT) (yyvsp[-1].lp)->type |= M_UNSIGNED;
        
        /* set type, mods, parse, init, check param, check alignment, dims and dim values */
        (yyval.lp)->sp = set_var((yyval.lp)->sp, (yyvsp[-1].lp)->sp, (yyvsp[-1].lp)->type, (yyvsp[0].lp)->e2, (yyvsp[0].lp)->e1, (yyvsp[0].lp)->e3, (yyvsp[-1].lp)->align, (yyvsp[0].lp)->dims, (yyvsp[0].lp)->dim, 0, (yyval.lp)->sp->range);
        
        /* if we have a static array declaration of a non-global variable, unroll it */
        if ((yyvsp[0].lp)->e1 != NULL && (yyvsp[0].lp)->e1->op == ARRAY && (yyvsp[0].lp)->sp->cxt_level > 0)
            (yyval.lp) = c_array_unroll((yyval.lp)); 
    }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 401 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* copy parse, align, and usenext */
        (yyvsp[0].lp)->e2 = (yyvsp[-2].lp)->e2;
        (yyvsp[0].lp)->align = (yyvsp[-2].lp)->align;
        (yyvsp[0].lp)->usenext = (yyvsp[-2].lp)->usenext;
 
        /* set type, mods, parse, init, check param, check alignment, dims and dim values */
        (yyvsp[0].lp)->sp = set_var((yyvsp[0].lp)->sp, (yyvsp[-2].lp)->sp->ptype, (yyvsp[-2].lp)->sp->modifiers, (yyvsp[0].lp)->e2, (yyvsp[0].lp)->e1, (yyvsp[0].lp)->e3, (yyvsp[-2].lp)->align, (yyvsp[0].lp)->dims, (yyvsp[0].lp)->dim, 0, (yyvsp[0].lp)->sp->range);
 
        /* if we have a static array declaration of a non-global variable, unroll it */
        if ((yyvsp[0].lp)->e1 != NULL && (yyvsp[0].lp)->e1->op == ARRAY && (yyvsp[0].lp)->sp->cxt_level > 0)
            (yyval.lp) = app((yyvsp[-2].lp), c_array_unroll((yyvsp[0].lp))); 
        else
            (yyval.lp) = app((yyvsp[-2].lp), (yyvsp[0].lp));
    }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 419 "yacc/parser.y" /* yacc.c:1646  */
    { (yyvsp[0].lp)->align = (yyvsp[-1].np); (yyval.lp) = (yyvsp[0].lp); }
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 420 "yacc/parser.y" /* yacc.c:1646  */
    { (yyvsp[0].lp)->align = (yyvsp[-1].np); (yyval.lp) = (yyvsp[0].lp); }
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 424 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[0].sp), NULL, 0); }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 425 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[0].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified");
        (yyval.lp) = lnew_type(check_modtype((yyvsp[0].ival), s_lookup("int")), s_lookup("int"), NULL, 0);
    }
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 429 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-1].ival), (yyvsp[0].sp)), (yyvsp[0].sp), NULL, 0);
    }
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 435 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[-3].sp), (yyvsp[-1].np), 0); }
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 436 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[-3].sp), leafs(MAP_TYPE, (yyvsp[-1].sp)), 0); }
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 437 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[-3].sp), leafs(MAP_TYPE, (yyvsp[-1].sp)), 0); }
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 438 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[-4].sp), (yyvsp[-2].np), 1); }
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 439 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[-4].sp), leafs(MAP_TYPE, (yyvsp[-2].sp)), 1); }
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 440 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_type(M_NONE, (yyvsp[-4].sp), leafs(MAP_TYPE, (yyvsp[-2].sp)), 1); }
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 441 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-3].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified");
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-3].ival), s_lookup("int")), s_lookup("int"), (yyvsp[-1].np), 0);
    }
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 445 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-3].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified");
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-3].ival), s_lookup("int")), s_lookup("int"), leafs(MAP_TYPE, (yyvsp[-1].sp)), 0);
    }
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 449 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-4].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified");
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-4].ival), s_lookup("int")), s_lookup("int"), (yyvsp[-2].np), 1);
    }
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 453 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-4].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified");
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-4].ival), s_lookup("int")), s_lookup("int"), leafs(MAP_TYPE, (yyvsp[-2].sp)), 1);
    }
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 457 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-4].ival), (yyvsp[-3].sp)), (yyvsp[-3].sp), (yyvsp[-1].np), 0);
    }
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 460 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-4].ival), (yyvsp[-3].sp)), (yyvsp[-3].sp), leafs(MAP_TYPE, (yyvsp[-1].sp)), 0);
    }
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 463 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-5].ival), (yyvsp[-4].sp)), (yyvsp[-4].sp), (yyvsp[-2].np), 1);
    }
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 466 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew_type(check_modtype((yyvsp[-5].ival), (yyvsp[-4].sp)), (yyvsp[-4].sp), leafs(MAP_TYPE, (yyvsp[-2].sp)), 1);
    }
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 469 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew_type(M_NONE, (yyvsp[-3].sp), leafs(BAC_TYPE, (yyvsp[-1].sp)), 0);
    }
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 475 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = s_tok2mod((yyvsp[0].ival)); }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 476 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = check_mod((yyvsp[-1].ival), s_tok2mod((yyvsp[0].ival))); }
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 490 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = NULL; }
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 491 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = leafi(INT_LITERAL, 8); }
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 492 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.np) = check_align_arg((yyvsp[-1].np)); }
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 510 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (w_cyclic && s_get_cur_class() == (yyvsp[0].sp)) 
            yyerror("Declaration creates cyclic reference in class '%s'", (yyvsp[0].sp)->name);
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 519 "yacc/parser.y" /* yacc.c:1646  */
    {   
        (yyvsp[-2].lp)->sp->assigned = 1;
        (yyvsp[-2].lp)->e1 = (yyvsp[0].np);
        (yyval.lp) = (yyvsp[-2].lp);
    }
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 524 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-2].lp)->sp->assigned = 1;
        (yyvsp[-2].lp)->e1 = (yyvsp[0].np);
        (yyval.lp) = (yyvsp[-2].lp);
    }
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 534 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.np) = node(ARRAY, (yyvsp[-1].np), NULL); 
        (yyval.np)->ptype = (yyvsp[-1].np)->ptype;
        (yyval.np)->type = (yyvsp[-1].np)->type;
    }
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 539 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.np) = node(ARRAY, eval_array_string((yyvsp[0].string)), NULL);
        (yyval.np)->ptype = s_lookup("char");
        (yyval.np)->type = CHAR;
    }
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 549 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.np) = node((yyvsp[-1].ival), (yyvsp[-2].np), (yyvsp[0].np)); 
        (yyval.np)->ptype = check_type_promote((yyvsp[-2].np)->ptype, (yyvsp[0].np)->ptype);
        (yyval.np)->type = (yyval.np)->ptype->ident;
    }
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 562 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_sp(DECL, (yyvsp[0].sp)); }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 563 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* TBD: If the array is not parsable and not initialized, then the dimx_end variable is useless */
        s_cur_class_dimx_nonpartial((yyvsp[-3].lp)->dims, 1);
        (yyvsp[-3].lp)->dims++;
        (yyvsp[-3].lp)->dim = (node_t **)buildarray((void **)(yyvsp[-3].lp)->dim, node((yyvsp[-2].ival), check_array_size((yyvsp[-1].np)), NULL));
        (yyval.lp) = (yyvsp[-3].lp);
    }
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 570 "yacc/parser.y" /* yacc.c:1646  */
    {
        s_cur_class_dimx_nonpartial((yyvsp[-5].lp)->dims, 0);
        (yyvsp[-5].lp)->dims++;
        (yyvsp[-5].lp)->dim = (node_t **)buildarray((void **)(yyvsp[-5].lp)->dim, node(DBL_BRACE_L, check_array_index((yyvsp[-2].np)), NULL));
        (yyval.lp) = (yyvsp[-5].lp);
    }
#line 2899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 579 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* add argument expression list to declaration */
        (yyvsp[-3].lp)->e3 = (yyvsp[-1].np);
        (yyval.lp) = (yyvsp[-3].lp);
    }
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 588 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-4].lp)->sp->range = 1;
        (yyvsp[-4].lp)->sp->assigned = 1;
        (yyvsp[-4].lp)->e1 = idrange((yyvsp[-2].np), (yyvsp[0].np));
        (yyval.lp) = (yyvsp[-4].lp);   
    }
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 608 "yacc/parser.y" /* yacc.c:1646  */
    { 
        if ((yyvsp[-2].sp)->ptype != NULL) yyerror("Use of variable '%s' as a label is illegal", (yyvsp[-2].sp)->name);
        (yyvsp[-2].sp)->ident = LABEL;
        (yyval.lp) = prep((yyvsp[0].lp), lnew_sp(LABEL, (yyvsp[-2].sp)));
    }
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 614 "yacc/parser.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].np)->type > INT) yyerror("The 'case' expression must be of integral type");
        if (!is_literal((yyvsp[-2].np)->op) || ((yyvsp[-2].np)->op == VARIABLE && !((yyvsp[-2].np)->left.sp->modifiers & M_CONST))) yyerror("The 'case' expression must be a constant");
        (yyval.lp) = lnews1((yyvsp[-3].ival), (yyvsp[-2].np), (yyvsp[0].lp));
    }
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 619 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews0((yyvsp[-2].ival), (yyvsp[0].lp)); }
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 623 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[-1].ival)); }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 624 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews0((yyvsp[-2].ival), (yyvsp[-1].lp)); }
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 629 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-1].lp), (yyvsp[0].lp)); }
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 642 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0(EXPR); }
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 643 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(EXPR, (yyvsp[-1].np)); }
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 647 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_ifelse((yyvsp[-2].np), (yyvsp[0].lp), NULL); }
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 648 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_ifelse((yyvsp[-4].np), (yyvsp[-2].lp), (yyvsp[0].lp)); }
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 651 "yacc/parser.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].np)->type>INT) yyerror("'switch' expression must be of integral type");
        (yyval.lp) = lnews1((yyvsp[-4].ival), (yyvsp[-2].np), (yyvsp[0].lp));
    }
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 658 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews1((yyvsp[-4].ival), (yyvsp[-2].np), (yyvsp[0].lp)); }
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 659 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews1((yyvsp[-6].ival), (yyvsp[-2].np), (yyvsp[-5].lp)); }
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 660 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-5].ival), NULL, NULL, NULL, (yyvsp[0].lp)); }
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 661 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-6].ival), NULL, NULL, (yyvsp[-2].np),   (yyvsp[0].lp)); }
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 662 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-6].ival), NULL, (yyvsp[-3].np),   NULL, (yyvsp[0].lp)); }
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 663 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-7].ival), NULL, (yyvsp[-4].np),   (yyvsp[-2].np),   (yyvsp[0].lp)); }
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 664 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-6].ival), (yyvsp[-4].np),   NULL, NULL, (yyvsp[0].lp)); }
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 665 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-7].ival), (yyvsp[-5].np),   NULL, (yyvsp[-2].np),   (yyvsp[0].lp)); }
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 666 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-7].ival), (yyvsp[-5].np),   (yyvsp[-3].np),   NULL, (yyvsp[0].lp)); }
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 667 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews3((yyvsp[-8].ival), (yyvsp[-6].np),   (yyvsp[-4].np),   (yyvsp[-2].np),   (yyvsp[0].lp)); }
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 671 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_sp((yyvsp[-2].ival), (yyvsp[-1].sp)); }
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 672 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[-1].ival)); }
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 673 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[-1].ival)); }
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 678 "yacc/parser.y" /* yacc.c:1646  */
    { 
        /* 'program' may be called multiple times (when we do includes) */
        (yyval.lp) = parsed_code=app(parsed_code, (yyvsp[0].lp));
    }
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 682 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-1].lp), (yyvsp[0].lp)); }
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 702 "yacc/parser.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].sp)->forward == 1) {
            (yyvsp[-1].sp)->forward = 2; 
            /* check for cyclic references in contained members, if requested */
            if (w_cyclic) check_cyclic_decl_contained((yyvsp[-1].sp), (yyvsp[-1].sp)->forwardref);
        }
        /* if it has align spec, then it is considered parsable */
        if ((yyvsp[-1].sp)->align != NULL) (yyvsp[-1].sp)->parsable = 1;

        s_remcontext();         /* exit param type scope */
        s_remcontext();         /* exit class scope (will not be deleted) */
        s_set_cur_class(NULL);  /* exiting class decl */
        (yyval.lp) = lnews_sp(CLASS, (yyvsp[-1].sp), (yyvsp[0].lp)); 
    }
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 717 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-1].sp)->forward = 1;        /* mark as a forward declaration */
        (yyvsp[-1].sp)->parsable = 1;       /* all forwards are parsable */
        (yyvsp[-1].sp)->accessed--;         /* don't count forward decl as access */
        /* forward declarations shouldn't use 'extends' */
        if ((yyvsp[-1].sp)->ptype != NULL) {
            yyerror("Forward declaration of a class cannot use 'extends'");
            fatal("Translation aborted");
        }
        /* they should also not use IDs */
        if ((yyvsp[-1].sp)->id != NULL) {
            yyerror("Forward declaration of a class cannot use an ID declaration");
            fatal("Translation aborted");
        }
        /* they cannot use the abstract keyword (although it wouldn't do harm) */
        if ((yyvsp[-1].sp)->abstract == 1) {
            yyerror("Forward declaration of a class should not use 'abstract'");
            (yyvsp[-1].sp)->abstract = 0;
        }
        /* finally, they cannot use align() */
        if ((yyvsp[-1].sp)->align != NULL) {
            yyerror("Forward declaration of a class should not use 'align'");
            (yyvsp[-1].sp)->align = NULL;
        }
        s_remcontext();         /* exit param type scope */
        s_remcontext();         /* exit class scope (will not be deleted) */
        s_set_cur_class(NULL);  /* exiting class decl */
        (yyval.lp) = lnews_sp(CLASS, (yyvsp[-1].sp), NULL); 
    }
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 750 "yacc/parser.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].sp)->abstract && (yyvsp[0].sp)->id==NULL) {
            yyerror("Abstract class '%s' requires an ID", (yyvsp[0].sp)->name);
            (yyvsp[0].sp)->abstract=0;
        }
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 758 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyvsp[-2].sp)->id = (yyvsp[0].sp);
        s_transfer((yyvsp[0].sp), (yyvsp[-2].sp)->cxt);
        if (!(yyvsp[-2].sp)->abstract) check_id((yyvsp[-2].sp));
        (yyval.sp) = (yyvsp[-2].sp);
    }
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 765 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyvsp[-2].sp)->id = (yyvsp[0].sp);
        s_transfer((yyvsp[0].sp), (yyvsp[-2].sp)->cxt);
        if (!(yyvsp[-2].sp)->abstract) check_id((yyvsp[-2].sp));
        (yyval.sp) = (yyvsp[-2].sp);
    }
#line 3177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 776 "yacc/parser.y" /* yacc.c:1646  */
    { 
        /* forward declarations *cannot* be used as base classes */
        if ((yyvsp[0].sp)->forward == 1) {
            yyerror("Forward-declared class '%s' cannot be used as a base class", (yyvsp[0].sp)->name);
            (yyvsp[0].sp)->accessed--; /* don't count this as an access */
        }
        else {
            /* check for cyclic refs, if requested */
            if (w_cyclic) check_cyclic_decl_derived((yyvsp[-2].sp), (yyvsp[0].sp), (yyvsp[-2].sp)->forwardref);
            /* derived class, mark base type */
            (yyvsp[-2].sp)->ptype = (yyvsp[0].sp);
            /* mark derivation on base class as well */
            (yyvsp[0].sp)->derived = (symbol_t **)buildarray((void **)(yyvsp[0].sp)->derived, (yyvsp[-2].sp));
            /* if base is parsable, so is derived */
            (yyvsp[-2].sp)->parsable = (yyvsp[0].sp)->parsable;
            /* if no alignment info, copy from base */
            if ((yyvsp[-2].sp)->align == NULL) (yyvsp[-2].sp)->align = (yyvsp[0].sp)->align;
            /* copy symbol table to derived class (derived table is *empty* at this point) */
            s_copy_st((yyvsp[0].sp)->cxt, (yyvsp[-2].sp)->cxt);
            /* check that parameter types match exactly */
            check_formal_params((yyvsp[-2].sp), (yyvsp[-2].sp)->param, (yyvsp[0].sp)->param);
        }
        (yyval.sp) = (yyvsp[-2].sp);
    }
#line 3206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 801 "yacc/parser.y" /* yacc.c:1646  */
    {
        yyerror("Incorrect base class '%s'", (yyvsp[0].sp)->name);
        (yyval.sp) = (yyvsp[-2].sp);
    }
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 809 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* if we had a forward declaration, it should also not have params */
        if ((yyvsp[0].sp)->forward == 1 && (yyvsp[0].sp)->param != NULL) {
            yyerror("Class '%s' definition/declaration has no parameters but previous declaration did", (yyvsp[0].sp)->name);
            (yyvsp[0].sp)->param = NULL;
        }
        (yyval.sp)=(yyvsp[0].sp);
    }
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 818 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* if we had a forward declaration, params must match */
        if ((yyvsp[-3].sp)->forward == 1) check_forward_params((yyvsp[-3].sp), (yyvsp[-1].lp), (yyvsp[-3].sp)->param);
        (yyvsp[-3].sp)->param = (yyvsp[-1].lp); /* we always trust the last declaration or the definition */
        (yyval.sp) = (yyvsp[-3].sp); 
    }
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 828 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[0].sp)->align = (yyvsp[-1].np);
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 836 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* set current class; used for tracking recursive decls */
        s_set_cur_class((yyvsp[0].sp));
        /* new context for class members */
        (yyvsp[0].sp)->cxt = s_newcontext(CLASS);
        /* yet another context for parameter list, if any */
        s_newcontext(0);
        (yyvsp[0].sp)->ident = CLASS_TYPE;
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 847 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* set current class; used for tracking recursive decls */
        s_set_cur_class((yyvsp[0].sp));
        /* new context for class members */
        (yyvsp[0].sp)->cxt = s_newcontext(CLASS);
        /* yet another context for parameter list, if any */
        s_newcontext(0);
        (yyvsp[0].sp)->ident = CLASS_TYPE;
        (yyvsp[0].sp)->abstract = 1;
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 859 "yacc/parser.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].sp)->forward != 1) yyerror("Duplicate definition of class '%s'", (yyvsp[0].sp)->name);
        /* set current class; used for tracking recursive decls */
        s_set_cur_class((yyvsp[0].sp));
        /* new context for class members */
        (yyvsp[0].sp)->cxt = s_newcontext(CLASS);
        /* yet another context for parameter list, if any */
        s_newcontext(0);
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 870 "yacc/parser.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].sp)->forward != 1) yyerror("Duplicate definition of class '%s'", (yyvsp[0].sp)->name);
        /* set current class; used for tracking recursive decls */
        s_set_cur_class((yyvsp[0].sp));
        /* new context for class members */
        (yyvsp[0].sp)->cxt = s_newcontext(CLASS);
        /* yet another context for parameter list, if any */
        s_newcontext(0);
        (yyvsp[0].sp)->abstract = 1;
        (yyval.sp) = (yyvsp[0].sp);
    }
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 885 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-2].sp)), (yyvsp[-6].sp), M_CONST, check_parse((yyvsp[-6].sp), M_CONST, (yyvsp[-4].np)), (yyvsp[0].np), NULL, (yyvsp[-7].np), 0, NULL, 0, 0);
        (yyval.sp)->align = (yyvsp[-7].np);
    }
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 890 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-2].sp)), (yyvsp[-6].sp), check_modtype(((yyvsp[-7].ival)|M_CONST), (yyvsp[-6].sp)), check_parse((yyvsp[-6].sp), ((yyvsp[-7].ival)|M_CONST), (yyvsp[-4].np)), (yyvsp[0].np), NULL, (yyvsp[-8].np), 0, NULL, 0, 0);	
        (yyval.sp)->align = (yyvsp[-8].np);
    }
#line 3328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 895 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-6].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified for ID variable '%s'", (yyvsp[-2].sp)->name);
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-2].sp)), s_lookup("int"), check_modtype(((yyvsp[-6].ival)|M_CONST), s_lookup("int")), check_parse(s_lookup("int"), ((yyvsp[-6].ival)|M_CONST), (yyvsp[-4].np)), (yyvsp[0].np), NULL, (yyvsp[-7].np), 0, NULL, 0, 0);	
        (yyval.sp)->align = (yyvsp[-7].np);
    }
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 901 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-2].sp)), (yyvsp[-6].sp), M_CONST, check_parse((yyvsp[-6].sp), M_CONST, leafs(MAP_TYPE, (yyvsp[-4].sp))), (yyvsp[0].np), NULL, (yyvsp[-7].np), 0, NULL, 0, 0);
        (yyval.sp)->align = (yyvsp[-7].np);
    }
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 906 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-2].sp)), (yyvsp[-6].sp), check_modtype(((yyvsp[-7].ival)|M_CONST), (yyvsp[-6].sp)), check_parse((yyvsp[-6].sp), ((yyvsp[-7].ival)|M_CONST), leafs(MAP_TYPE, (yyvsp[-4].sp))), (yyvsp[0].np), NULL, (yyvsp[-8].np), 0, NULL, 0, 0);	
        (yyval.sp)->align = (yyvsp[-8].np);
    }
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 911 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-6].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified for ID variable '%s'", (yyvsp[-2].sp)->name);
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-2].sp)), s_lookup("int"), check_modtype(((yyvsp[-6].ival)|M_CONST), s_lookup("int")), check_parse(s_lookup("int"), ((yyvsp[-6].ival)|M_CONST), leafs(MAP_TYPE, (yyvsp[-4].sp))), (yyvsp[0].np), NULL, (yyvsp[-7].np), 0, NULL, 0, 0);	
        (yyval.sp)->align = (yyvsp[-7].np);
    }
#line 3366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 921 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-4].sp)), (yyvsp[-8].sp), M_NONE, check_parse((yyvsp[-8].sp), M_CONST, (yyvsp[-6].np)), idrange((yyvsp[-2].np), (yyvsp[0].np)), NULL, (yyvsp[-9].np), 0, NULL, 0, 1);
        (yyval.sp)->align = (yyvsp[-9].np);
    }
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 926 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-4].sp)), (yyvsp[-8].sp), check_modtype((yyvsp[-9].ival), (yyvsp[-8].sp)), check_parse((yyvsp[-8].sp), ((yyvsp[-9].ival)|M_CONST), (yyvsp[-6].np)), idrange((yyvsp[-2].np), (yyvsp[0].np)), NULL, (yyvsp[-10].np), 0, NULL, 0, 1);	
        (yyval.sp)->align = (yyvsp[-10].np);
    }
#line 3384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 931 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-8].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified for ID variable '%s'", (yyvsp[-4].sp)->name);
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-4].sp)), s_lookup("int"), check_modtype((yyvsp[-8].ival), s_lookup("int")), check_parse(s_lookup("int"), ((yyvsp[-8].ival)|M_CONST), (yyvsp[-6].np)), idrange((yyvsp[-2].np), (yyvsp[0].np)), NULL, (yyvsp[-9].np), 0, NULL, 0, 1);	
        (yyval.sp)->align = (yyvsp[-9].np);
    }
#line 3394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 937 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-4].sp)), (yyvsp[-8].sp), M_CONST, check_parse((yyvsp[-8].sp), M_NONE, leafs(MAP_TYPE, (yyvsp[-6].sp))), idrange((yyvsp[-2].np), (yyvsp[0].np)), NULL, (yyvsp[-9].np), 0, NULL, 0, 1);
        (yyval.sp)->align = (yyvsp[-9].np);
    }
#line 3403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 942 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-4].sp)), (yyvsp[-8].sp), check_modtype((yyvsp[-9].ival), (yyvsp[-8].sp)), check_parse((yyvsp[-8].sp), ((yyvsp[-9].ival)|M_CONST), leafs(MAP_TYPE, (yyvsp[-6].sp))), idrange((yyvsp[-2].np), (yyvsp[0].np)), NULL, (yyvsp[-10].np), 0, NULL, 0, 1);	
        (yyval.sp)->align = (yyvsp[-10].np);
    }
#line 3412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 947 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!((yyvsp[-8].ival) & (M_SHORT | M_LONG))) yyerror("No storage class specified for ID variable '%s'", (yyvsp[-4].sp)->name);
        (yyval.sp) = set_var(check_rescope_id((yyvsp[-4].sp)), s_lookup("int"), check_modtype((yyvsp[-8].ival), s_lookup("int")), check_parse(s_lookup("int"), ((yyvsp[-8].ival)|M_CONST), leafs(MAP_TYPE, (yyvsp[-6].sp))), idrange((yyvsp[-2].np), (yyvsp[0].np)), NULL, (yyvsp[-9].np), 0, NULL, 0, 1);	
        (yyval.sp)->align = (yyvsp[-9].np);
    }
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 957 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = (yyvsp[-1].lp); }
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 958 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = (yyvsp[-2].lp); }
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 959 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = NULL; }
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 960 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = NULL; }
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 965 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), (yyvsp[0].lp)); }
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 969 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* set type and mods; no parse, init, params, or alignment here */
        set_var((yyvsp[0].lp)->sp, (yyvsp[-1].lp)->sp, (yyvsp[-1].lp)->type, NULL, NULL, NULL, NULL, (yyvsp[0].lp)->dims, (yyvsp[0].lp)->dim, 1, (yyvsp[0].lp)->sp->range);
	
        /* formal parameters are considered assigned */
        (yyvsp[0].lp)->sp->assigned = 1;
        (yyvsp[0].lp)->sp->isparam =1 ;
        (yyval.lp) = (yyvsp[0].lp);
    }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 985 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_vp(VERBATIM, (yyvsp[0].vp)); }
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 986 "yacc/parser.y" /* yacc.c:1646  */
    { 
        if (!s_in_class()) yyerror("Verbatim get() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_GET, (yyvsp[0].vp));
    }
#line 3481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 990 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim put() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_PUT, (yyvsp[0].vp));
    }
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 994 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim get()/put() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_BOTH, (yyvsp[0].vp));
    }
#line 3499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 998 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_vp(VERBATIM_C, (yyvsp[0].vp)); }
#line 3505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 999 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim C++ get() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_GET_C, (yyvsp[0].vp));
    }
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1003 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim C++ put() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_PUT_C, (yyvsp[0].vp));
    }
#line 3523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1007 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim C++ get()/put() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_BOTH_C, (yyvsp[0].vp));
    }
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1011 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (s_in_class()) yyerror("Verbatim C++ code for .cpp file can not be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_C_CPP, (yyvsp[0].vp));
    }
#line 3541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1015 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew_vp(VERBATIM_J, (yyvsp[0].vp)); }
#line 3547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1016 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim Java get() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_GET_J, (yyvsp[0].vp));
    }
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1020 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim Java put() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_PUT_J, (yyvsp[0].vp));
    }
#line 3565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1024 "yacc/parser.y" /* yacc.c:1646  */
    {
        if (!s_in_class()) yyerror("Verbatim Java get()/put() code can only be included within a class");
        (yyval.lp) = lnew_vp(VERBATIM_BOTH_J, (yyvsp[0].vp));
    }
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1035 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0(PRAGMA); }
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1036 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews0(PRAGMA, (yyvsp[0].lp)); }
#line 3586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1041 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), (yyvsp[0].lp)); }
#line 3592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1045 "yacc/parser.y" /* yacc.c:1646  */
    { 
        if ((yyvsp[0].ival) <= 0) yyerror("Negative or zero size for 'array' pragma: %d", (yyvsp[0].ival));
        else max_array_size = (yyvsp[0].ival);
        (yyval.lp) = lnew1((yyvsp[-2].ival), leafi(INT_LITERAL, max_array_size));
    }
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1050 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1051 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1052 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1053 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1054 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1055 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1056 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); if (!(yyval.lp)->included) decl_trace = 1; }
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1057 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1058 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1059 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1060 "yacc/parser.y" /* yacc.c:1646  */
    { null_strings = 1; (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1061 "yacc/parser.y" /* yacc.c:1646  */
    { null_strings = 0; (yyval.lp) = lnew0((yyvsp[0].ival)); }
#line 3674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1062 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); if (!(yyval.lp)->included) gen_includes = 1; }
#line 3680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1063 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew0((yyvsp[0].ival)); if (!(yyval.lp)->included) gen_includes = 0; }
#line 3686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1064 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1((yyvsp[-2].ival), leafstr(STRING_LITERAL, (yyvsp[0].string))); }
#line 3692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1065 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1((yyvsp[-2].ival), leafstr(STRING_LITERAL, (yyvsp[0].string))); }
#line 3698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1066 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1((yyvsp[-2].ival), leafstr(STRING_LITERAL, (yyvsp[0].string))); }
#line 3704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1067 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1((yyvsp[-2].ival), leafstr(STRING_LITERAL, (yyvsp[0].string))); }
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1076 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew1(IMPORT, leafstr(STRING_LITERAL, (yyvsp[0].string)));
        if (!include((yyvsp[0].string), 1)) {
            /* loop would occur; don't issue include statement */
            if (w_includes) yyerror("Importing file '%s' would create an infinite loop", (yyvsp[0].string));
            (yyval.lp) = NULL;
        }
    }
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1088 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyval.lp) = lnew1((yyvsp[-1].ival), leafstr(STRING_LITERAL, gethname((yyvsp[0].string))));
        if (!include((yyvsp[0].string), 0)) {
            /* loop would occur; don't issue include statement */
            if (w_includes) yyerror("Including file '%s' would create an infinite loop", (yyvsp[0].string));
            (yyval.lp) = NULL;
        }
    }
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1103 "yacc/parser.y" /* yacc.c:1646  */
    {
        s_set_cur_class(NULL);  /* no current class or map */
        (yyval.lp) = lnews_sp(MAP, (yyvsp[-1].sp), (yyvsp[0].lp));
    }
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1110 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-3].sp)->ident = MAP_TYPE;
        (yyvsp[-3].sp)->modifiers = M_NONE;
        (yyvsp[-3].sp)->ptype = (yyvsp[-1].sp);
        if ((yyvsp[-1].sp)->ident == CLASS_TYPE) check_map_class((yyvsp[-1].sp));
        (yyval.sp) = s_set_cur_class((yyvsp[-3].sp)); /* mark current map */
    }
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1117 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-3].sp)->ident = MAP_TYPE;
        (yyvsp[-3].sp)->modifiers = (yyvsp[-1].ival);
        (yyvsp[-3].sp)->ptype = s_lookup("int");
        (yyval.sp) = s_set_cur_class((yyvsp[-3].sp));
    }
#line 3768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1123 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[-4].sp)->ident = MAP_TYPE;
        (yyvsp[-4].sp)->modifiers = (yyvsp[-2].ival);
        (yyvsp[-4].sp)->ptype = (yyvsp[-1].sp);
        (yyval.sp) = s_set_cur_class((yyvsp[-4].sp));
    }
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1132 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = (yyvsp[-1].lp); }
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1137 "yacc/parser.y" /* yacc.c:1646  */
    { 
        /* check for unique decodability and unique value */
        if (check_map(s_get_cur_class(), (yyvsp[-2].lp), (yyvsp[0].lp))) (yyval.lp) = app_map((yyvsp[-2].lp), (yyvsp[0].lp)); 
        else (yyval.lp) = (yyvsp[-2].lp);
    }
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1145 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = (yyvsp[-2].lp); (yyval.lp)->sub1 = (yyvsp[0].lp); }
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1150 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(BIT_LITERAL, leafb(BIT_LITERAL, (yyvsp[0].bit))); }
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1159 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(EXPR, (yyvsp[0].np)); }
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1160 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), lnew1(EXPR, (yyvsp[0].np))); }
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1164 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.lp) = lnew3(ESC_FTYPE, leafi(EXPR, M_NONE), leafbs(EXPR, (yyvsp[-3].sp)), (yyvsp[-1].np)); 
    }
#line 3827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1167 "yacc/parser.y" /* yacc.c:1646  */
    { 
        (yyval.lp) = lnew3(ESC_FTYPE, leafi(EXPR, check_modtype((yyvsp[-4].ival), (yyvsp[-3].sp))), leafbs(EXPR, (yyvsp[-3].sp)), (yyvsp[-1].np));       
    }
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1186 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = (yyvsp[0].lp); }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1187 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), (yyvsp[0].lp)); }
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1191 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = check_map_simple_value(s_get_cur_class(), lnew1(EXPR, (yyvsp[0].np))); }
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1192 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = check_map_class_value(s_get_cur_class(), lnews0((yyvsp[-2].ival), (yyvsp[-1].lp))); }
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1193 "yacc/parser.y" /* yacc.c:1646  */
    {
        check_map_esc_simple_value(s_get_cur_class(), (yyvsp[0].lp));
        if (s_get_cur_class()->escape == 1) {
            yyerror("Escape code is allowed only once in a map");
            exit(1);
        }
        s_get_cur_class()->escape = 1;
        (yyval.lp) = (yyvsp[0].lp);
    }
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1202 "yacc/parser.y" /* yacc.c:1646  */
    { 
        check_map_esc_class_value(s_get_cur_class(), (yyvsp[-1].lp)); 
        if (s_get_cur_class()->escape == 1) {
            yyerror("Escape code is allowed only once in a map");
            exit(1);
        }
        s_get_cur_class()->escape = 1;
        (yyval.lp) = (yyvsp[-1].lp);
    }
#line 3887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1211 "yacc/parser.y" /* yacc.c:1646  */
    {
        /* must expand string to a list_t (*not* a node_t as with regular arrays...) */
        (yyval.lp) = NULL;
    }
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1224 "yacc/parser.y" /* yacc.c:1646  */
    {
        s_set_cur_class(NULL);  
        (yyval.lp) = lnews_sp(BAC, (yyvsp[-1].sp), (yyvsp[0].lp));
    }
#line 3905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1232 "yacc/parser.y" /* yacc.c:1646  */
    {
        (yyvsp[0].sp)->ident = BAC_TYPE;
        (yyvsp[0].sp)->modifiers = M_NONE;
        (yyval.sp) = s_set_cur_class((yyvsp[0].sp)); 
    }
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1240 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = (yyvsp[-1].lp); }
#line 3921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1245 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), (yyvsp[0].lp)); }
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1249 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp)=(yyvsp[-2].lp); (yyval.lp)->sub1=(yyvsp[0].lp); check_bac_val((yyval.lp)); }
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1253 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(INT_LITERAL, leafi(INT_LITERAL, check_bac_param((yyvsp[0].string)))); }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1257 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(EXPR, (yyvsp[0].np)); }
#line 3945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1258 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(STRING_LITERAL, leafstr(STRING_LITERAL, (yyvsp[0].string))); }
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1259 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnews0((yyvsp[-2].ival), (yyvsp[-1].lp)); }
#line 3957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1263 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(EXPR, (yyvsp[0].np)); }
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1264 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew1(STRING_LITERAL, leafstr(STRING_LITERAL, (yyvsp[0].string))); }
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1265 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), lnew1(EXPR, (yyvsp[0].np))); }
#line 3975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1266 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = app((yyvsp[-2].lp), lnew1(STRING_LITERAL, leafstr(STRING_LITERAL, (yyvsp[0].string)))); }
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1270 "yacc/parser.y" /* yacc.c:1646  */
    { (yyval.lp) = lnew2(BAC_TYPE, leafs(BAC_TYPE, (yyvsp[-4].sp)), leafi(INT_LITERAL, (yyvsp[-2].ival))); }
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3991 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1273 "yacc/parser.y" /* yacc.c:1906  */


