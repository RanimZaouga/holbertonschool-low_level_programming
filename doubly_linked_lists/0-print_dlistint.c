#include "lists.h"
/**
 * print_dlistint - function that print all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *count = h;
	size_t count = 0;

	while (count != NULL)
	{
		count++;
		printf("%d ", count->n);
		h = h->next;
	}
	printf("\n");
	return (count);
}
