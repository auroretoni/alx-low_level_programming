#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: the string
 */

void _puts(char *str)

{

	while (*str)

		_putchar(*str++);

	_putchar('\n');

}
