#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * return: void 
*/
void rev_string(char *s)
{ 
char temp; 
int aux = 0;
int i = 0;
while (*(s + i) != '\0')
{
i = i + 1;
}
i = i - 1;

 while (aux < i)
{
temp = s[i];
s[i] = s[aux];
s[aux] = temp;
aux ++;
i --;
}
} 
