#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - add node at the end
 *@head: dble linked list
 *@n: data
 *Return: adress of new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		while ((*head)->next)
			(*head) = (*head)->next;

		(*head)->next = new_node;
		new_node->prev = (*head);
	}
	return (new_node);
}
