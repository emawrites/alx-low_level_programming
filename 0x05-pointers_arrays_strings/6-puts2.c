#include "main.h"

/**
 * puts2 - prints every other xter of a string
 * starting with the first xter, then a new line.
 * @str: pointer to an int
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}

	_putchar ('\n');
}
