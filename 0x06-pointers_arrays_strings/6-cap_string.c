#include "main.h"


/**
 * cap_string - a function that capitalizes all words of a string.
 * @T: param. of string
 * Return: a string in capitals
 */

char *cap_string(char *T)
{
	char spc[] = {32, 9, '\n', ',',  ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	int len = 13;
	int a = 0, i;

	while (T[a])
	{
		i = 0;
		while (i < len)
		{
		if ((a == 0 || T[a - 1] == spc[i]) && (T[a] >= 97
					&& T[a] <= 122))
			T[a] = T[a] - 32;
		i++;
		}
		a++;
	}
		return (T);
}
