#include <stdio.h>


/**
 * pre_main - a funtion
 * Return: no return
 */

void __attribute__ ((constructor)) pre_main()

{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
