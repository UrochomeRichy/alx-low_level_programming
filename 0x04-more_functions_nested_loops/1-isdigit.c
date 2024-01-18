#include "main.h"
/**
 * _isdigit - this function takes an integer parrameter and return an integer
 * @c: integer parameter of function _isdigit
 * Return: integer
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
		return (1);
	else
		return (0);
}
