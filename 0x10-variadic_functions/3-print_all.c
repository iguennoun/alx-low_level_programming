#include "variadic_functions.h"

/**
** print_all - A function that prints anything
** @format: A list of 'types of arguments' passed to the function
**
** Return: print to the stdout
*/
void print_all(const char * const format, ...)
{
	va_list listp;
	char *str;
	const char allowed_t[] = "cifs";
	unsigned int i = 0, j, c = 0;

	va_start(listp, format);
	while (format && format[i])
	{
		j = 0;
		while (allowed_t[j])
		{
			if (format[i] == allowed_t[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(listp, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(listp, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(listp, double)), c = 1;
				break;
			case 's':
				str = va_arg(listp, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(listp);
}
