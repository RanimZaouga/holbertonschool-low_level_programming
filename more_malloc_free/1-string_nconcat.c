#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concate to s2
 * Return: pointer and null in it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, s1_length = 0, s2_length = 0;
	while (s1 && s1[s1_length])
		s1_length++;
	while (s2 && s2[s2_length])
		s2_length++;
	if (n < s2_length)
		s = malloc(sizeof(char) * (s1_length + n + 1));
	else
		s = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (!s)
		return (NULL);
	while (i < s1_length)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < s2_length && i < (s1_length + n))
		s[i++] = s2[j++];
	while (n >= s2_length && i < (s1_length + s2_length))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);		
}
