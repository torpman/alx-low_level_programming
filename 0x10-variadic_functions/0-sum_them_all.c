#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - This function sum all the argument passed into it
*
* @n: The number of argument passed
*
* Return: Return the total summation of the passed integer numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_pnt;

	if (n == 0)
		return (0);
	va_start(arg_pnt, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_pnt, int);
	}

	va_end(arg_pnt);

	return (sum);
}
