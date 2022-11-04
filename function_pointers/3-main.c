#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - a prgaram that executes five mathematical operations
 *@argc: number of arguments
 *@argv: arguments of array
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
int num1, num2, res;
char input;
int (*function)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi (argv[1]);
num2 = atoi (argv[3]);

function = get_op_func(argv[2]);

if (!function)
{
printf("Error\n");
exit (99);	
}
input = *argv[2];
if ((input == '/'  ||  input == '%') && num2 == 0)
{
printf("Error\n");
exit (100);
}
res = function(num1, num2);
printf("%d\n", res);
return (0);
}
