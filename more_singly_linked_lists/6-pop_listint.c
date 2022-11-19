#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 *@head: linked list
 *Return: int
 */
int pop_listint(listint_t **head)
{
	int pos = 0;
	listint_t *newnode = NULL;

	if (*head == NULL)
		return (0);

		newnode = (*head)->next;
		pos = (*head)->n;
		free(*head);
		(*head) = newnode;

	return (pos);
}
