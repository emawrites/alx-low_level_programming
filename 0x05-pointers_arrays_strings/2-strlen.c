#include "main.h"

/**
 * _strlen - length of a string
 * @s: points to an int
 *
 * Return: void
 */

int _strlen(char *s)
{
	int t;

	t = 0;
	while (s[t] != '\n')
	{
		t++;
	}
	return (t);
}
