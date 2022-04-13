#include "function_pointers.h"

/**
* print_name - This function prints a name
*
* @name: The name to print
* @f: The pointer to the functio that prints the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
