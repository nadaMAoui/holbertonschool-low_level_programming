#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*/
char *_strdup(char *str)
{
char *dest;
unsigned int size;

if (str == 0)
{
return(NULL);
}

size = strlen(str) + 1;
dest = (char *) malloc(size *sizeof(str));
if(dest == 0)
{
return (NULL);
}
else 
{
strcpy(dest, str);
}
return(dest);
}
