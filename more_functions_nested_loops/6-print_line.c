#include "main.h"
/**
 * print_line - writes the character c to stdout
 * 
 */
void print_line(int n);
{
    int i;

    for (i = 0; i <= n; i++)
    {
    putchar('_');
    }
    if ((n = 0) || (n < 0))
    {
        putchar ('\n');
    }
    putchar ('\n');
}