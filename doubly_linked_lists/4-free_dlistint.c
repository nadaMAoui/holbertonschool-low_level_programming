#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free double linked list
 * @head: bdle linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	else
	{
		while (head)
		{
			tmp = head;
			tmp = head->next;
		
		free(tmp);
		}
	}
	free(head);
}
