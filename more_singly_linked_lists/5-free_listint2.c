#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *currently;

	if (head != NULL)
	{
		currently = *head;
		while ((tmp = currently) != NULL)
		{
			currently = currently->next;
			free(tmp);
		}
		*head = NULL;
	}
}
