#include<stdio.h>

/**
 * main - Entry main
 *
 * Description: 'prints all the numbers of base 16 in lowercase'
 *
 * Return: return 0 (success)
*/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
	putchar(i);
}
for (i = 97; i <= 102; i++)
{
	putchar(i);
}
putchar(i);


return (0);
}
