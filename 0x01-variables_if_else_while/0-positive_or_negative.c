#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *description:positive_or_negative
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(0);
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else
	{
	printf("%i is negative\n", n);
	}
	return (0);
}
