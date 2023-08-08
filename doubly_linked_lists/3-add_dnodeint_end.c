#include "lists.h"
/**
 * add_dnodeint_end - function that add node at the end of a list
 * @head: pointer to the pointer to the head of the list
 * @n: the int to be added to the new node
 * Return: the adress of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		/* Find the last node in the list */
		dlistint_t *i = *head;

		while (i->next != NULL)
		{
			i = i->next;
		}
		/* Add the new node after the last node */
		i->next = new_node;
	}
	return (new_node);
	new_node->prev = i;
}
