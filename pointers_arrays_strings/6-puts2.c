#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to char 
 * return: void
*/
void puts2(char *str)
{
    int i = 0;

while (str[i] != '\0')
{
if (str[i] % 2 == 0)
{
putchar(*(str + i));
}
i = i + 1;
}
putchar('\n'); 
}
