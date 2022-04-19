#include "main.h"

/**
 * more_numbers - prints nos from 0 -14, 10 times
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (k = 0; k < 10; k++)
	{
	for (i = 0; i <= 1; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if (!(i == 1 && j >= 5))
	{
		if (i)
		_putchar(i + '0');
		_putchar(j + '0');
	}
	}
	}
	_putchar('\n');
	}
}
