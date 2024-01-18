#include "main.h"
/**
 * _isupper - this function takes an integer parameter and returns an integer
 * @c: integer parameter of function _isupper
 * Return: integer
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
