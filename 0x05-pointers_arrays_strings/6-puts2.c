#include "main.h"
/**
 * puts2 - this function returns void and takes charcter parameter
 * @str: character parameter of function puts2
 * Return: void
 */
void puts2(char *str)
{
	int printcharacter;

	printcharacter = 1;

	while (*str != '\0')
	{
		if (printcharacter)
		{
			_putchar(*str);
		}
		printcharacter = !printcharacter;
		str++;
	}
	_putchar('\n');
}
