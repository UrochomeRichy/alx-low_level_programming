#include <stdio.h>
#include <stdlib.h>
/**
 * main - this function takes no parameters and returns 0
 * Return: 0 (success)
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("The sum of multiples of 3 and 5 below %d is: %d\n", limit, sum);
	return (0);
}
