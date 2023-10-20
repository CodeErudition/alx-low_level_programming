#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a list_t list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: int (in this case the number of elements in the list).
 */

size_t list_len(const list_t *h)
{
	size_t indx;

	for (indx = 0; h != NULL; indx++)
	{
		h = h->next;
	}
	return (indx);
}
