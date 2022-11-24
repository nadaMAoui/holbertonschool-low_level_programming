#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - print data of double linkd list
 *@h: dlinked list
 *Return: lentgth
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
