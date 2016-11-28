/*
 * Copyright (c) 1997-2004 Alexandros Eleftheriadis, Danny Hong and 
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

/* compile.c */


#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "compile.h"
#include "cdef.h"
#include "util.h"

/* code generation entry point */


/* Output our standard header (if h is set, we are dumping on a .h file)
 * and include and ifdef statements.
 *
 * Params:
 *  fp      - pointer to the file to write the header
 *  name    - name of the file
 *  h       - indicate if we are writing header for .h or .cpp file; 0: .cpp, 1: .h
 *  hname   - name of the header file
 */
static void header(FILE *fp, char *name, int h, char *hname)
{
    char tmp[MAX_LEN], *ptmp;
    
    /* dump header */
    fprintf(fp,
            "/* @mediagen\n"
		    " *\n"
            " * %s\n"
            " * \n"
            " * This file was automatically generated\n"
            " * from the source file:\n"
            " *     '%s'\n"
            " *\n"
            " * For information visit the Flavor Web site at:\n"
            " *     http://flavor.sourceforge.net\n"
            " *\n"
            " * -- Do not edit by hand --\n"
            " *\n"
            " */\n\n",
            name, filename);
    
    if (cpp()) {
        if (!h) {
            if (gen_includes) fprintf(fp, "#include \"stdafx.h\"\n#include <TBitstream.h>\n#include \"%s\"\n\n", basename(hname));
        }
        else {
            /* translate '.' to '_' */
            strcpy(tmp, basename(name));
            ptmp = tmp;
            while (*ptmp != '\0') {
                if (*ptmp == '.') *ptmp = '_';
                ptmp++;
            }
            fprintf(fp, "#ifndef %s%s_\n#define %s%s_\n\n", prefix, tmp, prefix, tmp);
        }	

		if (!h) {
			fprintf(fp, "\n__ALX_BEGIN_NAMESPACE\n");
		}
    }
    else if (java()) {
        fprintf(fp, "package %s;\n", opkg);
        if (gen_includes) {
            fprintf(fp, "import %s.*;\n", flavor_pkg);
			fprintf(fp, "import java.io.*;\n");
        }
    }
    return;
}


/* Output our standard header for .xsd file.
 *
 * Params:
 *  fp      - pointer to the file to write the header
 */
static void x_header(FILE *fp)
{
	/* dump header */
    fprintf(fp,
            "<?xml version=\"1.0\"?>\n"
		    "<xsd:schema xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"\n"
            "            targetNamespace=\"http://www.ee.columbia.edu/flavor\"\n"
            "            xmlns=\"http://www.ee.columbia.edu/flavor\"\n"
            "            elementFormDefault=\"qualified\">\n"
            "<xsd:include schemaLocation=\"fltypes.xsd\"/>\n"
            "\n");
}
			

/* Output our standard trailer (if h is set, we are dumping on a .h file).
 *
 * Params:
 *  fp      - pointer to the file to write the header
 *  name    - name of the file
 *  h       - indicate if we are writing header for .h or .cpp file
 *            0 => .cpp, 1 => .h
 */
static void trailer(FILE *fp, char *name, int h)
{
    char tmp[MAX_LEN], *ptmp;
    
    if (cpp()) {
        if (h) {
            /* translate '.' to '_' */
            strcpy(tmp, basename(name));
            ptmp = tmp;
            while (*ptmp != '\0') {
                if (*ptmp == '.') *ptmp = '_';
                ptmp++;
            }
            fprintf(fp, "\n#endif /* ! %s%s_ */\n", prefix, tmp);
        }
		else
		{
			fprintf(fp, "\n__ALX_END_NAMESPACE\n");
		}
    }
    else if (java()) {
    }
}


/* Check that it's ok to overwrite the .cpp file.
 *
 * This is needed because versions 2.1 and older did not generate a .cpp file;
 * it is then likely that users might put their own code in such a file, and
 * newer versions would silently overwrite it without any warning. The check is
 * based on the presence of a specific string at the beginning of the file. If 
 * it is there, then we assume that it is ok to overwrite.
 *
 * Params:
 *  filename    - name of the file to write the header
 *
 * Returns:
 *  0           - not ok to overwrite
 *  1           - overwrite ok
 */
static int cpp_overwrite(char *filename)
{
	FILE *fp;
	static char magic[] = "/* @mediagen";
	char str[256];
	int cnt, len;
	
	if (filename == NULL) return 0;

	fp = fopen(filename, "r");
	if (fp == NULL) return 1;

	/* read data */
	len = strlen(magic);
	cnt = fread(str, sizeof(char), len, fp);

	/* done with the file */
	fclose(fp);

	if (cnt > 0 && (cnt < len || memcmp(magic, str, len) != 0)) return 0;
	else return 1;
}


/* C++ code generation entry point
 *
 * Params:
 *  lp  - list of the parsed code
 */
static void c_compile(list_t *lp)
{
    list_t *p;
    FILE *tmp;

    /* setup output file names */
    if (parse_only) {
        ofp = NULL;
        ofp2 = NULL;
        strcpy(ofile, "<none>");
        strcpy(ofile2, "<none>");
    }
    else {
        /* setup .h output file name */
        if (strlen(ofile) == 0) {
            strcpy(ofile, basename(filename));
            ofile[strlen(ofile)-3] = '\0';      /* trim .fl suffix */
            strcat(ofile, ".h");
        }

        /* open the .h output file */
        if ((ofp = fopen(ofile, "w+")) == NULL) fatal("Cannot create output file '%s'", ofile);
        
        /* dump our standard header into the .h file */
        header(ofp, ofile, 1, NULL);

        /* setup the .cpp output file name */
        if (strlen(ofile2) == 0) {
            strcpy(ofile2, basename(filename));
            ofile2[strlen(ofile2)-3] = '\0';    /* trim .fl suffix */
            strcat(ofile2, ".cpp");
        }

        /* check if it's ok to overwrite the .cpp file */
        if (!cpp_overwrite(ofile2)) fatal("Will not overwrite non-flavorc file '%s'", ofile2);

        /* open the .cpp output file */
        if ((ofp2 = fopen(ofile2, "w+")) == NULL) fatal("Cannot create output file '%s'", ofile2);

        /* dump our standard header into the .cpp file*/
        header(ofp2, ofile2, 0, ofile);
    }

    /* output our default max array size value */
    c_out("// initial size of parsable arrays: %d\n\n", init_max_array_size);

    /* reset max_array_size -- may change during parsing due to pragmas */
    max_array_size = init_max_array_size;
    
    /* declare error reporting function */
    //c_out("// bitstream error reporting function\nvoid %s(TCHAR* fmt, ...);\n\n", err_func);
    
    /* declare tracing functions */
    if ((gen_get || gen_putxml) && (gen_trace || decl_trace)) {
        c_out("// tracing functions\n"
              "void %s(int pos, int size, unsigned int val, char* fmt, ...);\n"
              "void %s(int pos, int size, double val, char* fmt, ...);\n\n", trace_func, trace_func);
    }

	/* disable unreferenced local variable warning for MS Visual C++ */
	if (msvc) {
		c_out("// disable unreferenced local variable warning in MS Visual C++\n");
		c_out("#pragma warning(disable: 4101)\n");
	}

    p = lp;
    while (p != NULL) {
        /* skip included statements */
        if (p->included) {
            p = p->next;
            continue;
        }

        switch (p->type) {
        case DECL:
            /* no get/put components from global scope variables */
            if (!p->sp->included) {
                c_var_decl_ext(p->sp, p->dims, p->dim);
                tmp = ofp;
                ofp = ofp2;
                c_var_decl(p->sp, p->dims, p->dim);
                ofp = tmp;
            }
            break;
            
        case CLASS:
            if (!p->sp->included) class_decl(p->sp, p->sub1);
            break;
            
        case MAP:
            if (!p->sp->included) map_decl(p->sp, p->sub1);
            break;

        case BAC:
            if (!p->sp->included) bac_decl(p->sp, p->sub1);
            break;
            
        case VERBATIM:
            verbatim(p->vp);
            break;

        case VERBATIM_C:
            verbatim(p->vp);
            break;

        case VERBATIM_J:
            break;

        case VERBATIM_C_CPP:
            tmp = ofp;
            ofp = ofp2;
            verbatim(p->vp);
            ofp = tmp;
            break;

        case VERBATIM_GET:
        case VERBATIM_PUT:
        case VERBATIM_GET_C:
        case VERBATIM_GET_J:
        case VERBATIM_PUT_C:
        case VERBATIM_PUT_J:
        case VERBATIM_BOTH_C:
        case VERBATIM_BOTH_J:
            break;

        case PRAGMA:
            pragma(p->sub1);
            break;

        case INCLUDE:
            c_out("#include \"%s\"\n", p->e1->left.string);
            break;

        case IMPORT:
            c_outi("// import \"%s\"\n", p->e1->left.string);
            break;

        default:
            fatal("Internal error C%d: Unknown compilation unit type %d", __LINE__, p->type);
        }
        p = p->next;
    }

    /* dump our standard trailer */
    if (!parse_only) {
        trailer(ofp, ofile, 1);
        fclose(ofp);
        if (gen_get || gen_put) {
            trailer(ofp2, ofile2, 0);
            fclose(ofp2);    
        }
    }
}


/* code generation entry point for Java */
static void j_compile(list_t *lp)
{
    list_t *p;
    FILE *tmp;
    
    /* Generating Java files. Since each Java file can contain only one 
     * public class, we need to generate multiple .java files. All these
     * Java files are put into one single directory which corresponds to 
     * the Java package. 
     */ 

    /* setup package name */
    if (strlen(opkg) == 0) {
        strcpy(opkg, basename(filename));
        opkg[strlen(opkg)-3] = '\0';    /* trim .fl suffix */
    }

    /* reset max_array_size -- may change during parsing due to pragmas */
    max_array_size = init_max_array_size;
    
    /* now we scan through the list and generate .java files, one class per file */
    p = parsed_code;
    while (p != NULL) {
        /* skip included statements */
        if (p->included) {
            p = p->next;
            continue;
        }

        switch (p->type) {
        case DECL:
            if (first_global) {
                first_global = 0;
                
				/* get global class name */
				strcpy(ofile2, global_class);
				strcat(ofile2, ".java");

                /* open .java output file */
			    if ((ofp2 = fopen(ofile2, "w+")) == NULL) fatal("Cannot create output file '%s'", ofile2);
			    
                /* dump our standard header */
			    header(ofp2, ofile2, 1, NULL);

                fprintf(ofp2, "\npublic class %s {\n", global_class);
                c_identlevel++;
            }
            tmp = ofp;
            ofp = ofp2;
            
            /* generate code */
            c_var_decl(p->sp, p->dims, p->dim);
            ofp = tmp;

            break;
            
        case CLASS:
            /* setup output file names */
			if (parse_only) {
				ofp = NULL;
				strcpy(ofile, "<none>");
			}
			else {
				/* get class name */
				strcpy(ofile, p->sp->name);
				strcat(ofile, ".java");
			}
			
            /* open .java output file */
			if ((ofp = fopen(ofile, "w+")) == NULL) fatal("Cannot create output file '%s'", ofile);
			
			/* dump our standard header */
			header(ofp, ofile, 1, NULL);
              
            /* generate code */
            class_decl(p->sp, p->sub1);
            
            /* dump our standard trailer */
            trailer(ofp, ofile, 1);
			
            /* done */
            fclose(ofp);
            break;
            
        case MAP:
			/* setup output file names */
			if (parse_only) {
				ofp = NULL;
				strcpy(ofile, "<none>");
			}
            /* get class name */
			else {
				strcpy(ofile, p->sp->name);
				strcat(ofile, ".java");
			}

			/* open .java output file */
			if ((ofp = fopen(ofile, "w+")) == NULL) fatal("Cannot create output file '%s'", ofile);
			
			/* dump our standard header */
			header(ofp, ofile, 1, NULL);
              
            /* generate code */
            map_decl(p->sp, p->sub1);
            
			/* dump our standard trailer */
            trailer(ofp, filename, 1);

            /* done */
            fclose(ofp);
            break;
            
        case BAC:
			/* setup output file names */
			if (parse_only) {
				ofp = NULL;
				strcpy(ofile, "<none>");
			}
            /* get class name */
			else {
				strcpy(ofile, p->sp->name);
				strcat(ofile, ".java");
			}

			/* open .java output file */
			if ((ofp = fopen(ofile, "w+")) == NULL) fatal("Cannot create output file '%s'", ofile);
			
			/* dump our standard header */
			header(ofp, ofile, 1, NULL);
              
            /* generate code */
            bac_decl(p->sp, p->sub1);
            
			/* dump our standard trailer */
            trailer(ofp, filename, 1);

            /* done */
            fclose(ofp);
            break;
            
        case VERBATIM:
            /* we have no file to write to */
            verbatim(p->vp);
            break;

		case VERBATIM_C:
            break;

        case VERBATIM_J:
            verbatim(p->vp);
            break;

        case VERBATIM_C_CPP:
        case VERBATIM_GET:
        case VERBATIM_PUT:
        case VERBATIM_GET_C:
        case VERBATIM_GET_J:
        case VERBATIM_PUT_C:
        case VERBATIM_PUT_J:
        case VERBATIM_BOTH_C:
        case VERBATIM_BOTH_J:
            break;
        
		case PRAGMA:
            pragma(p->sub1);
            break;
           
        case INCLUDE:
            break;

        case IMPORT:
            c_outi("// import \"%s\"\n", p->e1->left.string);
            break;

        default:
            fatal("Internal error C%d: Unknown compilation unit type %d", __LINE__, p->type);
        }
        p = p->next;
    }

    if (!first_global) {
        fprintf(ofp2, "}\n");
        trailer(ofp2, ofile2, 1);
        fclose(ofp2);
    }
}


/* code generation entry point for XML schema */
static void x_compile(list_t *lp)
{
    list_t *p;

    /* setup output file names */
    if (parse_only) {
        ofp = NULL;
        strcpy(ofile, "<none>");
    }
    else {
        /* setup .xsd output file name */
        if (strlen(ofile) == 0) {
            strcpy(ofile, basename(filename));
            ofile[strlen(ofile)-3] = '\0';  /* trim .fl suffix */ 
            strcat(ofile, ".xsd");
        }

        /* open .xsd output file */
        if ((ofp = fopen(ofile, "w+")) == NULL) 
            fatal("Cannot create output file '%s'", ofile);
        
		/* dump our standard header */
        x_header(ofp);
    }

    p = lp;
    while (p != NULL) {
        /* skip included statements */
        if (p->included) {
            p = p->next;
            continue;
        }

        switch (p->type) {
        case DECL:
            /* no global declarations for the XML schema */
            break;
            
        case CLASS:
            if (!p->sp->included) class_decl(p->sp, p->sub1);
            break;
            
        case MAP:
            if (!p->sp->included) map_decl(p->sp, p->sub1);
            break;
            
        case BAC:
            if (!p->sp->included) bac_decl(p->sp, p->sub1);
            break;
            
        case VERBATIM:
		case VERBATIM_C:
        case VERBATIM_J:
        case VERBATIM_C_CPP:
        case VERBATIM_GET:
        case VERBATIM_PUT:
        case VERBATIM_GET_C:
        case VERBATIM_GET_J:
        case VERBATIM_PUT_C:
        case VERBATIM_PUT_J:
        case VERBATIM_BOTH_C:
        case VERBATIM_BOTH_J:
			break;

        case PRAGMA:
            pragma(p->sub1);
            break;

        case INCLUDE:
            break;

        case IMPORT:
            break;

        default:
            fatal("Internal error C%d: Unknown compilation unit type %d", __LINE__, p->type);
        }
        p = p->next;
    }
    c_out("\n<xsd:element name=\"%s\" type=\"%s\"/>", root_xsd_name, root_xsd_name);
    c_out("\n\n</xsd:schema>");
}


/* code generation entry point */
void compile(list_t *parsed_code)
{
    /* from this point on, all errors are reported at the end of the source file */
    lineno--;
    if (cpp()) 
        c_compile(parsed_code);
    else if (java()) 
        j_compile(parsed_code);
	else if (xsd()) 
        x_compile(parsed_code);
}