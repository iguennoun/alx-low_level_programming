#include "main.h"

/**
** times_table - times table function
** "32 <= ' '" , "44 <= ','"
*/

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = j * i;
			if (j == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(prod + '0');
			} else
			{
				_putchar(44);
				_putchar(32);
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
