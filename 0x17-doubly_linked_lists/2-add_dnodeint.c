#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *h;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	n_node->next = h;

	if (h != NULL)
		h->prev = n_node;

	*head = n_node;

	return (n_node);
}
