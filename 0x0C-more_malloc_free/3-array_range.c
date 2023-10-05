#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: min range of the values stored
 * @max: max range of the values stored and number of elements
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *itr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	itr = malloc(sizeof(int) * size);
	if (itr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		itr[i] = min++;

	return (itr);
}
