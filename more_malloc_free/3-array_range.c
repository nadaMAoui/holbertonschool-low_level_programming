#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: array first element
 * @max: array last element
 * Return: pointer of array
*/
int *array_range(int min, int max)
{ int i = 0, t = min;
int *ptr;

if (min > max)
return(0);
ptr = malloc((max - min + 1) *sizeof(int));

if(!ptr)
return (0);

while (i <= max - min)
{
ptr[i] = t;
i++;
t++;
}
return (ptr);
}
