#include "lists.h"
/**
 * sum_dlistint - return sum of data
 * @head: linked list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	unsigned int sum = 0;

	tmp = head;
	if (tmp == NULL)
		return (sum);

	while (tmp)
		sum = tmp->n;
	tmp = tmp->next;
	sum += sum;

	return (sum);
}
