#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory arear to fill
 * @b: character to copy
 * @n: number of times to copy char b
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array using calloc
 * @nmemb: number of elements in the array
 * @size: size of each array
 * Return: pointer to the newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = malloc(size * nmemb);
	if (output == NULL)
		return (NULL);
	_memset(output, 0, nmemb * size);

	return (output);
}

