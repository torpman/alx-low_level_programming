#include "main.h"
/**
 * print_line - this function print _ the number of time inputted
 *
 * @n: the number of time it will print _
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
