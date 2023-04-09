#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments passed
 * @argv: array of arguments in the program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
