#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: array of integers in the program
 * @size: The size of the array in the program.
 * @cmp: A pointer to the function to be used
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
