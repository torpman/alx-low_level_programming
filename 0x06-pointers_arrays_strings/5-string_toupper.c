#include <stdio.h>
#include "main.h"
/**
* *string_toupper - this function convert lowercase letters in a string
* to uppercase
*
* @str: the string to be transformed
* Return: return transformed string
*/

char *string_toupper(char *str)
{
	int i, c;

	c = 'A' - 'a';
	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += c;
	}
	return (str);
}
