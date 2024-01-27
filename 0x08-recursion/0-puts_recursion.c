#include "main.h"
/**
 * _puts_recursion - this function takes character parameters and returns void
 * @s: character parameter of _puts_recursion
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
