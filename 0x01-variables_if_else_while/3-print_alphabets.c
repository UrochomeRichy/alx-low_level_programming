#include <stdio.h>
/**
 * main - this function returns an integer and takes no parameters
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char b;

	c = 'a';
	b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
