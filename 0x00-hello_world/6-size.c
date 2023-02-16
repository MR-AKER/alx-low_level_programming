#include <stdio.h>

/**
 * main - A program that prints the size of various types on the computer
 * Return: always 0 (congrate)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(S)", sizeof(float));
	return (0);
}
