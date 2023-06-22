#include "main.h"
/**
* print_last_digit - entry point
* @i: compteur
* Return: last digit
*/
int print_last_digit(int i)
{
if (i >= 0)
{
i = i % 10;
}
else
{
i = -1 * (i % 10);
}
_putchar(i + '0');
return (i);
}
