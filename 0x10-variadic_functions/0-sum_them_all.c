#include "variadic_functions.h"

/**
** sum_them_all - A function that returns the sum of all its parameters
** @n: nbr of arguments
**
** Return: sum of given parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list listp;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(listp, n);

	for (i = 0; i < n; i++)
		sum += va_arg(listp, int);

	va_end(listp);
	return (sum);
}
