#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* main - Entry points
*
* Description: mumbers fizz buzz
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && !(n % 5 == 0))
printf("Fizz");
else if (n % 5 == 0 && !(n % 3 == 0))
printf("Buzz");
else if (n % 3 == 0 && n % 5 == 0)
printf("FizzBuzz");
else
printf("%d", n);

if (n != 100)
printf(" ");
else
printf("\n");

}
return (0);
}
