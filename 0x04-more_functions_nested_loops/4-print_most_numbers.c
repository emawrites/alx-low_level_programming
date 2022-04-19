#include "main.h"

/**
 * print_most_numbers - prints nos from 0-9
 *
 * Return: 0.
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; 1 < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0')
	}
	_putchar('\n');
}
