#include "main.h"
/**
 * _strlen_recursion - function that returns the length of string
 * @s: string to recieve
 * return: void
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return ((_strlen_recursion + 1) + 1);
}
