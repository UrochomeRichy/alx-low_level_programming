#include "main.h"
/**
 * _islower - this function takes integer as  parameter and returns an integer.
 * @c: integer parameter _islower
 * Return: integer
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
