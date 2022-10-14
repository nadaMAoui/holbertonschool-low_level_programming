*include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: initial segment
 * @accept: bytes to check
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int cont = 0;
int j = 0;
int x;

while (*s != '\0')
{
x = 0;
while (*(accept + j) != '\0')
{
if (*s == *(accept + j))
x = 1;
j += 1;
}
j = 0;
if (x == 0)
break;
cont += 1;
s++;
}
return (cont);
}