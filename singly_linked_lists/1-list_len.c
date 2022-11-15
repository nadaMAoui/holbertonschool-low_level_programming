#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that returns the number of elements in list_t
 *@h: pointer to linked list
 *Return: number of elemts
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
