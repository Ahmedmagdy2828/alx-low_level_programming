#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*description: print_comb3.c
*
* Return: 0
*/

	int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
	for (m = 49; m <= 57; m++)
	{
	if (m > n)
	{
	putchar(n);
	putchar(m);
	if (n != 56 || m != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

