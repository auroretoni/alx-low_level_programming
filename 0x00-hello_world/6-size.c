#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("size of a long: %i bytes(s)\n", sizeof(long int));
	printf("size of a long long: %ibyte(s)\n", sizeof(long long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));
		return (0);
}
