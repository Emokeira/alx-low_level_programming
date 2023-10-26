#include "main.h"

/**
 * sqrt2 - a function that returns the natural square root of a number
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

