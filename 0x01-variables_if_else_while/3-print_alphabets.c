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
		putchar(mychar);
	for (mychar = 'A' ; mychar <= 'Z' ; mychar++)
		putchar(mychar);
	putchar('\n');
	return (0);
}
