#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination of copied memory
 * @src: memory source
 * @n: number of bytes
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}