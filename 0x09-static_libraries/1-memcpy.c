#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: A pointer to the memory area that is needed to copy @src into.
 * @src: The buffer source to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	char *destination = dest;

	char *source = src;

	for (x = 0; x < n; x++)
		destination[x] = source[x];
	return (dest);
}
