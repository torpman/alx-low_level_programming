#include <stdio.h>

/**
 * main - entry point
 * Description: comb4
 * Return: return 0
 */

int main(void)
{
	in i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = i / 10; /* tens*/
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);

}
