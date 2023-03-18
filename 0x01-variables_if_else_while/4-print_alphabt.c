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

	for (mychar = 'a' ; mychar <= 'z' ; mychar++)
	{
		if (mychar != 'q' && mychar != 'e')
		putchar(mychar);
	}
	putchar('\n');
	return (0);
}
