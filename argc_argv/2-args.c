#include <stdio.h>
#include "main.h"

/**
*main - prints all args it revieves
* @argc: number of args
* @argv: array of args
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
