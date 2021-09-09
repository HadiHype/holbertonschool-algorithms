#include "hash_tables.h"
#include <stdio.h>
/**
 *hash_table_create - function that creates a hash table
 *@size: size of the array
 *
 *
 *Return: Pointer to the newly created hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (!size)
		return (NULL);

	hash = calloc(1, sizeof(hash_table_t));

	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = calloc(size, sizeof(hash_node_t *));
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
