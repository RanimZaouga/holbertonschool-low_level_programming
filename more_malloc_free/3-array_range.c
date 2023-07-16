#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to created array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j, p;

	if (min > max)
		return (NULL);
	 i = ((max - min) + 1);
	array = malloc(i * sizeof(int));
	if (array == NULL)
		return (NULL);
	j = min;
	for (p = 0; p < i; p++, j++)
		array[p] = j;
	return (array);
}
