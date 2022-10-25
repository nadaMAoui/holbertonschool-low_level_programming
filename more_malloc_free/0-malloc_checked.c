#include "main.h"
/**
*malloc_checked - a function that allocates memory
*@b: number of memory
*Return: void
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
else
return (ptr);
}