#include <stdio.h>
/**
 * main - Entry Point
 * Return:0
 */
int main(void)
{
	int i = 1, j = 2, k, l = 0;

	while (j <= 4000000)
	{
		if (j % 2 == 0)
		{
			l += j;
		}
		k = i + j;
		i = j;
		j = k;
	}
	printf("%d\n", l);
	return (0);
}
