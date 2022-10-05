#include<stdio.h>
/**
 * _islower - Entry point
 *
 * @c: integer
 *
 * Description: 'checks for lowercase character'
 *
 * Return: Return 1 (fail) or 0 (sccess)
*/
int _islower(int c)
{
char ch = c;

if (islower(c) == 1)
{
	return (1);
}
else{	
	return (0);
}
}
