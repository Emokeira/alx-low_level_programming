#include "main.h"

/**
 * alloc_grid -function returns a pointer to a 2 dimensional array of integers.
 * @width: number of columns
 * @height: number of rows
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **strng;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	strng = malloc(height * sizeof(int *));
	if (strng == NULL)
	{
		free(strng);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		strng[i] = malloc(width * sizeof(int));
		if (strng[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(strng[i]);
			free(strng);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			strng[i][j] = 0;

	return (strng);
}

