#include "main.h"

/**
 * _abs - print the absolute value of any number inputed
 * @i: the number to print its abolute value
 * Return: return the absolute value
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	else
	{
		return (i);
	}
}
