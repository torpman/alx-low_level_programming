#include "main.h"
/**
 * _isdigit - checked maybe a character inputed is a digit
 *
 * @c: character to check
 *
 * Return: return 1 if it is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
