#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a "listint_t" list
 * @head: Head of a singly linked list
 * @n: An element of "listint_t"
 *
 * Return: @ of the new element (head of the list) or NUll if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
