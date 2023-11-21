#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: double pointer to the first node
 * @index: node to delete
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *edd, *dee;

	if (*head == NULL)
		return (-1);

	edd = *head;

	if (index == 0)
	{
		edd = edd->next;
		free(*head);
		*head = edd;
		return (1);
	}

	for (i = 0; edd != NULL && i < index - 1; i++)
		edd = edd->next;
	if (i != index - 1)
		return (-1);

	dee = edd;
	edd = edd->next;
	dee->next = edd->next;
	free(edd);

	return (1);
}
