#include "main.h"

/**
 * print_times_table - prints the times table, starting with 0
 * @n: the extent of hte time table
 * Return: return 0 if the condition is not met
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return (0);

	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < n && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / n) + '0');
				_putchar((k % n) + '0');
			}
		}
		_putchar('\n');
	}
}


