#include <stdlib.h>
#include "holberton.h"

/**
* **alloc_grid - this function returns a pointer to a 2D array
*
* @width: the number of row in the array
* @height: the number of column in the array
*
* Return: return a pointer to a 2D array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;
	
	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{

		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
