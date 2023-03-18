#include <stdio.h>
/**
** main - Program begening
**
** Return: 0 to stop the program
**
*/
int main(void)
{
	int singdig;

	for (singdig = '0' ; singdig <= '9' ; singdig++)
	{
		putchar(singdig);
		if (singdig != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
