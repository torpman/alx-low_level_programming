#include "main.h"

/**
* _strlen_recursion - this recursive function print the string length
*
* @s: the string
*
* Return: return the string length
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
