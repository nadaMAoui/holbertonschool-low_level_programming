#include "main.h"
/**
 * print_last_digit - Description: 'prints the last digit of a number'
 *
 *@n: integer to use
 *
 * Return: retun digit  (success)
*/
int print_last_digit(int n)
	
{
        if (n < 0)
	{
		_putchar(-n)
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
