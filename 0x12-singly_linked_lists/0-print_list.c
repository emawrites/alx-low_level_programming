#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: list
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
