#include "main.h"
#include "2-strlen.c"

/**
** puts_half - print half of a string
** @str: the string to print
** Return: void
*/

void puts_half(char *str)
{
	int i;

	i = (_strlen(str) % 2 != 0) ? (_strlen(str) - 1) / 2 : _strlen(str) / 2;
	for (i = i; i < _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
