#include<stdio.h>
/**
 * print_sign - print the sign of a number
 *
 * @n: integer
 *
 * Description: 'prints the sign of a number'
 *
 * Return: return 0 (success)
*/
int print_sign(int n)
{
int n;

if (n > 0)
{
	putchar ('+');
	return (1);
}
else if (n == 0)
{
	putchar ('0');
	return (0);
}
else 
{
	putchar ('-');
	return (-1);

}
