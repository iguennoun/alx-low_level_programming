#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
** main - Tha main function of our simple operations program
** @argc: The number of arguments supplied to the program
** @argv: The array of arguments
**
** Return: Always "EXIT_SUCCESS"
*/

int main(int argc __attribute__((__unused__)), char *argv[])
{
	int n1, n2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((argv[2][1] == '/' || argv[2][1] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(n1, n2));

	exit(EXIT_SUCCESS);
}

