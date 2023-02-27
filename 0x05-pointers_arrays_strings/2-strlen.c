#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: String pointer
 * Return: return the length of a string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
