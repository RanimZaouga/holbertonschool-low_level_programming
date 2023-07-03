#include "main.h"
#include <string.h>
/**
* *string_toupper - changes all lowercase letters of a string to uppercase
*
* @s: string
* 
* Return: Always 0.
*/

char *string_toupper(char *s)
{
	int n = strlen(s);
	int i;

	for (s[i] >= 'a' && s[i] <= 'z')
	{
		if (s[i] = [97 .. 122])
		{
		s[i] = s[i] - 32;
		}
	}
	return (0);
}
