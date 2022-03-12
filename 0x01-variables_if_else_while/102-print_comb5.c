#include <stdio.h>

/**
 * main - entry point of the execution
 *
 * Description: the code print some combo of numbers
 *
 * Return: return 0 on successful execution
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles first num*/
		b = i % 10; /* singles first num*/

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles second number*/
			d = j % 10; /* singles second number*/

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
