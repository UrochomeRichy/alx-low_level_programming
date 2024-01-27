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

	for (i = midpoint; i < length; i++)
	{
		_putchar(str[i]);
	}

	if (length % 2 != 0)
	{
		_putchar(str[length - 1]);
	}
	_putchar('\n');
}

