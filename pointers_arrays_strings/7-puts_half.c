#include "main.h"

/**
* puts_half - prints half a string
*
* @str: string
*
* Return: nothing
*/

void puts_half(char *str)
{
int i;
int l = _strlen(str);
int n = (l - 1) / 2;
for (i = 0; str[i] != '\0'; ++i)
{
if (i >= n)
_putchar(str[i]);
}
_putchar('\n');
}
