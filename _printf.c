#include "_printf.h"
#include "main.h"
#include <stdio.h>
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	conversion_map map[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%i", printf_int}, {"%d", printf_dec}
	};

	va_list args;
	int i = 0, j = 0, count = 0, max = 5, broken = 0;

	va_start(args, format);

	if (format == NULL || format[0] == '\0'
			|| (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		j = 0;
		broken = 0;
		while (j < max)
		{
			if (format[i] == map[j].id[0] && format[i + 1] == map[j].id[1])
			{

				count += map[j].f(args);
				i += 2;
				broken = 1;
				break;
			}
			j++;
		}
		if (!broken)
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
