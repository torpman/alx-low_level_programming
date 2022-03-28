#include "main.h"

/**
* *_memcpy - this function copy a certain bytes from a memory area
* to another memory area
*
* @dest: the memory area to copy to
* @src: the memory area to copy from
* @n: the number of bytes to copy
*
* Return: return a pointer to the dest memory on successful execution
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
