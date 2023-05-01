#include "lists.h"

/**
 * listint_len - Returns the number of elements in a "struct listint_s" list
 * @h: Head of a the singly linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nbrelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nbrelem++;
	}
	return (nbrelem);
}
