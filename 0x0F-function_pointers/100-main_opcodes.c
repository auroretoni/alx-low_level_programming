#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its own opcodes
 * @argc: number of command-line arguments
 * @argv: array of strings that contain each command-line argument
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, n;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *) main;
	for (x = 0; x < n; x++)
	{
		if  (x == n - 1)
	{
			printf("%02hhx\n", str[x]);
			break;
		}
		printf("%02hhx ", str[x]);
	}
	return (0);
}
