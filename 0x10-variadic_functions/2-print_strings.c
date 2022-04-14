#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - This function prints strings followed by a new line
*
* @separator: The string to print in-between the strings
* @n: The number of string argument passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_pnt;
	char *str;

	va_start(arg_pnt, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_pnt, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
