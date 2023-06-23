#include "main.h"
/**
* print_numbers - Entry points
*
* print_alphabet - utilizes the _putchar function to print the numbers
*
* Return: Always 0 (success)
*/
void print_numbers(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
_putchar(ch);
_putchar('\n');
}
