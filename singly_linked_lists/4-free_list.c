#include "lists.h"
/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
	
}
