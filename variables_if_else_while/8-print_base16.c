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

for (i = 48; i <= 57; i++)
{
	putchar(i);
}
for (i = 97; i <= 101; i++)
{
	putchar(i);
}
putchar('\n', i);



return (0);
}
