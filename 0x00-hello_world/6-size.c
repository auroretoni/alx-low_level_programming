#include <stdio.h>
/**
 * main - A program that prints the size of various types on computer
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long: %i bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("size of a float: %i bytes(s)\n", sizeof(float));
		return (0);
}
