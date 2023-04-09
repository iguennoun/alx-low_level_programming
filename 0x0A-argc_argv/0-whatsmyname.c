#include <stdio.h>
#include <stdlib.h>

/**
** main - prints the name of the program, followed by '\n'
** @argc: Number of arguments
** @argv: Array of arguments if any
**
** Return: EXIT_SUCCESS = 0 = (Success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
