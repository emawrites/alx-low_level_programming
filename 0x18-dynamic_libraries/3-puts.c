#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to an int
 *
 * Return: void
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
