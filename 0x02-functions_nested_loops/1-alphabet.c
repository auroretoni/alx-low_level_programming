#include <main.h>

/**
 * print_alphabet - prints the alphabets abcd
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
	putchar('\n');
}
