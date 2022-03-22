#include <stdio.h>

/**
* print_array - this function prints a certain element of anm array
* of integers
* @a: the array
* @n: the number of element in the array
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{

		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
