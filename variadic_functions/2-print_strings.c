#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n:the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;
char *str;
va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char*);

if (str == NULL)
printf("nil");

else
printf("%s", str);

if (separator != NULL && i < (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
