#include "lists.h"

/**
 * print_listint - Prints all the elements of a "struct listint_s"
 * @h: Head of a the singly linked list
 * Return: Number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nbrelem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbrelem++;
	}
	return (nbrelem);
}
