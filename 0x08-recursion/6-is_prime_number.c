#include "main.h"
/**
 * is_prime_number -takes integer parameter and returns an integer.
 * @n: integer parameter of function _is_prime_number.
 * Return: integer
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		for (i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	}
	return (1);
}
