#include "main.h"
/**
 * print_diagonal - this function returns void and takes an integer parameter.
 * @n: integer parameter of function print_diagonal.
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
