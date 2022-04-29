#include "main.h"
/**
* clear_bit - This function set the value of a bit to 0
*
* @n: The bit
* @index: The index of the bit to clear
*
* Return: return 1 if it worked or -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
