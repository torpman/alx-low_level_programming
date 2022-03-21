#include "main.h"

/**
 * print_rev - this functio print strings in reverse
 *
 * @s: string to print its reverse form
 */

void print_rev(char *s)
{
	int ln = 0;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		ln++;
		i++;
	}

	j--;

	for (j = ln; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
