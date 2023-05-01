#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data (n) in "Listint_t" list nodes
 * @head: The head of a singly linked list
 *
 * Return: The sum of data (n) in all "listint_t" nodes
 */
int sum_listint(listint_t *head)
{
	int list_n_sum = 0;

	while (head != NULL)
	{
		list_n_sum += head->n;
		head = head->next;
	}

	return (list_n_sum);
}
