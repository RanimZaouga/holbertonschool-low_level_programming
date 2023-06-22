#include "main.h"
/**
* times_table - prints time table
*
* Return: Always 0
*/
void times_table(void)
{
int i, n, line;
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
n = i * n;
}
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
