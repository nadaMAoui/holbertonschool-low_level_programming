#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to char
 * return: void
*/
void puts2(char *str)
{
int i;
int len;

len = strlen(str);
for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
