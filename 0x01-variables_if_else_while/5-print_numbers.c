#include <stdio.h>
/**
 * main - this function takes no parameters and returns an integer
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");
	return (0);
}
