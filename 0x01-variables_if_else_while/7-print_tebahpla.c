#include <stdio.h>

/**
  * main - entry point
  *
  * Description: the code snipet print a - z in reverse order
  *
  * Return: return 0 on successful execution
  */

int main(void)
{

	char re = 'z';

	while (re >= 'a')
	{
		putchar(re);
		re--;
	}
	putchar('\n');
	return (0);

}
