#include "main.h"
/**
 * more_numbers - prints out 0-14 ten times
 */

void more_numbers(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = '0';
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar(c);
			if (c == '9')
			{
				c = '0';
			}
			else
			{
				c++;
			}
		}
		_putchar('\n');
	}
}
