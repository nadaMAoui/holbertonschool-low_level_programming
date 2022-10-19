#include "main.h"
/**
* _puts - fonction print string
* @str: inetger
* return: void
*/
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 1;
}
_putchar('\n');
}
