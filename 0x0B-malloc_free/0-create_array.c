#include "main.h"

/**
 *create_array - function that creates array initialized with specific char
 *@size : the size of array
 *@c : initialized char of an array
 *Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
		char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	*(arr + i) = '\0';
	return (arr);
}

