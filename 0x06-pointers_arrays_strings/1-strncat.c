#include "main.h"

/**
* *_strncat - this function concatenate two strings
* it is different from strcat function because it uses the most
* byte from src
*
* @dest: the concatenation destination
* @src: the second string to concatenate
* @n: the most byte
*
* Return: return a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
