#include <stdio.h>
/**
 * main - this function takes no parameters and returns an integer
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	int j;

	for (c = '0'; c <= 9; c++)
	{
		for (j = '0'; j <= 9; j++)
		{
			if (c < j)
			{
				putchar(c + '0');
				putchar(j + '0');
				{
					if (!(c == '8' && j == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
