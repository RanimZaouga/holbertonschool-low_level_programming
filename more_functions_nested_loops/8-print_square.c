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
int line, i;
if (size > 0)
for (line = 1; line <= size; line++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
