#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: array first element 
 * @max: array last element 
 * Return: pointer of array
*/
int *array_range(int min, int max)
{ int size, i, t = 0;
int *ptr;
if (min > max)
return(0);

size = (max - min) + 1;
ptr = malloc (size * sizeof(int));

if(!ptr)
return (0);

for (i = 0; i <= max ; i++ )
{
ptr[i] = t;
t++;
}
return(ptr);
}
