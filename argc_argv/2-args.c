#include <stdio.h>

/**
* main - a program that prints all arguments it received
* @argc: program counter 
* @argv: program vector 
* Return: integer
*/
int main (int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf ("%s\n", argv[i]);
}
return (0);
}
