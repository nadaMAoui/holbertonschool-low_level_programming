#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search -  a function that searches for a value
 * in a sorted array of integers
 * @array: vector of sorted data
 * @size: n data
 * @value: searched_data
 * Return: -1 if data not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int mid = 0, l = 0, r = size - 1;
	unsigned long int i = 0;

	if (!array)
		return (-1);

	while (l <= r)
	{
		mid = (l + r) / 2;
		i = l;

		printf("Searching in array: ");

		for (; i <= r; ++i)
		{
			if (i != l)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (value < array[mid])
			r = mid - 1;
		else if (value > array[mid])
			l = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
