#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -this function has no parameters and returns integers
 * Return: 0 (success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than five\n", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is zero\n", n, lastdigit);
	else if (lastdigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);

	return (0);
}
