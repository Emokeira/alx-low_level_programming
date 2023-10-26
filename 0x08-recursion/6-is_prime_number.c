#include "main.h"

/**
 * prime2 - a function that returns 1
 * @a: same number as n
 * @b: the number that iterates from 1 to n
 *
 * Return: On success 1.
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - a function that checks if a number is prime
 * @n: input integer
 *
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}

