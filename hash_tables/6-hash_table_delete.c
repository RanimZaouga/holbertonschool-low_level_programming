#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Free memory for each key-value pair and linked list nodes */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}

	/* Free memory for the array and the hash table structure */
	free(ht->array);
	free(ht);
}
