#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates n bytes
 * @s1: first string
 * @s2: second string
 * @n: size of second string
 * Return: pointer char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size2 = 0, size1 = 0, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s2[size2] != '\0')
	{
		size2++;
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	if (n > size2)
		n = size2;
	ptr = malloc((size1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = size1; i < (size1 + n); i++)
	{
		ptr[i] = s2[i - size1];
	}
	ptr[i] = '\0';
	return (ptr);
}
