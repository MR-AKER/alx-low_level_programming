#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @R: param
 * Return: string
 */

char *string_toupper(char *R)
{
	int i = 0;

	while (R[i])
	{
		if (R[i] >= 97 && R[i] <= 122)
			R[i] = R[i] - 32;
		i++;
	}
	return (R);
}
