#include "main.h"

/**
 * print_square - function that prints a diagonal
 *
 * @size: number
 *
 * Description: using _putchar to print a square
 *
 * Return: Always 0 (success)
 */
void print_square(int size)
{
int row, column;
if (size > 0)
{
for (row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
