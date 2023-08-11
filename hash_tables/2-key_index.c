#include "hash_tables.h"
/**
 * key_index - Gives you the index of a key in the hash table.
 *
 * @key: The key for which to find the index.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored
 * in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
