#include "lists.h"

/**
 * free_listint - Frees a "listint_t" list
 * @head: Head of a singly linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *bucket_node;

	while (head != NULL)
	{
		bucket_node = head;
		free(head);
		head = bucket_node->next;
	}
}
