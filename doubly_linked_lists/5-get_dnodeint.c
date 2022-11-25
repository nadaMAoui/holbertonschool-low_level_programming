#include "lists.h"
/**
 *get_dnodeint_at_index - find the Nth Node in a Linked List
 *@head: linked list
 *@index: index of node
 *Return: node with it's index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int length = 0;

	if (!head)
		return (NULL);
	current_node = head;
	while (current_node)
	{
		if (length == index)
			return (current_node);
		current_node = current_node->next;
		length++;
	}
	return (0);
}
