#include "lists.h"
/**
 * print_listsint - print elements of linked list
 * @h: pointer to linked list
 * Return: c
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
