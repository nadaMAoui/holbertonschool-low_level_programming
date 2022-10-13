#include "main.h"
/**
 * reverse_array - reverse content of array
 * @a: pointer
 * @n: number of elemnts in array
 * return: void
 */
void reverse_array(int *a, int n)
{
int j = 0;
int i = 0;
int *first, *last;
int tmp = 0;
n -= 1;
first = a;
last = a;

while (i < n)
i = i + 1;
while (j <= i)
{
tmp = *(last + i);
*(first + i) = *(last + j);
*(last + j) = tmp;
j++;
i--;
}
}
