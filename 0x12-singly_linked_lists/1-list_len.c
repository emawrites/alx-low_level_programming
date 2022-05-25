#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked
 * list_t list
 * @h: header pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nbr_ele = 0;

	while (h != NULL)
	{
		h = h->next;
		nbr_ele++;
	}
	return (nbr_ele);
}
