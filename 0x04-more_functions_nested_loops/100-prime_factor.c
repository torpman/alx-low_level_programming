#include <stdio.h>
#include <math.h>

/**
 * main - the code print the largest prime factor
 * of a number
 * Return: return 0 on success
 */

int main(void)
{
	int long num = 612852475143;
	int p_factors[25];
	int i, c, j;
	int largest = 0;

	/* print the number of 2s that divide num*/
	while (num % 2 == 0)
	{
		p_factors[] = 2;
		num = num / 2;
		c++;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		/*while i divides num, print i and divide num*/
		while (num % i == 0)
		{
			p_factors[] = i;
			num = num / i;
			c++;
		}
	}
	if (c > 0)
	{
		for (j = 0; j < c; j++)
		{
			if (p_factors[j] > largest)
			{
				largest = p_factors[j];
			}
		}
	}
	printf("%d\n", largest);
}
