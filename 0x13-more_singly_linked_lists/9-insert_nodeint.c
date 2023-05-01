#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index
 * @head: The head of the singly linked list
 * @idx: The index of the list where the new node should be added
 *       NB : It start at 0
 * @n: The value of the new node data (n)
 *
 * Return: The @ of the newly added node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new_node, *bucket_node;

	bucket_node = *head;
	if (idx != 0)
	{
		for (c = 0; c < idx - 1 && bucket_node != NULL; c++)
		{
			bucket_node = bucket_node->next;
		}
	}
	if (bucket_node == NULL && c != idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = bucket_node->next;
		bucket_node->next = new_node;
	}

	return (new_node);
}
