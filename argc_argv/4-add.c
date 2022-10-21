#include <stdio.h>
#include <stdlib.h>
/**
* main - a function that adds positive numbers 
*@argc: program counter 
*@argv: program vector
*Return: int
*/
int main(int argc, char *argv[])
{
int i, j, k, num;
int result = 0;
if (argc == 1)
{
printf("0\n");
return 0;
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
if (argv[i][j] > '9' || argv[i][j] < '0' )
{
printf("%s\n", "Error");
return(1);
}
}
 for (k = 1; k < argc; k++ ) 
{
num = atoi(argv[k]); 
result += num; 
}
printf("%d\n", result);
return (0);
}
