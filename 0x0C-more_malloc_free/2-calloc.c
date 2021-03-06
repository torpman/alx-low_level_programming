#include <stdlib.h>
#include "main.h"

/**
* *_calloc - This function allocates memory for an array
*
* @nmemb: The size of the array elements
* @size: The byte of each element
*
* Return: Return a pointer to the memory location
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
