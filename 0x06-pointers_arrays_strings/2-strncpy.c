#include "main.h"

/**
* *_strncpy - this function copies string
*
* @dest: where to copy to
* @src: string to copy
* @n: the max byte
*
* Return: return a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
