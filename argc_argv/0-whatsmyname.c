#include<stdio.h>
/**
* main - program that prints its name
*@argc: argument counter
*@argv: argument vector
*
*Return: int
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
