#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: Input
 * @accept: Input
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
				return (s);
		}
		s++;
	}
	return ('\0');
}
