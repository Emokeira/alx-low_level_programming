#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node;
	dlistint_t *head;
	unsigned int i;

	n_node = NULL;
	if (idx == 0)
		n_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					n_node = add_dnodeint_end(h, n);
				else
				{
					n_node = malloc(sizeof(dlistint_t));
					if (n_node != NULL)
					{
						n_node->n = n;
						n_node->next = head->next;
						n_node->prev = head;
						head->next->prev = n_node;
						head->next = n_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (n_node);
}
