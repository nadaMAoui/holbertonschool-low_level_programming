#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string reversely
 * @s: string to reverse
 * return: void
*/
void print_rev(char *s)
{
int i, len;

len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
putchar (s[i]);
}
putchar ('\n');
}
