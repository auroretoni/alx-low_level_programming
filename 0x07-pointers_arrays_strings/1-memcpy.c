#include "main.h"

/**
*_memcpy - a function that copies from  memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: area size
 * Return: returns a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
