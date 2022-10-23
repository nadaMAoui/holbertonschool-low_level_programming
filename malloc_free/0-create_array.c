#include "main.h"
#include <stdlib.h>
/**
* create_array - function that create an array of caracters
*@size: number of the array elemnts
*@c: data type
*Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *buffer;

if(size == 0)
return(NULL);
else
buffer = (char*) malloc (size *sizeof(c));
{
if(buffer == 0)
return(NULL);
else
{
for(i = 0; i < size; i++)
*(buffer + i) = c;
}
}
return(buffer);
}
