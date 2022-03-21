#include "main.h"

/**
 * swap_int - this function swap the value of two integers
 *
 * @a: the first value to swap
 * @b: the second value to swap
 */

void swap_int(int *a, int *b)
{
	int tmp =  *a;
	*a = *b;
	*b = tmp;
}
