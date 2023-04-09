#include "main.h"

/**
 * _strncat - To concatenate two strings using at most n bytes of @src
 * @dest: the string to append to
 * @src: the string to append
 * @n: nbr of char to cat from @src to @dest
 * Return: (char *) a pointer to a string first char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
