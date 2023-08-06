#include <stdio.h>
/**
 * print_before_main - function that print string before 
 * the main functionis excuted
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
