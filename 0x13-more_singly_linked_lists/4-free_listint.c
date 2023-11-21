#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the first node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *edd, *dee;

	if (head == NULL)
		return;

	edd = head;

	while (edd != NULL)
	{
		dee = edd;
		edd = edd->next;
		free(dee);
	}
}
