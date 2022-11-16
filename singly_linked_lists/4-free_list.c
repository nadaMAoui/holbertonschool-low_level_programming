#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free a list_t list
 * @head: linked list
 * Return: void
*/
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
free(head->str);
free(head);
}
}
