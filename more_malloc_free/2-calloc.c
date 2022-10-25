#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements of array
 * @size: bytes of each element
 * Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0 || size == 0)
{
return(NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return(NULL);
}
for (i = 0; i < (size * nmemb); i++)
ptr[i] = 0;
return(ptr);
}
