#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates strings
 * @dest: destination pointer
 * @src: source input pointer
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);
}
