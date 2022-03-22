#include "main.h"
/**
* rev_string - this function reverse strings
*
* @s: the string to be reversed
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int cnt = 0;
	int s_ln;

	while (s[i] != '\0')
	{
		cnt++;
		i++;
	}

	s_ln = cnt - 1;

	for (j = 0; j <= s_ln / 2; j++)
	{
		temp = s[j];
		s[j] = s[s_ln - j];
		s[i - j] = temp;
	}

}
