#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
