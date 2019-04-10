#include <xlocale.h>
//extern long double strtold (const char*, char**);
//extern long double strtold(char const*, char**);
extern long double strtold (const char *__restrict, char **__restrict);
extern long double strtold_l (const char *__restrict, char **__restrict,
				                  locale_t);

#include_next <stdlib.h>


