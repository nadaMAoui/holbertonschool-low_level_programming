#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of single-digit numbers'
 *
 * Return: return 0 (success)
 */
int main(void)
{
int i;

for (i = 48; i <= 56; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar(57);
putchar('\n');
return (0);
}

