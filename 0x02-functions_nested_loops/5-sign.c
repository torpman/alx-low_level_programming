#include "main.h"

/**
 * print_sign - the function print he sign of a number
 * @n: number to check
 * Return: return 1 and print + if positive
 * returns 0 and print 0 if its zero
 * return -1 an dprint - i negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
