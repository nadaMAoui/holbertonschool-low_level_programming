#include<stdio.h>
/**
 * main - entry point
 *
 * Description: 'prints the lowercase alphabet in reverse'
 *
 * Return: return 0 (success)
*/
int main(void)
{
int i;

for (i = 122; i <= 97; i--)
{
	putchar(i);
}
putchar('\n');


return (0);
}
