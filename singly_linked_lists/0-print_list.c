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
			printf("[%d] %s", len, h->str);
		}

		printf("\n");
		count++;
		h = h->next;
	}

	return (count);
}
