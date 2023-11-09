#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all parameters
 * @n: number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ar, int);

	va_end(ar);

	return (sum);
}

