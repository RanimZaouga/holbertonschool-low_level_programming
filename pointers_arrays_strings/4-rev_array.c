#include "main.h"
/**
* reverse_array - reverse an array of ints
*
*
* @a: name of the array
* @n: number of elements f an array
*
* Return: nothing
*/
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int i;

for (; start < end; start++, end--)
{
i = a[start];
a[start] = a[end];
a[end] = i;
}
}
