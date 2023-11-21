#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: nth node to be found
 *
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *edd;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	edd = head;

	while (edd && count < index)
	{
		edd = edd->next;
		count++;
	}

	return (edd);
}
