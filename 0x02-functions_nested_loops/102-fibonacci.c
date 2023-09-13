#include <stdio.h>
/**
 * main - prints the first
 * 50 Fibonacci numbers
 * Return:0
 */
int main(void)
{
	int i = 1;
	long int j = 1, k = 2, l;

	printf("%ld, %ld, ", j, k);

	while (i < 48)
	{
		l = j + k;
		printf("%ld, ", l);
		j = k;
		k = l;
		i++;
	}
	l = j + k;
	printf("%ld\n", l);
	return (0);
}

