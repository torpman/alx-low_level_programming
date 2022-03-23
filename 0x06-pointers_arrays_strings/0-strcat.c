#include "main.h"

/**
* *_strcat - this fuction concatenate two strings dest and src
* @dest: the destiation of the concatenated strings
* @src: the string to be concatenated
* Return: return a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
