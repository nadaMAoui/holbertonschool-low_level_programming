#include "main.h"
/*
* swap_int - swaps the values of two integers
* @a:integer
* @a:integer
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