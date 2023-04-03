#include "main.h"

/**
 * _strchr - a function that locate a char in astring
 * @s:the  string
 * @c: the character to locate
 * Return: always 0(Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
{
	if (s[i] == c)
	return ((s + i));
	if (s[i] == 0)
	break;
}
return (0);
}
