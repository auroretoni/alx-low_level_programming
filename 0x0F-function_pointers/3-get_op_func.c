#include "3-calc.h"
#include <stddef.h>

/**
 *get_op_func - function selects the correct function to perform.
 *@s: operator used.
 *
 *Return: correct function result or NULL if operator is wrong.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	
	int x;

	x = 0;
	while (x < 5 && s != NULL)
	{
		if (s[0] == *(ops[x].op))
		{
			return (ops[x].f);
		}
		x++;
	}

	return (NULL);
}
