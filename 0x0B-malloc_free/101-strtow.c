#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array
 * @grid: multidimensional array of char
 * @height: height of the array
 *
 * Return: no return
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **result;
	unsigned int c, height, x, y, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	result = malloc((height + 1) * sizeof(char *));
	if (result == NULL || height == 0)
	{
		free(result);
		return (NULL);
	}
	for (x = a1 = 0; x < height; x++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				result[x] = malloc((c - a1 + 2) * sizeof(char));
				if (result[x] == NULL)
				{
					ch_free_grid(result, x);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; a1 <= c; a1++, y++)
			result[x][y] = str[a1];
		result[x][y] = '\0';
	}
	result[x] = NULL;
	return (result);
}
