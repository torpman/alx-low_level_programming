#include "main.h"

/**
* *_memset - this function fills memory with a constant byte
*
* @s: the memory to be filled
* @b: the constant byte
* @n: the number of bytes to be filled in the memory area
*
* Return: return pointer to the memory set
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
