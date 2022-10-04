#include<stdio.h>

/**
 * main - void
 *
 * Description: 'prints 10 times the alphabet, in lowercase'
 *
 * return: return void
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	
		for (j = 0; i < 10; j++)
		{	
			for (i = 97; i <= 122; i++)
			{
				_putchar(i);
			}
		        _putchar('\n');
		}
}
