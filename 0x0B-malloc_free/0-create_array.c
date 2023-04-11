#include <stdlib.h>

/**
** create_array - create array of size "size" and assign char c
** @size: The size of the array
** @c: the character to initialize with
** Return: pointer to array, NULL if fail
*/

char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);

}
