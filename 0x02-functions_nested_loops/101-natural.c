#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function takes no parameters and returns an integer
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 3; i < 1024; i += 3)
	{
		for (j = 5; j < 1024; j += 5)
		{
			putchar((j + i));
		}
	}
		putchar('\n');
		return (0);
}
