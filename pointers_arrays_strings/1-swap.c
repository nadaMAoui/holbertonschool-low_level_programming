#include "main.h"
/*
* swap_int - swaping two integers using a pointer
* @a:integer
* @b:integer
* return:void 
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
return;

}
