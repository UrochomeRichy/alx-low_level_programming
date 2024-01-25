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

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	_putchar('\n');
	return (0);
}
