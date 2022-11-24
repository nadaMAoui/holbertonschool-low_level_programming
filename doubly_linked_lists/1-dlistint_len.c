#include "lists.h"
/**
 * dlistint_len - return number of data
 * @h: linked list
 * Return: n_data
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n_data = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		n_data++;
	}
	return (n_data);
}
