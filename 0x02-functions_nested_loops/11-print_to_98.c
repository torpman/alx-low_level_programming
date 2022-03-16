#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - the code snippet print number to 98
 * no matter the starting point
 * @n: the starting point
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
			if (n == 98)
			{
				break;
			}
		}
	else
	{
		while (n < 98)
		{
			print("%d, ", n);
			n++;
			if (n == 98)
			{
				break;
			}
		}
	}
	_putchar('\n');
}
