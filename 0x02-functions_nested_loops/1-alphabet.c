#include "main.h"
/**
 * print_alphabet - this function takes no parameters and returns void
 * Return: void  (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
