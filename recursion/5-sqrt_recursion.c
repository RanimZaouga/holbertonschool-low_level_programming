#include "main.h"

/**
* _sqrt_recursion - returns natural square root of a number
* @n: input
* Return: Always 0.
*/
#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 1.0));
}
