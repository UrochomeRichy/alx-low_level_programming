#include "main.h"
/**
 * swap_int - this function takes an integer parameter and returns void
 * @a: integer parameter of function swap_int
 * @b: integer function swap_int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
