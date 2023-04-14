#include <stdlib.h>

/**
** array_range - Creates an array of integers of size (max-min+1)
** @min: minimum value
** @max: maximum value
** Return: A pointer to the newly created array of "int"
**	  or NULL (if man > mix or malloc fails)
*/

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
