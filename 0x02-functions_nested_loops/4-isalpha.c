#include "main.h"
/**
 * _isalpha - this function takes an interger parameter and returns an integer
 * @c: integer parameter of function
 * Return: integer
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
