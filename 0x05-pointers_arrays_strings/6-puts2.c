#include "main.h"
/**
 * puts2 - this function returns void and takes charcter parameter
 * @str: character parameter of function puts2
 * Return: void
 */
void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len += 2;
	}
	_putchar('\n');
}
