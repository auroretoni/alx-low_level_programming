#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: function parameter
 * @max: function parameter
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *p, x;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (x = 0; min + x <= max; x++)
		p[x] = min + x;
	return (p);
}
