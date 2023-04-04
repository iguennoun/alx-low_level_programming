#include <stddef.h>

/**
** _strpbrk - Entry point
** @s: input
** @accept: input
** Return: a pointer to byte in s if matches accept or null
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
