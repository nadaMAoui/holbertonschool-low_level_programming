#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert new_node at idx
 *@h: linked list
 *@n: data
 *Return: adress of new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;
	unsigned int i;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (new_node == NULL)
		return (NULL);
	if (!(*h))
		return (NULL);
	else
	{
		if (idx < 1)
			return (NULL);
		else if (idx == 1)
		{
			new_node->next = *h;
			*h = new_node;
		}
		else
		{
			tmp = *h;
			for (i = 0; i < idx - 1; i++)
				tmp = tmp->next;
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
	}
	return (new_node);
}