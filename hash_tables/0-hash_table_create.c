#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Return: new_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);
	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
		return (NULL);
	new_table->size = size;
	return (new_table);
}
