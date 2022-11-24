#include "lists.h"
#include <stdlib.h>
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = (*head);
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (*head);
}
