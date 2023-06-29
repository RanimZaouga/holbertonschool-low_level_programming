#include "main.h"
#include <stdio.h>

/**
* print_array - prints elements of an array
*
* @a: name of the array
* @n: number of elements
*
* Return: a and n inputs
*/

void print_array(int *a, int n)
{
int i;
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
