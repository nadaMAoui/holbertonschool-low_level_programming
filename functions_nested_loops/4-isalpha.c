#include<stdio.h>
/**
 * _islower - check the lower case
 *
 * @c: integer
 *
 * Description: 'checks for lowercase character'
 *
 * Return: Return 1 (fail) or 0 (sccess)
*/
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else if (c >= 65 &&  c < 90)
	{
		return (1);
	}
else
{
	return (0);
}
