#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: initial string
 * @needle: substring
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
char *reslt;
char *auxl;

while (*haystack != '\0')
{
reslt = haystack;
auxl = needle;

while (*auxl == *haystack && *auxl != '\0'
&& *haystack != '\0')
{
haystack++;
auxl++;
}
if (*auxl == '\0')
return (reslt);
haystack = reslt + 1;
}
return (NULL);
}
