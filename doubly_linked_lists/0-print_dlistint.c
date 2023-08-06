#include "lists.h"
/**
 * print_dlistint - function that print all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		printf("%d ", current->n);
		current = current->next;
	}
	printf("\n");
	return (count);
}
