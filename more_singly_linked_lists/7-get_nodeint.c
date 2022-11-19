#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *@head: linked list
 *@index: position of the node
 *Return: return nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
	{
		for (i = 0; i < index; i++)
			head = head->next;
	}
	return (head);
}
