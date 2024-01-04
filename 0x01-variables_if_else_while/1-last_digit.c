#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -this function has no parameters and returns integers
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of n is %d and is greater than five,\n", n);
	else if (n == 0)
		printf("Last digit of n is %d and is zero,\n", n);
	else if (n < 6)
		printf("Last digit of n is %d and is less than 6,\n", n);

	return (0);
}
