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
	int headnode_n = 0;

	if (*head == NULL)
	{
		(void)bucket_node;
		return (headnode_n);
	}
	else
	{
		bucket_node = (*head)->next;
		headnode_n = (*head)->n;
		free(*head);
		return (headnode_n);
	}
}
