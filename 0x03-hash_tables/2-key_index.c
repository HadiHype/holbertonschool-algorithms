#include "hash_tables.h"
/**
 *long int key_index - gives the index of a key
 *@key: the key
 *@size: size of array
 *
 *Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (NULL);
	return (hash_djb2(key) % size);
}
