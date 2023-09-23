#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>

/* main functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* not main */
void print_array(int *array, size_t inc, size_t size);

#endif
