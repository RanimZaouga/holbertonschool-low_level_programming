#include <stdio.h>
#include <-std=c11>
/**
 * main - Entry points
 *
 * Description: print hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
for (int i = 0; i < 16; i++)
{
if (i < 10)
putchar('0' + i);
else
{
putchar('A' + (i - 10));
}
}
putchar('\n');
return (0);
}
