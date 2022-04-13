#include "function_pointers.h"

/**
* array_iterator - This function iterate through an array and print
* its elements
*
* @array: The array to iterate through
* @size: The size of the array
* @action: The pointer that handles the printing out of the element
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

