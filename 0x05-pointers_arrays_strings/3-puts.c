#include "main.h"

/**
** _puts - prints a string + \n
** @str: The string to print
** Return: void
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}