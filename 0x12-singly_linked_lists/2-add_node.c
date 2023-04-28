#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
** add_node - Adds a new node at the beginning of "List_t list"
** @head:  Pointer of pointer to the "list_t list"
** @str: New string to add in the node
**
** Return: The @ of the new element, or NULL if error
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	while (str[len])
		len++;
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
