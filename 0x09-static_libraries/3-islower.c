#include "main.h"

/**
 * _islower - checks if input is uppercase or lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if lowercase is true, 0 if uppercase is true.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
