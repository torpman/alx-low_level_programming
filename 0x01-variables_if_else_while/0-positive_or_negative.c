#include <stdlib.h>
#include <time.h>

/**
 *main - this is the entry point where the code execution begin
 *
 *Description: this code output positive or negative
 *base on a random number generated
 *
 *Return: return 0 on successful execution
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n)
	}
	return (0);

}
