#include "main.h"
/**
 * _isupper - detect maybe an alphabet inputted is in
 *  upper case or otherwise
 *
 * @c: the alphaet inputed
 *
 * Return: return 1 if it is uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
