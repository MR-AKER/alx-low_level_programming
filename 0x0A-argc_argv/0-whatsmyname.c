#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argc param
 * @argv: an array of command listed
 * Return: 0 for success
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
