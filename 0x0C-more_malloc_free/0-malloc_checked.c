#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - This function allocates memory
*
* @b: The memory size
*
* Return: return a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);
	return (mem_alloc);
}
