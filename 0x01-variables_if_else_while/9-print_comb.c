#include <stdio.h>
/**
 * main - this function takes no parameters and returns no integers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (i <= 9; ++i)
	{
		for (j <= 9; ++j)

		{
		if (i != 0 || j != 0)

		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			putchar(' ');
		}
			}
				}
	putchar('\n');
	return (0);
}

