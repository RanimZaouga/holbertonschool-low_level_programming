#include "main.h"
/**
* _strncat - concatenates strings
*
*
* @dest: str
* @src: str
*
* Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	while (dest[j])
	{
		j++;
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i + j] = src[i];
		}
		dest[i + j] = '\0';
	}
	return (dest);
}
