#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: pointer to the function to compare
 * Return: index of the matched character or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
	}

	return (-1);
}
