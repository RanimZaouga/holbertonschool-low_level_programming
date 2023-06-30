#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: number
 *
 * Description: using _putchar to print a triangle
 *
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
int h, base;
if (size > 0)
{
for (h = 1; h <= size; h++)
{
for (base = 1; base <= size; base++)
{
if ((h + base) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
