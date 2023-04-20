#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
** get_op_func - A function that selects the correct function
**		 to perform the operation asked by the user
** @s: char operator
*
** Return: A pointer to the function that corresponds
**	   to the operator choosen by the user
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	int i = 0;

	while (ops[i].op)
	{
		if (s[0] == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
