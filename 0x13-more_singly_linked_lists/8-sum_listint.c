#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data
 * @head: pointer to the first node
 *
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *edd;

	if (head == NULL)
		return (0);

	edd = head;

	while (edd != NULL)
	{
		sum += edd->n;
		edd = edd->next;
	}

	return (sum);
}
