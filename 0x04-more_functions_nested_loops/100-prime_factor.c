#include <stdio.h>
#include <math.h>
/**
 * main - a C program that finds
 * and prints the largerst prime
 * factor of the number
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int i;
	long int l_factor = 0;

	for (i = 1; i * i <= n; i++)
	{
		while ((n & i) == 0)
		{
			l_factor = i;
			n /= i;
		}
	}
	if (n > 1)
		l_factor = n;
	printf("%ld", l_factor);
	printf("\n");

	return (0);
}
