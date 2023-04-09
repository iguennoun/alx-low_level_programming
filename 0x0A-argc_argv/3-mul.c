#include <stdio.h>
#include <stdlib.h>

/**
** main - prints the result of the multiplication of 2 params + '\n'
** @argc: Number of the program arguments
** @argv: Array of the program arguments
** Return: EXIT_SUCCESS = 0 if success of EXIT_FAILURE case else
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		exit(EXIT_SUCCESS);
	}
}
