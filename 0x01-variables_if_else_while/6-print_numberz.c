#include <stdio.h>
#include <stdlib.h>

/**
  * main - erntry point
  *
  * Descrition: program print numbers with 'putchar()'
  * without using char datatypr
  *
  * Return: return o
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(itoa(i));
		i++;
	putchar('\n');
	return (0);

}
