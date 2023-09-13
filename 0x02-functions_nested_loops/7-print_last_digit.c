#include "main.h"
/**
 * print_last_digit - a function
 * that prints the last digit
 * of a number
 * @c: value to check
 * Return: last digit
 */
int print_last_digit(int c)
{
	int i = c % 10;

	if (i < 0)
		i = -i;
	c = i;
	_putchar('0' + c);
	return (c);
}
