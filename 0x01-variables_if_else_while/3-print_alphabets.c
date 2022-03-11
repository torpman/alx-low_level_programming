#include <stdio.h>
#include <ctype.h>

/**
  * main - the emtry point
  *
  * Description: the code print out alphabets
  * both in upper and lower case
  *
  * Return: return 0 on successful execution
  */

int main(void)
{

	int al;

	for (al = 'A'; al <= 'z'; al++)
	{
		putchar(tolower(al));
		putchar(al);
	}
	putchar("\n");
	return (0);

}
