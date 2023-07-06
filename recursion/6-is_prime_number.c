#include "main.h"
/**
* is_prime_recursive - helper function for checking prime numbers recursively
* @n: input number
* @i: divisor
* Return: 1 if prime, 0 otherwise
*/
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_recursive(n, i - 1));
}

int is_prime_number(int n)
/**
* is_prime_number - checks if a number is prime using recursion
* @n: input number
* Return: 1 if prime, 0 otherwise
*/
{
	return (is_prime_recursive(n, n - 1));
}
