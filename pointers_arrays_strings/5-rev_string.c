#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * return: void 
*/
void rev_string(char *s)
{ 
char temp; 
int aux = 0; // setting a char[0] use it for swap
int i = 0;
while (*(s + i) != '\0') // if s[0] diff de nul, i= i+1/ we got the length of string 
{
i = i + 1;
}
i = i - 1; // we intialize i at the last char

 while (aux < i)
{
temp = s[i]; // swap char 
s[i] = s[aux];
s[aux] = temp;
aux ++;
i --;
}
} 
