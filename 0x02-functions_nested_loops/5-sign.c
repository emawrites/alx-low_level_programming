#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number sign prints
 * Return: 0 if n is 0, 1 if greater than zero, -1 if less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
