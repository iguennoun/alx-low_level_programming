#include "variadic_functions.h"

/**
** print_strings -Function to print strings separated by a separator
** @separator: Separator between strings
** @n: Nbr of strings passed to the function
**
** Return: print to the stdout
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list listp;
	char *str;
	unsigned int i;

	va_start(listp, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(listp, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");

	va_end(listp);
}
