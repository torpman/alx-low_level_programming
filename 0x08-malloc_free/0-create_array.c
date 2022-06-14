#include <stdlib.h>
#include "holberton.h"

/**
* *create_array - this function create an array of chars
*
* @size: size of the array
* @c: element of he array
* Return: a pointer to an array of character
*/

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
