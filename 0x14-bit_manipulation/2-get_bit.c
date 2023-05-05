#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index of o long int
 * @n: Unsigned long int
 * @index: Index of the bit to get from @n
 *
 * Return: value of the bit or -1 when error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
