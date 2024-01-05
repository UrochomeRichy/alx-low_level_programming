#include <stdio.h>
/**
 * main - this function has no parameters and returns an integer
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
