#include "lists.h"

/**
 * get_nodeint_at_index - Returns a node of a "listint_t" at a specified index
 * @head: Head of a singly linked list
 * @index: The index of the specified node
 *
 * Return: A node at the specified index or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; (c < index && head != NULL); c++)
	{
		head = head->next;
	}

	return (head);
}
