#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*op_add - a function that adds two integers
*@a:first integer
*@b:second integer
*Return: integer
*/
int op_add(int a, int b)
{
int sum;
sum = a + b;
return (sum);
}

/**
*op_sub - a function that substructs two integers
*@a: first integer
*@b: second integer
*Return: integer
*/
int op_sub(int a, int b)
{
int sub;
sub = a - b;
return (sub);
}

/**
*op_mul - a function that multplies two integers
*@a: first integer
*@b: second integer
*Return: integer
*/
int op_mul(int a, int b)
{
int mul;
mul = a * b;
return (mul);
}

/**
*op_div - a function that divides two integers
*@a: first integer
*@b: second integer
*Return: integer
*/
int op_div(int a, int b)
{
int div;
div = a / b;
return (div);
}

/**
*op_mod - a function that rturnes the rest of a division of two integers
*@a: first integer
*@b: second integer
*Return: integer
*/
int op_mod(int a, int b)
{
int mod;
mod = a % b;
return (mod);
}
