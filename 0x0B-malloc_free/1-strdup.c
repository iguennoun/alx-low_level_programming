#include <stdlib.h>

/**
** _strdup - duplicate a string in other memory
** @str: string to duplicate
** Return: char pointer to newly duplicated string or NULL
*/

char *_strdup(char *str)
{
	unsigned int nbrchar = 0, i;
	char *dupstr;

	if (str == NULL)
		return (NULL);

	while (str[nbrchar] != '\0')
		nbrchar++;

	dupstr = malloc(sizeof(char) * nbrchar + 1);

	if (dupstr == NULL)
		return (NULL);

	for (i = 0; i < nbrchar; i++)
		dupstr[i] = str[i];

	return (dupstr);

}
