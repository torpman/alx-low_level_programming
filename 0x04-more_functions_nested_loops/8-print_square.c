#include "main.h"
/**
 * print_square - this function prints # in square form
 * base on the size inputted
 *
 * @size: the size inputted
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
