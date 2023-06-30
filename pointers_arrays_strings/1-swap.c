#include "main.h"

/**
* swap_int - swap the value of two ints
*
* @a: parameter
* @b: parameter
*
* Return: nothing
*/

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
