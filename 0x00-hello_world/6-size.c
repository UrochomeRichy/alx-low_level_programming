#include <stdio.h>
/**
 * main - this program returns an integer and takes no parameter
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %zu byte(s)\n", sizeof(a));
printf("size of an int: %zu byte(s)\n", sizeof(b));
printf("size of a long int: %zu byte(s)\n", sizeof(c));
printf("size of a long long int: %zu byte(s)\n", sizeof(d));
printf("size of a float: %zu byte(s)\n", sizeof(e));
return (0);
}
