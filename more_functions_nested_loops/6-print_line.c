#include "main.h"

/**
 * print_line - function that prints a line
 *
 * @n: number
 *
 * Description: using _putchar to print a line
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
