#include "main.h"

/**
** _abs - To omputes the absolute value of an number..
** @n: The number to be computed.
** Return: Absolute value of the number or zero
*/

int _abs(int n)

{
	int abs_val = n;

	if (n < 0)
	{
		abs_val = n * -1;
	}
	return (abs_val);
}
