#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @ch: Pointer to Char
 * Return: char.
 */
char *leet(char *ch)
{
int i = 0;
int j = 0;
char *letter = "aAeEoOtTlL";
char *number = "4433007711";

while (*(ch + i) != '\0')
{
while (*(letter + j) != '\0')
{
if (*(ch + i) == *(letter + j))
*(ch + i) = *(number + j);
j++;
}
j = 0;
i++;
}
return (ch);
}
