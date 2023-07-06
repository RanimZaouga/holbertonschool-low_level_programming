#include "main.h"
/**
* is_prime_recursive - helper function for calculating
* @n: input number
* @i: initial
* Return: prime number
*/
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);
	
	if (i == 1)
		return (1);
	
	if (n % i == 0)
		return (0);
	
	return is_prime_recursive(n, i - 1);
}

int is_prime_number(int n)
/**
* is_prime_number - returns the natural square root of a number
* @n: input number
* Return: 1 if primr number
*/
{
	return (is_prime_recursive(n, n - 1));
}
