#include "main.h"
/**
 * more_numbers - prints out 0-14 ten times
 */

void more_numbers(void)
{

	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');

}
