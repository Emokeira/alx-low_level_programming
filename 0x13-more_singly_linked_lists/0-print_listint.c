#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: pointer to the list to print to STDOUT
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *edd;

	if (h == NULL)
		return (0);

	for (edd = h; edd != NULL; edd = edd->next)
	{
		printf("%d\n", edd->n);
		count++;
	}

	return (count);
}
