#include "variadic_functions.h"

/**
** print_numbers - Function that prints numbers separated by a separator
** @separator: string separating numbers
** @n: nbr of integers passed to the function
**
** Return: print to stdout.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listp;
	unsigned int i;

	va_start(listp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(listp, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(listp);
}
