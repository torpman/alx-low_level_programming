#include "main.h"

/**
* _pow_recursion - this recursive function calculate the power of a number*
* @x: the base number to calculate its power
* @y: the power
*
* Return: return the result of the power of @x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
