#include "main.h"

/**
 * _strcat - Concatenates two strings
 * null byte, to the end of the string pointed to by @dest.
 * @dest: input value
 * @src: input value
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, dest_len = 0;

	while (dest[x++])
		dest_len++;

	for (x = 0; src[x]; x++)
		dest[dest_len++] = src[x];

	return (dest);
}
