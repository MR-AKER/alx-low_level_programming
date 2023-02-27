#include "main.h"
#include <stdio.h>


/**
 * print_array - a function that prints n elements of an array
 * @a: arrys
 * @n: number of values
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
