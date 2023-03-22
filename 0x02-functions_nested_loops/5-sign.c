#include "main.h"

/**
** print_sign - To prints the sign of a number
** @n: The number to be checked, "43 <= +", "45 <= -", "48 <=0"
** Return: 1 for positive number, 0 for 0 and -1 for anything else (- number)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (-0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
