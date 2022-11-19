#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a linked list
 * @head: linked list
 * Return: sum of n data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
