#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - a function that searches for integer
*@array: array of integers
*@size: length of array
*@cmp: pointer to the function
*Return: integer 
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);

else if (cmp != NULL && array != NULL && size > 0)
{
for (i = 0; i < size; i++)
if (cmp(array[i]))
return(i);
}
return(1);
}
