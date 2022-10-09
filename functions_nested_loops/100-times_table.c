#include "main.h"
/*
 * print_times_table - print n times a table
 *@row, col, M, n:integer
 */
void print_times_table(int n)
{
    int row, col, M;

    if ((n <= 0) && (n >= 0))
    {
        for (col = 0; col <= n; col++)
        {
            for (row = 0; row <= n; row++)
            {
                M = (col * row);
            }
            if (M < 10)
            {
                if (col != 0)
                {
                    putchar(' ');
                    putchar(' ');
                    putchar(' ');
                }
                else if (M < 100)
                {
                    putchar(' ');
                    putchar(' ');
                    putchar((M / 10) + '0');
                    putchar((M % 10) + '0');
                }
                else if (M > 100)
                {
                    putchar(' ');
                    putchar((M / 100) + '0');
                    putchar((M % 100) + '0');
                    putchar((M / 10) + '0');
                }
                else
                {
                    if (col != n)
                        putchar('\n');
                }
            }
        }
    }
}
