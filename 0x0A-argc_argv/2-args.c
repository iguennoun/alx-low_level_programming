#include <stdio.h>
#include <stdlib.h>

/**
** main - prints all arguments it receives
** @argc: Number of the program arguments
** @argv: Array of the program arguments
** Return: EXIT_SUCCESS = 0 = success
*/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
