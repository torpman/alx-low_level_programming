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
	int i;


	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;

	}
	return (str);
}
