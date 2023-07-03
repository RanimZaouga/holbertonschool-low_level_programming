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
	while (*s1)
	{
		if (*s1 != *s2)
		{
			return (((int)*s1 - 48) - ((int)*s2 - 48));
		}
		s1++;
		s2++;
	}
	return (0);
}
