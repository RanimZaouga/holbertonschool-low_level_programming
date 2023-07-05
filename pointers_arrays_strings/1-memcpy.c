#include "main.h"
/**
* _memcpy - coppies memory area
* @dest: char
* @src: char
* @n: int
* Return: str
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
