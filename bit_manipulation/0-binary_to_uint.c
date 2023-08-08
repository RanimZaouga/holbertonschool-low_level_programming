#include "main.h"
/**
 * binary_to_uint - function that convert a binary number to unsigned int
 * @b: the number to convert
 * Return: convert number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		sum += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (sum);
}
