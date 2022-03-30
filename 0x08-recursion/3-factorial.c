#include "main.h"

/**
* factorial - this recursive function find the factorial of a number
*
* @n: the number to find its factorial
*
* Return: return the factorial of @n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
