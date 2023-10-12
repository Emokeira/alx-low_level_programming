#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;

	va_start(ar, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ar);
	printf("\n");
}
