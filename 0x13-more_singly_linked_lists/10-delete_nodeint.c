#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at given index
 * @head: The head of the singly linked
 * @index: The index of the node to deleted
 *         NB : It start at 0
 *
 * Return: 1 if it succeeds, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *bucket_node, *node_todelete;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	bucket_node = *head;
	if (index == 0)
	{
		bucket_node = bucket_node->next;
		free(*head);
		*head = bucket_node;
		return (1);
	}
	else
	{
		while (bucket_node != NULL && i != index - 1)
		{
			bucket_node = bucket_node->next;
			i++;
		}
		if (i != index - 1)
		{
			return (-1);
		}
		else
		{
			node_todelete = bucket_node->next;
			bucket_node->next = (bucket_node->next)->next;
			free(node_todelete);
			return (1);
		}
	}
}
