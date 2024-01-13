#include "main.h"
/**
 * _abs - returns an integer and takes an integer as a parameter
 * @i: integer parameter of the function
 * Return: 0 (Success)
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
	_putchar('\n');
	return (0);
}
