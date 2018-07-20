{
  'includes': ['config.gypi']
    
  
  , 'targets': [
    {
        'target_name': 'flavor'
      , 'type': 'executable'
      ,  'conditions': [
       		 ['OS == "win"', {
      
                  'dependencies': [
                    ]
              }
              , 
              {
              }
              ]
      	]
      , 'dependencies': [
      		]
      , 'defines': [
        'YY_NO_UNISTD_H'
      ]
      , 'include_dirs': [
        './include'
      ]
      , 'sources': [
      
          'carray.h'
        , 'cbac.h'
        , 'cclass.h'
        , 'cdef.h'
        , 'cexpr.h'
        , 'cgetput.h'
        , 'check.h'
        , 'cid.h'
        , 'cmap.h'
        , 'compile.h'
        , 'cout.h'
        , 'cpragma.h'
        , 'ctrace.h'
        , 'cvar.h'
        , 'cverbatim.h'
        , 'cxml.h'
        , 'error.h'
        , 'eval.h'
        , 'globals.h'
        , 'ptree.h'
        , 'symbol.h'
        , 'util.h'
        , 'y.tab.h'
        , 'include/flavor.h'
        , 'include/flavori.h'
        , 'include/port.h'
        , 'carray.c'
        , 'cbac.c'
        , 'cclass.c'
        , 'cexpr.c'
        , 'cgetput.c'
        , 'check.c'
        , 'cid.c'
        , 'cmap.c'
        , 'compile.c'
        , 'cout.c'
        , 'cpragma.c'
        , 'ctrace.c'
        , 'cvar.c'
        , 'cverbatim.c'
        , 'cxml.c'
        , 'error.c'
        , 'eval.c'
        , 'lex.yy.c'
        , 'main.c'
        , 'ptree.c'
        , 'symbol.c'
        , 'util.c'
        , 'y.tab.c'
        
      ]              
    }
  ]
}

