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

	/* Check for invalid parameters or empty key/value */
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Get the index where the key/value should be stored */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists, update value if found */
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Free existing value */
            free(current->value);
            /* Duplicate new value */
            current->value = strdup(value);
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

    /* Duplicate key */
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0); /* Memory allocation failed */
    }

    /* Duplicate value */
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0); /* Memory allocation failed */
    }

    /* Add the new node at the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1); /* Success */
}
