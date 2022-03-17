#include "main.h"
/**
 * _isupper: detect maybe an alpohabet inputted
 * is in upper case or otherwise
 *
 * @c: the alphaet inputed
 *
 * return: return 1 if it is uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
