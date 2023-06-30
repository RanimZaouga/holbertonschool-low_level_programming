#include "main.h"
/**
* print_most_numbers - Entry points
*
* print_alphabet - utilizes the _putchar function to print the numbers
*
* Return: Always 0 (success)
*/
void print_most_numbers(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
if (ch != '2' && ch != '4')
_putchar(ch);
}
_putchar('\n');
}
