#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list
 * @h: pointer to the list to print
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *edd;

	if (h == NULL)
		return (0);

	for (edd = h; edd != NULL; edd = edd->next)
		count++;

	return (count);
}
