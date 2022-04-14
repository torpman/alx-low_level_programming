#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - This function prints numbers followed by new line
*
* @separator: The symbol that will seperate the numbers
* @n: The number of integer passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_pnt;

	va_start(arg_pnt, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d ", va_arg(arg_pnt, int));
	}

	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(arg_pnt, int), separator);

	va_end(arg_pnt);
	printf("\n");
}
