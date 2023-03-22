#include "main.h"
#include "6-abs.c"

/**
** print_last_digit - To print the last digit of a number
** @n: The number to compute
** Return: Value of the last digit of number
*/

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
