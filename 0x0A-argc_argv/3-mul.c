#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc < 3)
	{
		printf("%s\n", "error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
