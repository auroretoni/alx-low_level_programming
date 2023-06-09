#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: a parameter
 * @size: function parameter
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		a[nmemb] = 0;
	return ((void *)a);
}
