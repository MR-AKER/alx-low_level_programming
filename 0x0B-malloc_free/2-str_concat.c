#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, tot_len;
	unsigned int j = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;
	tot_len = len1 + len2;
	ptr = (char *)malloc(tot_len * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < tot_len; i++)
	{
		if (*(s1 + j) != '\0')
		{
			*(ptr + i) = *(s1 + j);
			j++;
		}
		else if (*(s1 + j) == '\0' && *(s2 + k) != '\0')
		{
			*(ptr + i) = *(s2 + k);
			k++;
		}
	}
	*(ptr + i) = '\0';
	return (ptr);
}
