#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * in a dlistint_t list
 *
 * @h: pointer to the pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return new_node;
	}

	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
