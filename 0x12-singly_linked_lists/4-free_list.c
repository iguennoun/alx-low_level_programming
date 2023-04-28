#include "lists.h"

/**
** free_list - Frees "List_t list"
** @head: A pointer to the head node of "list_t list" to be freed
*/
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
