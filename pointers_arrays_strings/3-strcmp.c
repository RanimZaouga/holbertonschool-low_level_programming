#include "main.h"
/**
* _strcmp - compare two strings
*
*
* @s1: str
* @s2: str
*
* Return: 1 if true 0 if false
*/
int _strcmp(char *s1, char *s2)
{
	int equal = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
}
