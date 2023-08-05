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
	const list_t *current = h;  // Start from the head of the list
	size_t count = 0;           // Counter for the number of nodes

	 while (current != NULL)
	 {
		if (current->str == NULL)
		{
			printf("[0] (nil)");  // Print "[0] (nil)" if the string is NULL
		}
		else 
		{
			size_t len = 0;
			while (current->str[len] != '\0')
			{
				len++;  // Calculate the string length manually
			}
			printf("[%zu] %s", len, current->str); // Print the string length and the string
		}

		printf("\n");  // Print a new line after printing each node
		count++;       // Increment the node count
		current = current->next;  // Move to the next node
	}

	return count;  // Return the total number of nodes
}
