#include <stdio.h>

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
		putchar(i + '0');

	putchar('\n');
	return (0);

}
