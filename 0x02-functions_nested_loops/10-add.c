#include "main.h"
/**
 * add - this function returns an integer and takes an integer parameter
 * @i: integer parameter of add function
 * @c: integer parameter of add function
 * Return: 0 (success)
 */
int add(int i, int c)
{
	if (i > 0 && c > 0)
	{
	_putchar(i + c);
	_putchar('\n');
	return (i + c);
	}
	return (0);
}
