#include "main.h"

/**
** _strncpy - To copy a string into another
** @dest: string to overwrite
** @src: string to copy
** @n: nbr of chars to copy from @src
**
** Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
