#include "variadic_functions.h"

/**
* sum_them_all - adds all the numbers
* @n: the number of parameters passed
* Return: Always 0
*/

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)

		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
