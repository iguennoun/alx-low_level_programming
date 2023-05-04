#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to the first character of the binary
 *
 * Return: the converted "unsigned int"
 *         or 0 if ("b" is NULL
 *                  or there is another char that is not 0 or 1)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int;

	if (!b || !*b)
		return (0);

	u_int = 0;

	while (*b)
	{
		if (*b == '1')
			u_int = (u_int << 1) | 1;
		else if (*b == '0')
			u_int <<= 1;
		else
			return (0);
		b++;														}

	return (u_int);
}
