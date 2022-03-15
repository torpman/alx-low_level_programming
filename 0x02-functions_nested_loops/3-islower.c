#include "main.h"

/**
 * _islower - returns if an alphabet inputted is in lowercase
 * @c: alphabet to crosscheck
 * Return: return 1 if it's lower and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a')
	{
		return (1);
	}
	else if (c <= 'Z')
	{
		return (0);
	}
}
