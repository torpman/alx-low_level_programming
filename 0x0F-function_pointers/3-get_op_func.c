#include "3-op_functions.c"
#include <stddef.h>
/**
* get_op_func - This function get the correct operator
* @s: The operator passed as argument to the program
*
* Return: Return the integer version of the operator passed
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
