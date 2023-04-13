#include <stdlib.h>

/**
** malloc_checked - Allocates "b" bytes of memory
** @b: amount of bytes to allocate
** Return: A pointer to the allocated memory if succeeded
**	   else return 98
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
