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
	int al;

	for (al = 'A'; al <= 'z'; al++)
	{
		al = tolower(al);
		putchar(al);
	}
	putchar("\n");
	return (0);

}
