#include <stdlib.h>

/**
** _calloc - Allocate an array of 'nmemb' elements of type 'size'
** @nmemb: the number of elements in the array
** @size: size of bytes
** Return: A pointer to the first elem of array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
