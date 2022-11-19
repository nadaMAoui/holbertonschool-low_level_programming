#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a node at the end of linked list
 * @head: linked list
 * @n:const int
 * Return: new linked list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp;
listint_t *newnode;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (!tmp)
return (NULL);
newnode->n = n;
newnode->next = NULL;
tmp = *head;
if (*head == NULL)
{
*head = newnode;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newnode;
}
return (*head);
}
