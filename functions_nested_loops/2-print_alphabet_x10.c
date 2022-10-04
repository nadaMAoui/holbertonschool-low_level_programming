#include<stdio.h>

/**
 * main - void
 *
 * Description: 'prints the alphabet, in lowercase, followed by a new line'
 *
 * Return: Always void (Success) 
 */
void print_alphabet_x10(void)
{
	int i;
	int j;


	for (j = 0; i < 10; j++)
	{	
		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
