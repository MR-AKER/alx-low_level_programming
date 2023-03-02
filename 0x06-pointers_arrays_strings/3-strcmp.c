#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: first param
 * @s2: second param
 * Return: if str1 < str2, the negative difference
 * of the first unmatched character
 * if str1 == str2, 0.
 * if str1 > str2 the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 < *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
