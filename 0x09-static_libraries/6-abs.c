#include "main.h"

/**
 * _abs - prints the absolute value of any integer
 *
 * @c: variable that stores that integer to be checked
 *
 * Return: returns the value of c
 */

int _abs(int c)
{
	if (c > 0)
		c = c;
	else if (c < 0)
		c = -(c);
	return (c);
}
