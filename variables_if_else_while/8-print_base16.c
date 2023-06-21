#include <stdio.h>
/**
 * main - Entry points
 *
 * Description: print hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char i = '0';
char c = 'a';

while (i <= '9')
{
putchar(i);
i++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
