#include <stddef.h>

/**
** _strchr - Entry point
** @s: string to searsh in
** @c: the char to find
** Return: the first occurrence of the char 'c' or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
