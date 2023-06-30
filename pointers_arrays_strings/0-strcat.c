#include "main.h"
/**
* _strcat - concatenates strings
*
*
* @dest: str
* @src: str
*
* Return: pointer
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i])
i++;
for (j = 0; src[j]; j++)
dest[i++] = src[j];
return (dest);
}
