#include <stdio.h>
#include "main.h"
/**
* main - the staring point of hte program
* @argc: the argument count
* @argv: the array containing the passed argument
* Return: return the argument count
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
