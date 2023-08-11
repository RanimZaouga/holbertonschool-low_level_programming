#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value.
 * @key: The key to add. Cannot be an empty string.
 * @value: The value associated with the key (duplicated).
 * Return: 1 if it successed 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Free existing value */
			current->value = strdup(value); /* Duplicate new value */
			if (current->value == NULL)
				return (0); /* Memory allocation failed */
			return (1); /* Update successful */
		}
		current = current->next;
	}
	/* Key does not exist, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* Memory allocation failed */

	new_node->key = strdup(key); /* Duplicate key */
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0); /* Memory allocation failed */
	}
	new_node->value = strdup(value); /* Duplicate value */
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0); /* Memory allocation failed */
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1); /* Success */
}
