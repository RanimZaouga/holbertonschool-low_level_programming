#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table,
 * or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;  /* Declare a pointer to a hash table structure */
	unsigned long int i;  /*Declare a variable for iteration*/

	/* Allocate memory for the hash table structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)  /* Check if memory allocation was successful */
		return (NULL);

	ht->size = size;  /* Set the size of the hash table */

	/* Allocate memory for the array of hash nodes */
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht == NULL)  /* Check if memory allocation was successful */
		return (NULL);

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);  /* Return the pointer to the newly created hash table */
}
