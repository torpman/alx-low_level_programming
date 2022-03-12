#include <stdio.h>
/**
 * main - entry point
 * Description: Print all possible combination for a siongle digit numbers
 * Return: 0 after successful execution
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
