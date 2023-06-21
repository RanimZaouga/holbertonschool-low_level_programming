#include <stdio.h>
/**
 * main - Entry points
 *
 * Description: prints all possible combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
if
(i != 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
