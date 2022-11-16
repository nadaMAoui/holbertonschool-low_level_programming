#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of list_t
 * @head: double pointer to linked list
 * @str: string to be linked
 * Return: adresse of new node
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
newnode = (list_t *) malloc(sizeof(list_t));
if (!newnode)
return (NULL);
newnode->str = strdup(str);
newnode->len = strlen(str);
newnode->next = (*head);
(*head) = newnode;
return (newnode);
}
