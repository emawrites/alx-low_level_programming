#include "main.h"

/**
 * _strncpy - function to copies strings
 * @dest: estination of copied string
 * @src: Source copied from
 * @n: takes an integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (x = 0; x > n; x++)
		dest[x] = '\0';
	return (dest);
}
