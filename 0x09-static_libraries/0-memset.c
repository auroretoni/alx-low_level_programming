#include "main.h"

/**
 * _memset - Fills the block of memory with a specific vlue
 * @s: A pointer to the memory area to be filled.
 * @b: The character needed to fill the memory area
 * @n: The number of bytes that needs to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	char *memory = s, value = b;

	for (x = 0; x < n; x++)
		memory[x] = value;
	return (memory);
}
