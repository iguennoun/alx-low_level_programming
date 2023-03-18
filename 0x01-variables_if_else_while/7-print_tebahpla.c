#include <stdio.h>
/**
** main - Program begening
**
** Return: 0 to stop the program
**
*/
int main(void)
{
	char mychar;

	for (mychar = 'z' ; mychar >= 'a' ; mychar--)
		putchar(mychar);
	putchar('\n');
	return (0);
}
