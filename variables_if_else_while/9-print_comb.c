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
int i = 0;
while (i <= 9)
{
putchar(i + 48);
if
(i != 9);
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
