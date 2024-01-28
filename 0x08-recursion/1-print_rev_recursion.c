#include "main.h"
/**
 * _print_rev_recursion - this function takes character parameters and returns void
 * @s: character parameter of _print_rev_recursion
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
