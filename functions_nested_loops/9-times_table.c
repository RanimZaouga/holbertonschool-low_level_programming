#include "main.h"
/**
* times_table - prints time table
*
* Return: Always 0
*/
void times_table(void)
{
int i, n, m;

for (n = 0; n <= 9; n++)
{
_putchar(48);
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
i = n * m;
if (i <= 9)
_putchar(' ');
else
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
}
_putchar('\n');
}
}
