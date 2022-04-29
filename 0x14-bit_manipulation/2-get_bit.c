#include "main.h"

/**
* get_bit - This function get the value of the bit index passed
*
* @n: the number that the bit represent
* @index: the bit to get it's value
*
* Return: return the value of index on success
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}

