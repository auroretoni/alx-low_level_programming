#include <stdio.h>

/**
* print_diagsums - a function that prints the sum of
* the two diagonals of a square matrix of integers
* @a: pointer to the array
* @size: size of the array
* Return: returns nothing
*/
void print_diagsums(int *a, int size)
{
	int x;
	int n = 0, s1 = 0, s2 = 1;
	long int d1 = 0, d2 = 0;

	for (x = 0; x < size; x++)
	{
	d1 += a[(size * s1) + s2];

	s1++;
	}
	for (x = 0; x < size; x++)
	{
	d2 += a[(size * n) + (size - s2)];
	n++;
	s2++;
	}
		printf("%ld, %ld\n", d1, d2);
}
