#include "lists.h"

/**
 * pop_listint - a function that deletes the head note of a listint_t
 * list and returns the head node's data(n)
 * @head: pointer to the first node
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *edd;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	edd = *head;
	n = edd->n;
	*head = (*head)->next;
	free(edd);

	return (n);
}
