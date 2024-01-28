#include "main.h"
/**
 * factorial - this function takes integer parameter and returns integer
 * @n: integer parameter of function factorial
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
