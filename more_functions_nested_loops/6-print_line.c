#include "main.h"
/**
 * print_line - writes the character c to stdout
 * 
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
        _putchar ('\n');
    }
    _putchar ('\n');
}