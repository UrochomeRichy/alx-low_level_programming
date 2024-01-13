#include "main.h"
/**
 * print_sign - returns an integer and takes an integer parameter
 * @n: integer parameter of the function
 * Return: integer
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
	return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	_putchar('\n');
	return (0);
}
