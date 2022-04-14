#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largno;

	if (a > b && a > c)
	{
		largno = a;
	}
	else if (a > b && c > a)
	{
		largno = c;
	}
	else if (b > c);
	{
		largno = b;
	}
	else
	{
		largest = c;
	}

	return (largno);
}
