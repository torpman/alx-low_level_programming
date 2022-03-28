#include "main.h"

/**
* *_strchr - this function locates a chracter in a string
*
* @s: the string to search true
* @c: the character to search through
*
* Return: returns a pointer to the first occurence
*/

char *_strchr(char *s, char c)
{

	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return ('\0');
}
