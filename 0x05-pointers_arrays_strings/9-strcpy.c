#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: a pointer to char
 * @src: another char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';

	return (dest);
}
