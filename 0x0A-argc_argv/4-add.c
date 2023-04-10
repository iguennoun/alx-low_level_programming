#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
** main - prints the sum of positive numbers in params + '\n'
** @argc: Number of the program arguments
** @argv: Array of the program arguments
** Return: EXIT_SUCCESS = 0 if success or EXIT_FAILURE case else
*/

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		while (argc-- > 1)
		{
			(void) *argv++;
			for (i = 0; (*argv)[i] != '\0'; i++)
			{
				if (!isdigit((*argv)[i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(*argv);
		}
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}
}
