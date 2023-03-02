#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 * @a: the array of integers
 * @n: the number of the elements
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
