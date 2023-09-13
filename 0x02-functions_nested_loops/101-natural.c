#include <stdio.h>
/**
 * main - prints multiples
 * of 3 or 5 under 1024
 * Return:0
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (j < 1024)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			i += j;
		}
		j++;
	}
	printf("%d\n", i);
	return (0);
}
