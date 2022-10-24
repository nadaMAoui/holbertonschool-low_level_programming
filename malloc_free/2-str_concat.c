#include "main.h"
#include <stdlib.h>
#include <string.h> 
/**
*str_concat - a function that concatenates two array of char 
*@s1: First array
*@s2: Second array 
*Return: return an array  
*/
char *str_concat(char *s1, char *s2)
{
int i, j;
unsigned int size;
char *ptr; 

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size = strlen(s1) + strlen(s2) + 1;
ptr = (char *) malloc(size *sizeof(char));

for (i = 0; *(s1 + i) != '\0'; i++)
{
*(ptr + i) = *(s1 + i);
}
for (j = 0; *(s2 + j) != '\0'; j++)
{
*(ptr + i) = *(s2 + j);
i++;
}
return (ptr);
}
