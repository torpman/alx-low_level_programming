#include "main.h"

/**
* set_bit - This fucntion set the value of bit
* at the index passed to 1
*
* @n: pointer to an unsignesd long int
* @index: index of the bit to change
*
* Return: return 1 on success and -1 otherwise
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
