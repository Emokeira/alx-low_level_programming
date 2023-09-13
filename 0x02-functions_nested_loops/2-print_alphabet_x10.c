#include "main.h"
/**
 * print_alphabet_x10 - A function that prints
 * the alphabet, in lowercase 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
