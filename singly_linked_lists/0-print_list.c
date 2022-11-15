#include "lists.h"
#include <stdio.h>
/**
 * print_list - print elements of list_t
 * @h: pointer to list_t
 * Return: node
 */
size_t print_list(const list_t *h)
{
	unsigned int c = 0;

	while (h)
	{
		h->str ? printf("[%d] %s\n", h->len, h->str) : printf("[0] (nil)\n");
		c++;
		h = h->next;
	}
	return (c);
}
