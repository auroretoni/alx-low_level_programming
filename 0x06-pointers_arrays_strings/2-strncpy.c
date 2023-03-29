#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int x;

	x = 0;
	while (src[x] != '\0' && x < n)
{
	src[x] = dest[x];
	x++;
}
	while (x < n)
{
	dest[x] = '\0';
	x++;
}
	return (dest);
}
