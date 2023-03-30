#include "main.h"

/**
 * _strcat - To concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 *
 * Return: (char *) a pointer to a string first char
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
