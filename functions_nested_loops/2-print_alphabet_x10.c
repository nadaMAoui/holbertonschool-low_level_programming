#include<stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'prints the alphabet, in lowercase, followed by a new line'
 *
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
