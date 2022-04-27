#include "main.h"

/**
 * _memset - fill memory
 * @s: memeory point
 * @b: constant byte
 * @n: memorty byte to fill
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	while (i < n)
	{
		(*s + i) = b;
		i++;
	}

	return (s);
}
