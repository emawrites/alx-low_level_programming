#include "main.h"

/**
 * print_numbers - prints nos from 0 - 9
 *
 * Return: 0.
 */

int print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	_putchar(i + '0');
	_putchar('\n');
}