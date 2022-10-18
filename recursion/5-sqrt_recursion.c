#include "main.h"
/**
*_sqrt_recursion - function that retunrs a natural square root of a number
*@n: intput number  
*return: int 
*/
int _sqrt_recursion(int n)
{
    if ( n == 0)
    return (0);
    if (n == 1)
    return (1);
    if (n < 0)
    return(-1);
    return (get_sqr (n, 1));
}
/**
*get_Sqr - function that return if the number is square or not 
*@num: integer to recieve
*@i: counter
*return: int 
*/
int get_Sqr(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if (num > (i * i))
		return (get_Sqr(num, i + 1));
	else
		return (-1);
}
