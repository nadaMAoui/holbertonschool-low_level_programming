#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: array first element 
 * @max: array last element 
 * Return: array pointer
*/
int *array_range(int min, int max)
{ int size, i;
int *ptr;
if (min > max)
return(NULL);

size = (max - min) + 1;
ptr = malloc (size *sizeof(int));

if(ptr == NULL)
return (NULL);

for (i = 0; max ; i++ )
{
ptr[i] = i;
max --;
}
return(ptr);
}