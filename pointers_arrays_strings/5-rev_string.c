#include "main.h"

/**
* rev_string - reverses a string
*
* @s: string
*
* Return: nothing
*/

void rev_string(char *s)
{
int i = 0;
while (s[i])
i++;
{
_putchar(s[i]);
}
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
