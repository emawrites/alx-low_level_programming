#include <main.h>

/**
 * _islower - checkes if a character is lowercase
 * @c: the characater to be checked
 * Return: if character is lowercase, 0, otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
