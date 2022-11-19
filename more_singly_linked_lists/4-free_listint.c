#include "lists.h"
#include <stdlib.h>
/**
 *  free_listint - free a linked list
 * @head: pointer to the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
