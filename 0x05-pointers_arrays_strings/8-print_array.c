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
		printf("%ld", a[i]);
		if (i < 4)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
