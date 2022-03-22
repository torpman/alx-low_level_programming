#include "main.h"
/**
* puts_half - this fucntion prints half of a string
*
* @str: the string to print
*/

void puts_half(char *str);
{
	int i = 0;
	int cnt = 0;
	int j;
	int s_len = 0;

	while (str[i] != '\0')
	{
		cnt++;
		i++;
	}

	s_len = cnt - 1;

	if (s_len % 2 == 1)
	{
		_putchar(str[s_len / 2]);
	}
	for (j = 0; j <= s_len / 2; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
