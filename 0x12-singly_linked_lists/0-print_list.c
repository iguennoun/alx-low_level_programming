#include "lists.h"

/**
** print_list - Prints all the elements of a list_t list
** @h: A pointer to the head node of the list
**
** Return: The number of elements in the list of type "struct list_s"
*/

size_t print_list(const list_t *h)
{
	size_t nbrelemlist;

	nbrelemlist = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nbrelemlist++;
	}
	return (nbrelemlist);
}
