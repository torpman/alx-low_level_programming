#include "function_pointers.h"

/**
* int_index - This function searches for an integer
*
* @array: The array to search
* @size: The array size
* @cmp: a pointer to the function that compare values
*
* Return: Return the index of the first element which @cmp return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
