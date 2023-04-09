#include <stdio.h>
#include <stdlib.h>

/**
** main - Print the number of arguments passed into it
** @argc: Number of arguments
** @argv: Array of arguments
**
** Return: EXIT_SUCCESS = 0 = (Success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
