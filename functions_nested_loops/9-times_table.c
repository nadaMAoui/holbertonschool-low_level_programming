#include "main.h"
#include<stdio.h>
/**
 * times_table - fonction
 *
 * Description: 'prints the 9 times table, starting with 0'
 *
 * r= row , c= column, d=digit
 *
 * return: return success
*/
#include "main.h"

void times_table(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if( j!=9 )
            {
                if( i*j > 10)
                {
                    _putchar(i*j / 10 + '0');
                    _putchar(i*j % 10 + '0');
                    _putchar(',');
                }
                else
                {
                    _putchar(i*j + '0');
                    _putchar(',');
                }
            }
            else
            {
                _putchar(i*j / 10 + '0');
                _putchar(i*j % 10 + '0');
            }
        }
        _putchar('\n');
    }
}
