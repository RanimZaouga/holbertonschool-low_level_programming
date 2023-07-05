#include "main.h"
/**
* *cap_string - upcase words
* @str: string
* Return: str.
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		    str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		    str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		    str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		    str[i - 1] == '}' || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}

		i++;
	}
	return (str);
}
