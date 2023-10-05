#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: pointer to the new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mmr;

	mmr = malloc(b);

	if (mmr == NULL)
		exit(98);
	return (mmr);
}
