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

	char al = 'a';

	while(al <= 'z')
	{
		putchar(al);
		al++;
	}
	al = 'A'
	while (al <= 'Z')
	{
		putchar(al);
		al++;
	}
	putchar("\n");
	return (0);

}
