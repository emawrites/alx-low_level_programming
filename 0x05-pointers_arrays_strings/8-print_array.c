#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: integer to be updated
 * @n: takes an integer
 * Return: void
 */

void print_array(int *a, int *n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (a - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
