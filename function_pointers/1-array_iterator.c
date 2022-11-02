#include"function_pointers.h"
#include <stdio.h>
/**
*array_iterator - a function that executes a function given as a parameter on each element of an array
*@array: user input 
*@size: the length of array
*@action: pointer to the function
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if ( action != NULL && size > 0 && array != NULL)
for (i = 0; i < size; i++)
action(array[i]);
return;
}
