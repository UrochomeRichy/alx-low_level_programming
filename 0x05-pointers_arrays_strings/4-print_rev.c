#include "main.h"
/**
 * print_rev - this function takes character parameters and returns void
 * @s: character parameter of print_rev function
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int o;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (o = l; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

