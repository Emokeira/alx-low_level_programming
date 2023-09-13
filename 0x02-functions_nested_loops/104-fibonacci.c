#include <stdio.h>
/**
 * main - prints the first
 * 98 Fibonacci numbers
 * Return:0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, count = 2;

	printf("%lu, %lu, ", a, b);

	while (count < 98)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
