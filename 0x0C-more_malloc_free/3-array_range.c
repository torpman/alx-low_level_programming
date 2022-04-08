#include <stdlib.h>
/**
* *array_range - This function creates an array of integers
*
* @min: the array minimum value
* @max: The array maximum value
*
* Return: return a pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *arr;
	int j;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
	{
		arr[j] = min;
		min++;
	}

	return (arr);
}
