#include <stdlib.h>

/**
** str_concat - concatenate two strings
** @s1: String 1
** @s2: String 2
** Return: A pointer to the new string (S1 + S2)
*/

char *str_concat(char *s1, char *s2)

{
	unsigned int s1nbchar, s2nbchar;
	char *s1s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1nbchar = s2nbchar = 0;
	while (s1[s1nbchar] != '\0')
		s1nbchar++;
	while (s2[s2nbchar] != '\0')
		s2nbchar++;

	s1s2 = malloc(sizeof(char) * (s1nbchar + s2nbchar + 1));

	if (s1s2 == NULL)
		return (NULL);
	
	s1nbchar = s2nbchar = 0;
	while (s1[s1nbchar] != '\0')
	{
		s1s2[s1nbchar] = s1[s1nbchar];
		s1nbchar++;
	}
	while (s2[s2nbchar] != '\0')
	{
		s1s2[s1nbchar] = s2[s2nbchar];
		s1nbchar++, s2nbchar++;
	}
	s1s2[s1nbchar] = '\0';
	
	return (s1s2);
}
