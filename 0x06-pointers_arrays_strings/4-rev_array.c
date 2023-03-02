#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array a
 * @n: element of array
 */

void reverse_array(int *a, int n)
{
	int len;

	for (len = n; len >= 0; len--)
	{
		printf("%d, ", a[len]);
	}
}
