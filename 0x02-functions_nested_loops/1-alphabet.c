#include "main.h"

/**
 * main - entry point
 * Descritption: function print alphabet a-z
 * Return: return 0 on succes
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
	}
	_putchar('\n');
}
