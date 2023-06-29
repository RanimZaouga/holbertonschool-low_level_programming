#include "main.h"
#include <stdio.h>

/**
* print_array - prints elements of an array
*
* @a: int
* @n: int
*
* Return: nothing
*/

print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
