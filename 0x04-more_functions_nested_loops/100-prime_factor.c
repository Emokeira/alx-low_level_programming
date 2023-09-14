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

	while (factor != num)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", num);
	return (0);
}
