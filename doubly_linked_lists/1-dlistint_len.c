#include "lists.h"
/**
 * dlistint_len - function that return the number of element in a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
