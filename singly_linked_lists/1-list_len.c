#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: the varible with type list_t
 * Return: the number elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	node p;
	p = head;
	while (p != NULL)
	{
		p = p->next;
		i++
	}
return (i);

}