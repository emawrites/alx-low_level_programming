#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print elements of linkedlist
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			num++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			num++;
		}
	}
	return (num);
}
