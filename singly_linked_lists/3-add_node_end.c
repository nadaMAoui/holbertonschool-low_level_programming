#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: linked list
 *@str: string to be linked
 *Return: list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode = (list_t *)malloc(sizeof(list_t));
list_t *lastnode = (*head);

if (!newnode)
return (NULL);
newnode->str = strdup(str);
newnode->len = strlen(str);
newnode->next = NULL;
if (!(*head))
{
(*head) = newnode;
return (*head);
}
while (lastnode->next)
lastnode = lastnode->next;
lastnode->next = newnode;
return (newnode);
}
