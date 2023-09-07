##include <unistd.h>

/**
 *main - Entry point
 *
 *description:this prints exactly the input on it
 *
 * Return: Always
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19, followed by a new\n";

        write(1,quo,59);
       	return (1);
}

