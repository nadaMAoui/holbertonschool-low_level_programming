#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * _putchar - print caracter
 * @n: integer
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	if ((n = 0) || (n < 0))
	{
		_putchar('\n');
	}
	_putchar('\n');
}
