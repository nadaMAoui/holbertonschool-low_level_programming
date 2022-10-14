#include "main.h"

/**
 * _memcpy - function that copies n bytes from src to dest
 * @dest: pointer to dest char
 * @src: pointer to source char
 * @n: size of byte
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;

while (i < n)
{
*(dest + i) = * (src + j);
i += 1;
j += 1;
}
return (dest);
}
