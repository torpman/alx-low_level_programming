#include "main.h"
/**
 * _strlen - this function return the lenght of a string
 *
 * @s: the string to count
 *
 * Return: return the string lenght on success
 */

int _strlen(char *s)
{
	int cnt = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt);
}
