#include "hash_tables.h"

/**
 * key_index - Gives the index of a key on a hash table.
 * @key: The key to index
 * @size: The size of the array of the hash table
 *
 * Return: the index at which the key/value
 * pair should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);

	index = hash_djb2(key);

	return (index % size);
}
