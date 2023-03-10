#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result = 0, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
