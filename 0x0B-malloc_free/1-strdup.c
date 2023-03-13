#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * @str: pointer to a string
 * Return: ptr
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;
	ptr = (char *)malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(ptr + j) = *(str + j);
	}
	*(ptr + j) = '\0';
	return (ptr);
}
