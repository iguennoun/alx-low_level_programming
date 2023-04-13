#include <stdlib.h>

/**
** string_nconcat - func that concatenates 2 strings
** @s1: string 1
** @s2: string 2
** @n: n amount of bytes of "s2" to concat
** Return: return a pointer to the new s1+s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	unsigned int s1len, s2len, i;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	s1len = 0;
	s2len = 0;

	while (s2[s2len] != '\0')
		s2len++;

	while (s1[s1len] != '\0')
		s1len++;

	if (n > s2len)
		n = s2len;

	s1s2 = malloc(sizeof(char) * n + s1len + 1);

	if (s1s2 == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		s1s2[i] = s1[i];
	for (i = 0; i < n; i++)
		s1s2[i + s1len] = s2[i];

	s1s2[s1len + n] = '\0';
	return (s1s2);
}
