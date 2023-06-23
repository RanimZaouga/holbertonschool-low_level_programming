#include "main.h"

/**
 * more_numbers - function that will print the alphabet 10 times
 *
 * Description: using _putchar to print the alphabets 10 times
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
int line, c, n;
for (line = 0; line <= 9; line++)
{
for (c = 0; c <= 14; c++)
{
n = c;
if (c > 9)
{
_putchar(1 + 48);
n = c % 10;
}
_putchar(n + 48);
}
_putchar('\n');
}
}
