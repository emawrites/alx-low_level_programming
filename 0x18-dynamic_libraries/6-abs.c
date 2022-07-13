#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: takes an integer
 * Return: + if negative value, 1 if > 0, 0 if 0 == 0.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
