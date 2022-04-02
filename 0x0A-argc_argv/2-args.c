#include <stdio.h>
#include "main.h"
/**
* main - the program print out all the argument passed
* @argc: the argument count
* @argv: the string of arguments
* Return: return 0 on success
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
