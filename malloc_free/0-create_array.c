#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @c: content of the array
 * @size: the size of the array
 *
 * Return: 0 if it fails pointer if it works
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		ptr = (char *) malloc(size * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
		free(ptr);
	}
}
