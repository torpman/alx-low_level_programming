#include <stdio.h>
#include <stdlib.h>
/**
* main - program to multiply numbers pased from the command line
* @argc: the argument count
* @argv: the string of argument
* Return: return the result on success and 1 om erro
*/

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
		for (i = 1; i <= argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	return (mul);
}
