
/* Gravinyon header, contaning declarations for global variables containing
 * embedded content, such as shader source code.
 * See the compilation script "_comp.py" or the EMBEDDED macro for more. */

#ifndef GRAVINYON_HEADER_EMBEDDED_
#define GRAVINYON_HEADER_EMBEDDED_

/* If this macro is used as would be the extern keyword in a variable
 * declaration, and if filename_ is a string literal, then the compilation
 * script "_comp.py" will parse the variable declaration as a special
 * declaration that requiers the variable to be set to the content of the file
 * found at filename_ in the generated source file "embedded.c". The variable
 * declaration is expected to be in the global scope and to have a type
 * compatible with const char*. */
#define EMBEDDED(filename_) extern

EMBEDDED("shaders/enemies.vert") const char* g_enemies_vert;
EMBEDDED("shaders/enemies.geom") const char* g_enemies_geom;
EMBEDDED("shaders/enemies.frag") const char* g_enemies_frag;

#endif /* GRAVINYON_HEADER_EMBEDDED_ */