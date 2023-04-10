#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src
 * @dest: A buffer to copy to.
 * @src: A source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);

}
