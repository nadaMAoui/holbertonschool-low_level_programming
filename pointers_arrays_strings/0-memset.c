#include "main.h"

/**
 * _memset - function that fills memory with n bytes
 * @s: memory filled to return
 * @b: constant byte
 * @n: size of a byte
 * Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{ 
    
unsigned int i = 0;

while (i < n)
{

*(s + i) = b;
i += 1;

}
return (s);
}
