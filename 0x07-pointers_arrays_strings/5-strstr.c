#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that finds a substring
 * @haystack: string to be tested
 * @needle: the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int x, y = 0, k;

	for (x = 0; haystack[x] != 0; x++)
	{
	k = x;
	y = 0;
	for (; needle[y] != 0; )
	{
	if (haystack[k++] == needle[y++])
	{
	continue;
	}
	break;
	}

	if (needle[y] == '\0')
	return ((haystack + x));
	}
	return (NULL);
}
