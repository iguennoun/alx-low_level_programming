#include "lists.h"

/**
 * pop_listint - Deletes the head node of a "listint_t" list
 * @head: Head of a singly linked list
 *
 * Return: The value of data (n) in the deleted node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *bucket_node;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		bucket_node = *head;
		free(*head);
		*head = bucket_node->next;
		return (bucket_node->n);
	}
}
