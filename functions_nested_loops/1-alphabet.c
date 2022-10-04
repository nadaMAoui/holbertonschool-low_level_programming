#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints the alphabet, in lowercase'
 *
 * Return: return 0(Success)
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
