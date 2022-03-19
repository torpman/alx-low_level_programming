#include "main.h"

/**
 * print_number - the function prints integers using _putchar
 * @n: the integer to print
 */

void print_number(int n)
{
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');

}
