#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @ch: Pointer to Char
 * Return: char.
 */
char *cap_string(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
	if (i == 0 && (*(ch + i) >= 97 && *(ch + i) <= 122))
	{
	*(ch + i) = *(ch + i) - ' ';
	i++;
	}
	if (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t'
	|| *(s + i) == ',' || *(s + i) == ';' || *(s + i) == '!'
	|| *(s + i) == '?' || *(s + i) == '"' || *(s + i) == '('
	|| *(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}'
	|| *(s + i) == '.')
	{
	i++;
	if (*(ch + i) >= 97 && *(ch + i) <= 122)
	{
	*(ch + i) = *(ch + i) - ' ';
	}
	}
	else
	i++;
	}
	return (ch);
}
