#include<stdio.h>
/**
 * main - void
 *
 * Description: 'prints the alphabet, in lowercase, followed by a new line'
 *
 * Return: Always void (Success) 
 */
void print_alphabet(void)
{
	int i, j;

	for (j = 0; i < 10; j++)
	{	
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
