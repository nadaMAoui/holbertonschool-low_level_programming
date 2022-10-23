#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* strdup - duplicates a string to a memory 
*@str: number of chacacters
*Return: pointer 
*/
char *_strdup(char *str)
{
char *dest;
unsigned int size;

if (str == 0)
{
return(NULL);
}
size = strlen (str) + 1;
dest = (char *) malloc(size *sizeof(char));
if(dest == 0)
{
return (NULL);
}
else
{
strcpy (dest, str);
}
return(dest);
}
