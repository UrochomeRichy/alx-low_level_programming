#include "main.h"
/**
 * _strlen_recursion - this function returns integer and takes parameters
 * @s: character parameter of function _strlen_function
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

