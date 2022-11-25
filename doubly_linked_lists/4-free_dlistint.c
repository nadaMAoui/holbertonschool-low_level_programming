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

while (head)
{
tmp = head;
free(tmp);
tmp = head->next;
}
}
