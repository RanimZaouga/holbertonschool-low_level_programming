#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int comma = 0; /* Used to handle comma separation */

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Start printing the hash table */
	printf("{");

	/* Iterate through each element in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			/* Handle comma separation */
			if (comma)
				printf(", ");
			/* Print the key-value pair */
			printf("'%s': '%s'", current->key, current->value);
			comma = 1; // Set comma to 1 after the first key-value pair
			current = current->next; // Move to the next node in the linked list
		}
	}

	/* End printing the hash table */
	printf("}\n");
}
