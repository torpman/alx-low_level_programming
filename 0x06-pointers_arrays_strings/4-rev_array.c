#include "main.h"

/**
* reverse_array - this function reverse integers in an array
*
*@a: array to reverse its elements
*@n: number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
