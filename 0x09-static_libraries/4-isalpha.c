#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if it is  an alphabet, 0 if its not an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
