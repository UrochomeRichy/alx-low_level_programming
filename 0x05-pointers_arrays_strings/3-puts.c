#include "main.h"
/**
 * _puts - takes a character parameter and returns void.
 * @str: character string 
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
