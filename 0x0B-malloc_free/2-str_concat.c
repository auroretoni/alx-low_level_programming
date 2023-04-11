#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the nwly concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int a = 0;
	char *p;
	int str1_len = 0;
	int str2_len = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		str1_len += 1;

	for (x = 0; s2[x] != '\0'; x++)
		str2_len += 1;

	p = malloc(sizeof(char) * (str1_len + str2_len));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < str1_len; x++)
		p[x] = s1[x];
	while (s2[a] != '\0')
	{
		p[x] = s2[k];
		x++;
		a++;
	}
	return (p);
}
