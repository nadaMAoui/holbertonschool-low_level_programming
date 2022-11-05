#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h> 
/**
 * print_numbers: a variadic function that prints numbers with separator
 * @separator: string printed between two numbers
 * @n: number of integers passed by user 
 * @...: number of arguments 
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list number; 
va_start(number, n);

for(i = 0; i < n; i++)
{
printf("%d",va_arg(number, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(number);
}
