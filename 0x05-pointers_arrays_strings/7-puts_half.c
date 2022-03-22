#include "main.h"
/**
* puts_half - this fucntion prints half of a string
*
* @str: the string to print
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = i / 2;
	if (i % 2 != 0)
		j++;
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
