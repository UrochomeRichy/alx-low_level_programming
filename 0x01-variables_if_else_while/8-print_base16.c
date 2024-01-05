#include <stdio.h>
/**
 * main - this function takes no parameters and returns an integer
 * Return:0 (success)
 */
int main(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
