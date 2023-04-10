#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *
 *@c: variable that holds the character to be checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
