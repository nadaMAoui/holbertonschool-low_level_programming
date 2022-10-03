#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints the alphabet in lowercase and uppercase'
 *
 * Return: Always 0 (Success)
 */
 int main(void)
 {
	
	int i;

	
	for (i= 97, <= 122, i++)
	{
		putchar (i);
	}
	for (i= 65, <= 90, i++)
	{
		putchar (i);
	}
	putchar("\n");


	return (0);
}
