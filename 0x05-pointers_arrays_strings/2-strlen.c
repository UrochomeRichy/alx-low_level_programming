#include "main.h"
#include <string.h>
/**
 * _strlen - this function returns an integer and takes parameters
 * @s: character parameter of _strlen
 * Return: integer
 */
int _strlen(char *s)
{
	int len;

	len = strlen(s);
	_putchar(len + '0');

	return (len);
}
