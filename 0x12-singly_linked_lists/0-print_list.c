#include "lists.h"

/**
 *  * print_list - a function that prints all elements of a list_list
 *   * @h: list containing elements to print
 *    *
 *     * Return: size_t
 *      */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", (h->str == NULL) ? 0 : h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		count++;
		h = h->next;
	}
	return (count);
}

