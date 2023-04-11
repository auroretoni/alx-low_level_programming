#include <stdlib.h>

/**
 * _strdup - Writes a function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated.
 *
 * Return: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *p;
	int str_size = 0;
	int x = 0;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
	{
		str_size += 1;
		x++;
	}

	p = malloc(sizeof(char) * (str_size + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < str_size; x++)
		p[x] = str[x];
	return (p);
}
