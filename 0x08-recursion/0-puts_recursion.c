#include "main.h"

/**
** _puts_recursion - it print a string + '\n'
** @s: pointer to a string
** Return: an output into the standard output;
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
		_putchar('\n');
}
