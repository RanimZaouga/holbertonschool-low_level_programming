#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Description: print last digit
*Return: Always 0 (success)
*/

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	/* your code goes there */
if (i > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, i);
if (i == 0)
printf("Last digit of %d is %d and is 0\n", n, i);
if (i < 6 && i != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	return (0);
}
