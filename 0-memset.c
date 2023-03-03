#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: first address of memory
 * @b: The desire memory
 * @n: Numbe of bytes to ve changed
 * Return: change array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (0);
}
