#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - function that searches for a value in a sorted array of integers
 * @array: pointer to the vector of data
 * @size: vector length
 * @value: searched_data
*/
int linear_search(int *array, size_t size, int value)
{
long unsigned int i;

while (!array || !value)
return(-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
break;
}
if (i == size)
return(-1);

return(i);
}
