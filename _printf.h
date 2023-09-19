#ifndef PRINT_F_H
#define PRINT_F_H

#include "_printf_functions.h"

int _printf(const char *format, ...);

typedef struct format
{
        char *id;
        int (*f)();
} conversion_map;



#endif
