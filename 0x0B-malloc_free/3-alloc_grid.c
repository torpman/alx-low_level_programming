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

	arr = malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
