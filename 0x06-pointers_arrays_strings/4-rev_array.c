#include "main.h"
#include "stdio.h"

/**
 * reverse_array - a function that
 * reverses the content of an
 * array of integers.
 * @a: pointer array
 * @n: elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, k = 0, j[40], l;

	for (; i < n && n != '\0'; i++)
		j[i] = a[i];
	n--;
	l = n;
	for (; k <= l; k++)
	{
		a[k] = j[n];
		n--;
	}
}
