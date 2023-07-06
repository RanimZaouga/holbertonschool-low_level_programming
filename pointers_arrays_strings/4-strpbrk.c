#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: char
* @accept: char
* Return:  pointer to the byte in s that matches one of the bytes
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);

}
