#include<stdio.h>
/**
* main - function that prints program name 
*@argc:prgram counter 
*@argv:program vector
*return:int
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
