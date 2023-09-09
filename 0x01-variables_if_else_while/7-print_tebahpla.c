#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*description:rint_alphabet
*
* Return: 0
*/

	int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
