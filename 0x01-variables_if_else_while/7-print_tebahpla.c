#include <stdio.h>
/**
 * main - Entry Point
 * Programs that prints the
 * alphabet in lowercase
 * in reverse
 * Return: 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
