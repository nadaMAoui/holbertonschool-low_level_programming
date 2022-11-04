#include "main.h"
#include <stdarg.h>
/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of the parameter function
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list argument;
if (n == 0)
return (0);

va_start(argument, n);
for (i = 0; i < n; i++)
{
sum += va_arg(argument, int);
va_end(argument);
}
return (sum);
}
