#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print all natural number from 0 to 98
 * @n: The number to start printing from
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d,", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	}
	else
	{
	printf("%d,", n);
	}
	}
	}
}
