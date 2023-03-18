#include <stdio.h>
/**
** main - Program begening
**
** Return: 0 to stop the program
**
*/
int main(void)
{
	int dig;

	for (dig = 0 ; dig < 10 ; dig++)
		putchar('0' + dig);
	putchar('\n');
	return (0);
}
