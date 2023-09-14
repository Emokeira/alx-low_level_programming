#include "main.h"
/**
 * print_most_numbers - A function that
 * prints numbers 0 to 9
 * skips 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
