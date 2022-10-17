#include "main.h"
/**
 * _strlen_recursion - function that returns the length of string
 * @s: string to count its length
 * return: the value of length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + (_strlen_recursion(s + 1)));
}
