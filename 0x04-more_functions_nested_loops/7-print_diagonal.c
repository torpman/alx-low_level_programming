#include "main.h"
/**
 * print_diagonal - print / in diagonal form
 * @n: the number of time it will be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		j = i;
		while (j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
