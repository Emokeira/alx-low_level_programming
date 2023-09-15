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
	long num = 612852476143;
	long factor = 2;

	for (; factor <= num; factor++)
	{
		if (num % factor == 0)
		{
			num = num / factor;
			factor--;
		}
	}
	printf("%lu\n", factor);

	return (0);
}
