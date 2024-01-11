#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int numb;

	numb = 0;

	if (h == NULL)
		return (numb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
