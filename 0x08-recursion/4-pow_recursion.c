#include "main.h"
/**
 * _pow_recursion - this function takes integer parameters and returns int
 * @x: integer parameter of function _pow_recursion
 * @y: integer parameter of function _pow_recursion
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
