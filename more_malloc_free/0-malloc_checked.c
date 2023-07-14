#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size allocated
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
		void *f = malloc(b);

		if (f == NULL)
			exit(98);
		return (f);	
}
