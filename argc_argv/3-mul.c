#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the multplication of two numbers
*@argc: program counter
*@argv: program vector
*Return: 1 success 0 null
*/
int main(int argc, char *argv[])
{
int multiple, num1, num2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
multiple = (num1 *num2);
printf("%d\n", multiple);
}
return (0);
}
