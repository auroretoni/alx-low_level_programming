#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @d: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *d)
{
	int sign = 1;

	unsigned int num = 0;

	do {
		if (*d == '-')
			sign *= -1;
		else if (*d >= '0' && *d <= '9')
			num = (num * 10) + (*d - '0');
		else if (num > 0)
			break;
	} while (*d++);
	return (num * sign);
}
