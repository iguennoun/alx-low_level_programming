#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
** main - prints the min num of coins to make change for
**        an amount of money + '\n'
** @argc: Number of the program arguments
** @argv: Array of the program arguments
** Return: EXIT_SUCCESS = 0 if success or EXIT_FAILURE case else
*/

int main(int argc, char **argv)
{
	int nbr_coins = 0, amount_of_money;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	amount_of_money = atoi(argv[1]);
	while (amount_of_money > 0)
	{
		if (amount_of_money >= 25)
			amount_of_money -= 25;
		else if (amount_of_money >= 10)
			amount_of_money -= 10;
		else if (amount_of_money >= 5)
			amount_of_money -= 5;
		else if (amount_of_money >= 2)
			amount_of_money -= 2;
		else if (amount_of_money >= 1)
			amount_of_money -= 1;
		nbr_coins++;
	}
	printf("%d\n", nbr_coins);
	exit(EXIT_SUCCESS);
}
