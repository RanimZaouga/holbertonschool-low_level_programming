#include "lists.h"
/**
 * add_dnodeint - function that add node at the beginnig of a list
 * @head: pointer to the beginning of the list 
 * @n: the int to be added to the new node
 * Return: the adress of the new element or null if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    if (new_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

    if (new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
