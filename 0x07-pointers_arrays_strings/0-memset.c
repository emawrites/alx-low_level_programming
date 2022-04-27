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

	a = 0;

	while (a < n;)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
