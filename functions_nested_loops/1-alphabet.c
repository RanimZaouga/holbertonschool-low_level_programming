#include "main.h"
/**
* main - Entry points
* print_alphabet - utilizes the _putchar function to print the alphabet
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
