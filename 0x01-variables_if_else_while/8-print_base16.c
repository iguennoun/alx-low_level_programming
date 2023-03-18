#include <stdio.h>
/**
** main - Program begening
**
** Return: 0 to stop the program
**
*/
int main(void)
{
	char dig, mychar;

	for (dig = '0' ; dig <= '9'  ; dig++)
		putchar(dig);
	for (mychar = 'a' ; mychar <= 'f' ; mychar++)
		putchar(mychar);
	putchar('\n');
	return (0);
}
