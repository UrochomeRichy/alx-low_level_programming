#include "main.h"
/**
 *  puts_half - this function takes character parameters and returns void.
 *  @str: character parameter of the function puts_half
 *  Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int midpoint = (length / 2);
	int i;
	int n;

	for (i = midpoint; i < length; i++)
	{
		_putchar(str[i]);
	}
	n = ((length - 1) / 2);

	while ((length % 2) != 0)
	{
		_putchar(n);
	}
	_putchar('\n');
}
