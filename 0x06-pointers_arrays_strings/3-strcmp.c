#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first param
 * @s2: second param
 * Return: the difference in s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (*s1 - *s2);
		}
		i++;
	}
	return (0);
}
