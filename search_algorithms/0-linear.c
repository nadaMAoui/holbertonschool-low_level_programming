#include "search_algos.h"
#include <stdio.h>
int linear_search(int *array, size_t size, int value)
{
long unsigned int i;

while (!array || !value)
return(-1);

for (i = 0; i < size; i++)
{
printf("value checked array [%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
break;
}
if (i == size)
return(-1);

return(i);
}
