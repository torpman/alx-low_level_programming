#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * Return: return 0 on successful execution
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((num % 5) == 0 && (num % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		printf("%d ", num);
	}
	_putchar('\n');
}
