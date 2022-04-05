#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
* strdup - This function duplicate a string
*
* @str: The string to copy
* Return: the function returns a pointer to the duplicate string on succes
*/

char *_strdup(char *str)
{
	char *n_str;
	int i;
	int s_ln = 0;

	if (str == NULL)
		return (NULL);

	while (str[s_ln])
		s_ln++;
	s_ln += 1;

	n_str = malloc(sizeof(char) * s_ln);

	if (n_str == NULL)
		return (NULL);

	for (i = 0; i < s_ln; i++)
	{
		n_str[i] = str[i];
	}
	n_str[i] = '\0';
	return (n_str);
}
