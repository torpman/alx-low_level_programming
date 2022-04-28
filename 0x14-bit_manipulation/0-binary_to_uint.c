#include "main.h"

/**
* binary_to_uint - This function converts a binary to an unsigned int
*
* @b: The binary number to be comverted
*
* Return: return the unsinged integer on success
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int;
	int len, base_two;

	if (!b)
		return (0);

	u_int = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			u_int += base_two;
		}
	}

	return (u_int);
}
