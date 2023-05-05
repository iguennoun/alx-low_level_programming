#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip
 *             to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits to flip to get from @n to @m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr_bits = 0;

	while ((n ^ m) > 0)
	{
		if ((n & 1) != (m & 1))
			nbr_bits++;

		n >>= 1, m >>= 1;
	}

	return (nbr_bits);
}
