#include<stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Description: 'prints the alphabet, in lowercase'
 *
 * Return: return void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
