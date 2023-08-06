#include "lists.h"
/**
 * print_dlistint - function that print all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t i;

	while (h)
	{
		i++;
		printf("%d ", h->n);
		h = h->next;
	}
	return (i);
}
