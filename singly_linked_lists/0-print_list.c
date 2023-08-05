#include "lists.h"
#include <stddef.h>

/**
 * print_list - function that print all elements of a list
 *
 * @h: the varible with type list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			size_t len = 0;

			while (h->str[len] != '\0')
			{
				len++;
			}
			printf("[%d] %s", (int)len, h->str);
		}

		printf("\n");
		count++;
		h = h->next;
	}

	return (count);
}
