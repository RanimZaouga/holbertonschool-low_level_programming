#include "main.h"
/**
* _srtchr - locates a character in a string
* @s: char
* @c: char
* Return: occ c in s or null if not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
