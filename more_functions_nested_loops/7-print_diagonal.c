#include "main.h"

/**
 * print_diagonal - function that prints a diagonal
 *
 * @n: number
 *
 * Description: using _putchar to print a diagonal
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i, space;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (space = 1; space <= i - 1; space++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
