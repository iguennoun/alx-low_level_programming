#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
** op_add - A function that adds two numbers
** @a: number 1
** @b: number 2
*
** Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
** op_sub - A function that subctracts two numbers
** @a: number 1
** @b: number 2
*
** Return: a - b
**/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
** op_mul - A function that multiplies two numbers
** @a: number 1
** @b: number 2
*
** Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
** op_div - A function that divides two numbers
** @a: number 1
** @b: number 2
*
** Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
** op_mod - A function that calculates the module of two numbers
** @a: number 1
** @b: number 2
*
** Return: a % b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
