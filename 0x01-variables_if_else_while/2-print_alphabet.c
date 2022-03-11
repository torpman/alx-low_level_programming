#include <stdio.h>
#include <ctype.h>

/**
  * main - the code entry point
  *
  * Description: the code snippet print alphabets in lower case
  *
  * Return: return 0 (Success)
  */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c)
		c++;
	}
	putchar('\n');
	return (0);

}
