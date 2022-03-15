#include "main.h"

/**
 * main - entry point
 * print_alphabet - print alphabet a-z in lower case
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
