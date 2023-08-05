#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */


size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	 while (current != NULL)
	 {
		if (current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else 
		{
			size_t len = 0;
			while (current->str[len] != '\0')
			{
				len++;
			}
			printf("[%zu] %s", len, current->str);
		}

		printf("\n");
		count++;
		current = current->next;
	}

	return (count);
}
