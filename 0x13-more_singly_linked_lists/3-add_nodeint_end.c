#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a "listint_t" list
 * @head: Head of a singly linked list
 * @n: An element of "listint_t"
 *
 * Return: @ of the new element (tail of the list) or NUll if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *bucket_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	bucket_node = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (bucket_node->next != NULL)
		{
			bucket_node = bucket_node->next;
		}
		bucket_node->next = new_node;
	}

	return (*head);
}
