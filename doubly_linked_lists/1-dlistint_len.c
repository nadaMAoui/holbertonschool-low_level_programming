#include "lists.h"
/**
 * dlistint_len - return number of data
 * @h: linked list
 * return: n_data
*/
size_t dlistint_len(const dlistint_t *h)
{
unsigned int n_data;
if(h == NULL)
return(0);
while(h)
{
    n_data = 1;
    h = h->next;
    n_data++;
}
return(n_data);
}