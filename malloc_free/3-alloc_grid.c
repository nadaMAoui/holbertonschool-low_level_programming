#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - a function that allocates memory dinamically for 2d arrays
*@width: first array
*@height: second array
*Return: grid
*/
int **alloc_grid(int width, int height)
{
int i, j = 0;
int **ptr;
if (width <= 0 || height <= 0)
{
return (NULL);
}

ptr = (int **) malloc(height * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = (int *) malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(ptr[i]);
}
free(ptr);
return (NULL);
}
}
for (i = 0; j < width; j++)
ptr[i][j] = 0;
return (ptr);
}
