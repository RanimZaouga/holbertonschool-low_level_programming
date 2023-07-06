#include "main.h"

/**
* sqrt_recursive - helper function for calculating square root recursively
* @n: input number
* @guess: initial guess for the square root
* Return: square root of n
*/
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (sqrt_recursive(n, guess + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: input number
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_recursive(n, 1));
}
