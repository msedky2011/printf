#ifndef PRINT_F_H
#define PRINT_F_H

#include "_printf_functions.h"
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} conversion_map;



#endif
