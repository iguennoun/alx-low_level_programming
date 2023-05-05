#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a sepecified index
 * @n: Pointer to an unsigned long int
 * @index: Index of the bit to change in @n
 *
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = (*n & ~(1 << index));

	return (1);
}
