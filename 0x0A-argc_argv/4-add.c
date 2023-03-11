#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argc parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
