#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @head: double pointer to the first node
 * @idx: index to add node
 * @n: value to add
 *
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *edd;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		n_node = malloc(sizeof(listint_t));
		if (n_node == NULL)
			return (NULL);
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	edd = *head;

	for (i = 0; edd != NULL && i < idx - 1; i++)
		edd = edd->next;
	if (i != idx - 1)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = edd->next;
	edd->next = n_node;

	return (n_node);
}
