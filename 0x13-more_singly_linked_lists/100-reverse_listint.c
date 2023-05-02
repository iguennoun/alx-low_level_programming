#include "lists.h"

/**
 * reverse_listint - Function that reverses a singly linked list
 * @head: Head of a the singly linked list "listint_t"
 *
 * Return: A pointer to the new head of the singly linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bucket_node = NULL, *next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = bucket_node;
		bucket_node = *head;
		*head = next_node;
	}

	*head = bucket_node;
	return (*head);
}
