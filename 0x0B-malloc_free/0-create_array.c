#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: The storaged char
 *
 * Return: pointer to array,NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		p[x] = c;
	return (p);
}
