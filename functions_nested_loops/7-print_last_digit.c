#include "main.h"
/**
 * print_last_digit - Description: 'prints the last digit of a number'
 *
 *@n: integer to use
 *
 *@x: integer to use
 *
 * Return: retun digit  (success)
*/
int print_last_digit(int n)
{
	int x;

        if (n < 0)
	n = -n;
        x = n % 10;   
	_putchar(x + '0');

	return (x);
}
