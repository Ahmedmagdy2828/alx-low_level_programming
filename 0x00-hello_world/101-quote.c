#include <unistd.h>

/**
 *main - Entry point
 *
 *description:this prints exactly the input on it
 *
 * Return: Always
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
