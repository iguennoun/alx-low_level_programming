#include "lists.h"

/**
 * free_listint2 - Frees a "listint_t" list
 * @head: Head of a singly linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *bucket_node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			bucket_node = (*head)->next;
			free(*head);
			*head = bucket_node;
		}

		*head = NULL;

	}
}
