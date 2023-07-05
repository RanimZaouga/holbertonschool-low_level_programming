#include "main.h"
/**
* leet - encode a string into 1337
* @str: string
* Return: string
*/
char *leet(char *str)
{
	char *strp = str;
	char key[] = ['A', 'O', 'E', 'L', 'T'];
	int value[] = ['4', '0', '3', '1', '7'];
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
			*str = 48 + value[i];
			}
		}
		str++;
	}
	return (strp)
}
