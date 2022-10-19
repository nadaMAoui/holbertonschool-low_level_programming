#include <stdio.h>
/**
*main: prgram that prints number of arguments 
*@arg:program counter
*Return: 0
*/
int main (int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
} 
