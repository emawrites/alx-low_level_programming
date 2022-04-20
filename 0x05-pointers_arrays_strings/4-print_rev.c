#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: a pointer to an int
 *
 * Return: void
 */

void print_rev(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	for (j = j - 1; j >= 0; j--)
	{
		_putchar (s[j]);
	}

	_putchar('\n');
}
