#include "main.h"

/**
* _puts_recursion - this is a recursive fucntion
* that prints a string followed by a new line
*
* @s: the string to print out
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
