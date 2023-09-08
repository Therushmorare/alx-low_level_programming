#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array.
 * @key: The key to be hashed and indexed.
 * @size: The size of the array of the hash table.
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
