#include "main.h"

/**
 * factorial - a function taht returns a given number
 * @n: the number to be calculated
 * Return: returns the factorial n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
