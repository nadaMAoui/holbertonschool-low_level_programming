#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i = i + 1;
}
return (i);
}
