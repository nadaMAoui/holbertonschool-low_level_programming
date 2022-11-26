#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert new_node at idx
 *@h: linked list
 *@n: data
 *@idx: index
 *Return: adress of new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *h;
	unsigned int i = 1;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (new_node == NULL)
		return (NULL);
	if (tmp == NULL)
	{
		return (NULL);
	}
		if (idx == 0)
			return (add_dnodeint(h, n));

		else if (idx == i)
		{
			for (i = 0; i < idx - 1; i++)
				tmp = tmp->next;
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		if (idx == i)
		{
			return (add_dnodeint_end(h, n));
		}
		if (idx > i)
		{
			free(new_node);
		return (NULL);
		}

		return(new_node);
}

