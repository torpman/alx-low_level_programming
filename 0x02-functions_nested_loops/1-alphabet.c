#include "main.h"

/**
 * print_alphabet - the function print out alphabets
 * in lower case
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
