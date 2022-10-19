#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string to receive
 * @accept: bytes to accept
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
int j = 0;
int x;

while (*s != '\0')
{
x = 0;
while (*(accept + j) != '\0')
{
if (*s == *(accept + j))
x = 1;
j++;
}
j = 0;
if (x == 1)
return (s);
s++;
}
return (NULL);
}
