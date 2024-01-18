#include <unistd.h>
/**
 * main - this function takes no parameters and returns and returns an integer
 * Return: 1 (success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, "
		"2015-10-19,\n";

	write(2, message, 59);

	return (1);
}


