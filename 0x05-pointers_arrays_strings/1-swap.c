#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
