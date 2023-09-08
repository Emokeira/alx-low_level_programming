#include <stdio.h>
/**
 * main - Entry Point
 * Program that prints all
 * the numbers of base 16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 97;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
