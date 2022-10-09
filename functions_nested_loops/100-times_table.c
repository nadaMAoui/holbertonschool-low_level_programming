#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: input of table n
 * Return: nothing.
 */
void print_times_table(int n)
{
	int col, row;

	if (n >= 0 && n < 15)
	{

		for (col = 0; col <= n; col++)
		{
			for (row = 0; row <= n; col++)
			{
				if (row != 0)
				{
					putchar(',');
					if (row * col < 100)
					{
						putchar(' ');
					}
					if (col * row < 10 && col * row < 100)
					{
						putchar(' ');
					}
					putchar(' ');
				}
				printf("%d", row * col;
			}
			putchar('\n');
		}
	}

}