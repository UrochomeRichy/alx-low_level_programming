#include <stdio.h>
/**
 * main - this function takes no parameters and returns an integer
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c <= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
