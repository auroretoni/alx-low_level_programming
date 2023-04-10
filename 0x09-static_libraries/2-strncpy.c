#include "main.h"

/**
 * _strncpy - Copies at most, inputted number
 * of bytes from string src into the dest.
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, src_len = 0;

	while (src[x++])
		src_len++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = src_len; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
