#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code print lower case alphabet without q and e
 *
 * Return: retun 0 on successful execution
 */

int main(void)
{

	char al = 'a';

	while (al <= 'z')
	{
		if ((al != 'e') && (al != 'q'))
			putchar(al);

		al++;
	}
	putchar('\n');
	return (0);

}
