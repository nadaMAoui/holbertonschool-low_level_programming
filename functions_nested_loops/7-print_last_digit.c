#include "main.h"
/**
 * print_last_digit - check the code
 *
 *@n: integer to use
 *
 *@x: integer to use
 *
 * Return: retun x  (success)
*/
int print_last_digit(int n)
{
	int x;
x = (n % 10);
if (x < 0)
{
	x = (-1 * x);
}
_putchar(x + '0');
return (x);
}
