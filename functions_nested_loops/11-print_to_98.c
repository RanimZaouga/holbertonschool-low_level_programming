#include "main.h"
/**
* print_to_98 - entry point
* @n: compteur
* Return: count to 98
*/
void print_to_98(int n)
{
if (n > 98)
{
n = n - 1;
}
else if (n < 98)
{
n = n + 1;
}
else
{
n = n;
}
_putchar(n + '0');
_putchar(',');
_putchar(' ');
_putchar('\n');
}
