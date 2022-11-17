#include "lists.h"
/**
 * listint_len - return the numbers of elements of linked list
 * @h: pointer to linked list
 * Return: c
*/
size_t listint_len(const listint_t *h)
{
unsigned int c = 0;

while (h)
{
c++;
h = h->next;
}
return (c);
}
