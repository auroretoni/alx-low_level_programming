#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int c, x, j, ia;

	if (ac == 0)
		return (NULL);
	for (c = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);
		for (j = 0; av[x][j] != '\0'; j++)
			c++;
		c++;
	}
	result = malloc((c + 1) * sizeof(char));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (x = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[x][j] == '\0')
		{
			result[ia] = '\n';
			x++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			result[ia] = av[x][j];
	}
	result[ia] = '\0';
	return (result);
}
