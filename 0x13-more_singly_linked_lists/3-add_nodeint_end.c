#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end
 * @head: pointer to the list at first node
 * @n: value to be added to the new node
 *
 * Return: address to the new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *edd = *head;

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (edd != NULL && edd->next != NULL)
		edd = edd->next;
	edd->next = n_node;

	return (n_node);
}
