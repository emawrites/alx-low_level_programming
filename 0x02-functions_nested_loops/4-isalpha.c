#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: takes character.
 * Return: 0 otherwise, 1 if a letter, lowercase, uppercase.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
