#include "main.h"

/**
* _strcpy - this funtion copies strings including the terminating null value
*
* @dest: the buffer it will copy to
* @src: the location it will copy from
*
* Return: the funtion return the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
