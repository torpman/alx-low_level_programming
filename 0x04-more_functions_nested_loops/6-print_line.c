#include "main.h"
/**
 * print_line - this function print _ the number of time inputted
 *
 * @n: the number of time it will print _
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
