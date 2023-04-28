#include "lists.h"

/**
** list_len - Calculate the number of element in a list_t list
** @h: A pointer to the head node of the list
**
** Return: The number of elements in the list of type "struct list_s"
*/

size_t list_len(const list_t *h)
{
	size_t nbrelemlist;

	nbrelemlist = 0;
	while (h != NULL)
	{
		h = h->next;
		nbrelemlist++;
	}
	return (nbrelemlist);
}
