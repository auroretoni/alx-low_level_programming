#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1, n2, sum = 0;

	for (n1 = 1; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2]; n2++)
		{
			if (argv[n1][n2] < '0' || argv[n1][n2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[n1]);
	}
	printf("%d\n", sum);
	return (0);
}
